#include <bits/stdc++.h>
using namespace std;
bool isNotAlphaDigit(string s){
    bool res = true;
    if (all_of(s.cbegin(), s.cend(), [](char c){ return isalpha(c) || isdigit(c); })){
        res = false;
    }    
    return res;
};
string longestPalindrome_bruteforce(string s){
    // find longest word which has same initial word and end word: ex: string "cabad" anwser is "aba"
    string res;
    string maxS;
    if (s.length() > 1000 || s.length() < 1 || isNotAlphaDigit(s)){
        return "";
    }
    // string.join(",") make string.length become odd
   int len = s.length();
   for (int i=0; i<=len; i++){ s.insert(len-i, ","); }
   len = s.length();
   int lw=0;
   int rw=0;
   int pos=0;
   int max = 0;
   int ret = 0;
   for (int i=0; i<=len; i++)
   {
    // left window and right window
       lw=i;
       rw=i;
       while(lw>0 && rw <= len && s[lw]==s[rw])
       {
           lw--;
           rw++;
           ret = rw - lw;
       
            if (ret > max)
           { 
               max = ret;
               pos = i;
           }
       }
   }
    // ,a,a, 4,2 || ,a,c,c,a, 8,4
    // pos = max / 2
    cout << s << endl;
    cout << pos << "," << max << endl;    
    res = s.substr( pos - (max) / 2  ,max+1);
    return res;
}
int main(){
    string s="bacca" ;
    string res = longestPalindrome_bruteforce(s);
    cout << res << endl;
};

// Use this template always on leetcode to improve runtime.
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
