#include <iostream>
using namespace std;

int main() {
    int n, num;
    double sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter number: ";
        cin >> num;
        sum += num;
    }

    double average = sum / n;
    cout << "Total Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << (sum / n * 100) / 100 << "%" << endl; // Assuming percentage of average value

    return 0;
}
