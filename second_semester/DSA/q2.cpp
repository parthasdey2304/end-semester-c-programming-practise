#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string perfectFormSentence(string &input) {
    stringstream ss(input);
    string word, perfect_sentence;
    while (ss >> word) {
        perfect_sentence += word + " ";
    }
    return perfect_sentence;
}

int main() {
    string input_sentence;

    cout << "Enter the sentence: ";
    getline(cin, input_sentence);

    string perfect_sentence = perfectFormSentence(input_sentence);
    cout << "New sentence: " << perfect_sentence << endl;

    return 0;
}
