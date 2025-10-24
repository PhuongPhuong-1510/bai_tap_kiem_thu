#include <iostream>
using namespace std;

// ComputeValue: repeatedly adds |a| to sum, b times.
// If a < 0, it converts a to positive before using it.
int ComputeValue(int a, int b) {
    int sum = 0;
    if (a < 0) {
        a = -a;  // redefinition of a
    }
    while (b > 0) {
        sum = sum + a;  // use of sum, a; def of sum
        b = b - 1;      // def and use of b
    }
    return sum;         // use of sum
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Result = " << ComputeValue(x, y) << endl;
    return 0;
}
