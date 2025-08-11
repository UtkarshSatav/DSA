#include <iostream>

using namespace std;

bool isPalindrome(string s) {
    int x = 0;
    int y = s.size() - 1;

    while (x < y) {
        while (x < y && !isalnum(s[x])) x++;
        
        while (x < y && !isalnum(s[y])) y--;

        if (tolower(s[x]) != tolower(s[y])) return false;

        x++;
        y--;
    }

    return true;
}

int main(){
    string
    s = "A";
    cout << (isPalindrome(s) ? "true" : "false") << endl; // Output: true
    s = "banana";
    cout << (isPalindrome(s) ? "true" : "false") << endl; // Output: false
}