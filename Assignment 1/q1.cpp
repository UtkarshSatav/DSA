// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return truefalse.
 
// Example 1:Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.



#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_water = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        max_water = max(max_water, h * w);

        // Move the shorter pointer
        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return max_water;
}