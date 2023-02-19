/*
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

link: https://codeforces.com/problemset/problem/281/A

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    if (islower(word[0])) {
        word[0] = toupper(word[0]);
    }

    cout << word << endl;

    return 0;
}
