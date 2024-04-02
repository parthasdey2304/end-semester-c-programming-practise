#include <iostream>
#include <string>
#include <map>
using namespace std;

string convertToWords(int num) {
    map<int, string> numToWords = {
        {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"},
        {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"},
        {13, "Thirteen"}, {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"},
        {18, "Eighteen"}, {19, "Nineteen"}, {20, "Twenty"}, {30, "Thirty"}, {40, "Forty"},
        {50, "Fifty"}, {60, "Sixty"}, {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}
    };
    if (num <= 20) {
        return numToWords[num];
    } else if (num < 100) {
        int tens = num / 10 * 10;
        int ones = num % 10;
        return numToWords[tens] + " " + numToWords[ones];
    } else if (num < 1000) {
        int hundreds = num / 100;
        int remainder = num % 100;
        return numToWords[hundreds] + " Hundred " + convertToWords(remainder);
    } else {
        return "Number out of range for conversion";
    }
}

int main() {
    int amount;

    cout << "Enter the amount in figures: Rs. ";
    cin >> amount;

    cout << "Amount in words: " << convertToWords(amount) << endl;

    return 0;
}
