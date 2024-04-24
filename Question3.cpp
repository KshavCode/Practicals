#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    // Input text from the user
    cout << "Enter text: ";
    getline(cin, text);

    // Array to store the count of each alphabet (case-insensitive)
    int counts[26] = {0};

    // Iterate through each character in the text
    for (char ch : text) {
        // Convert characters to lowercase if they are alphabets
        if (isalpha(ch)) {
            char lowercase_ch = tolower(ch);
            // Increment count if the character is an alphabet
            counts[lowercase_ch - 'a']++;
        }
    }

    // Print the table indicating the number of occurrences of each alphabet
    cout << "Alphabet Counts:" << endl;
    for (int i = 0; i < 26; ++i) {
        if (i==25) {
            cout << char('a' + 25) << " : " << counts[25];
        }
        else {
            cout << char('a' + i) << " : " << counts[i] << "\t";
        }
        if ((i+1)%3==0) {
            cout << endl;
        }
    }

}
