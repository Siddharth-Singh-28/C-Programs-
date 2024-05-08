#include <iostream>
using namespace std;

class Outer {
private:
    int outerVar;

    class Inner {
    private:
        int innerVar;

    public:
        Inner(int var) : innerVar(var) {}

        void display() {
            cout << "InnerVar: " << innerVar << endl;
        }
    };

public:
    Outer(int var) : outerVar(var) {}

    void display() {
        cout << "OuterVar: " << outerVar << endl;
    }

    void nestedDisplay() {
        Inner inner(10);
        inner.display();
    }
};

int main() {
    Outer outer(5);
    outer.display();
    outer.nestedDisplay();
    return 0;
}
