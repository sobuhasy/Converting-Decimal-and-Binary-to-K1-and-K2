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

int K1ToDecimal(int binary) {
    int MSB = binary / pow(10, floor(log10(binary)));
    if (MSB == 0) {
        return binaryToDecimal(binary);
    }
    else {
        int invertedBinary = pow(10, floor(log10(binary))) - binary;
        return -binaryToDecimal(invertedBinary);
    }
}

int main() {
    int binary;
    cout << "Introduceți un număr binar: ";
    cin >> binary;
    cout << binary << " în binar este " << binaryToDecimal(binary) << " în zecimală.\n";
    cout << binary << " în binar este " << K1ToDecimal(binary) << " în reprezentare K1.\n";
}