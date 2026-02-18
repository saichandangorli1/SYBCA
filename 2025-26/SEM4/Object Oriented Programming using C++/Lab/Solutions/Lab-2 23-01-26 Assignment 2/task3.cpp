#include <iostream>
using namespace std;

int main() {
    int n, originalNum, digit, sum = 0;
    
    cin >> n;
    originalNum = n;

    while (n > 0) {
        digit = n % 10;
        // Basic multiplication instead of pow()
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == originalNum) {
        cout << "Armstrong" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }

    return 0;
}