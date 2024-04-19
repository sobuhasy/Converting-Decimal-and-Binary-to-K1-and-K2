#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;
    while (binary) {
        int lastDigit = binary % 10;
        binary = binary / 10;
        decimal += lastDigit * base;
        base = base * 2;
    }
    return decimal;
}

int main() {
    int binary;
    cout << "Introduceți un număr binar: ";
    cin >> binary;
    cout << binary << " în binar este " << binaryToDecimal(binary) << " în zecimală.\n";
}