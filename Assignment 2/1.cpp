// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return truefalse.
 
// Example 1:Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.


#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // Compare characters (case-insensitive)
        if (tolower(s[left]) != tolower(s[right])) return false;

        left++;
        right--;
    }

    return true;
}