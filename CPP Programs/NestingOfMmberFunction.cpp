#include <iostream>
using namespace std;

class Outer {
private:
    int outerVar;

public:
    Outer(int var) : outerVar(var) {}

    void outerDisplay() {
        cout << "OuterVar: " << outerVar << endl;
    }

    class Inner {
    private:
        int innerVar;

    public:
        Inner(int var) : innerVar(var) {}

        void innerDisplay() {
            cout << "InnerVar: " << innerVar << endl;
        }
    };

    void nestedDisplay() {
        Inner inner(10);
        inner.innerDisplay();
    }
};

int main() {
    Outer outer(5);
    outer.outerDisplay();
    outer.nestedDisplay();
    return 0;
}
