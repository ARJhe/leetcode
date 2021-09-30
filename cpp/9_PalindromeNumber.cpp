#include <bits/stdc++.h>
using namespace std;

// Runtime: 8 ms, faster than 79.24% of C++ online submissions for Palindrome Number.
// Memory Usage : 6.1 MB, less than 12.06 % of C++ online submissions for Palindrome Number.
bool my_isPalindrome(int x)
{
    if (x<0) 
        return 0;
    string s = to_string(x);
    int len = s.length();
    int l =  % 2 == 0 ? len/2 - 1 : len-1/2 -1
    int i = 0;
    int j = 0;
    while (j <= l)
    {
        if (s[j] != s[l - j - 1])
            return false;
        j++;
    }
    return true;             
}

int main(){
    
    return 0;
}
// Use this template always on leetcode to improve runtime.
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
   return 0;
}();