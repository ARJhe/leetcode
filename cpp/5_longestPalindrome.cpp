#include <bits/stdc++.h>
using namespace std;
bool isNotAlphaDigit(string s){
    bool res = true;
    if (all_of(s.cbegin(), s.cend(), [](char c){ return isalpha(c) || isdigit(c); })){
        res = false;
    }    
    return res;
};
string longestPalindrome(string s){
    // find longest word which has same initial word and end word: ex: string "cabad" anwser is "aba"
    string res;
    string maxS=s;
    if (s.length() > 1000 || s.length() < 1 || isNotAlphaDigit(s)){
        return "";
    }
    int len = s.length();
    // string.join(",") make string.length become odd
   for (int i=0; i<=len; i++){ maxS.insert(len-i, ","); }
   len = maxS.length();
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
       while(lw>=0 && rw <= len && maxS[lw]==maxS[rw])
       {
           ret = rw - lw;
       
            if (ret > max)
           { 
               max = ret;
               pos = i;
           }
            lw--;
            rw++;
       }
   }
    res = maxS.substr( pos - (max) / 2  ,max+1);
    res.erase(remove(res.begin(), res.end(), ','), res.end());
    return res;
}

int main(){
    string s="a" ;
    string res = longestPalindrome(s);
    cout << res << endl;
};

// Use this template always on leetcode to improve runtime.
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
