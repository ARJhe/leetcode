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
    // 1. walk through string
    string res;
    string maxS;
    if (s.length() > 1000 || s.length() < 1 || isNotAlphaDigit(s)){
        return "";
    }
    int mostleft = 0, mostright=0;
    for (int i=0; i < s.length(); i++){
        int currentleft = i, currentright =i;
        while(somecondition){
            i = currentright;
        }
        while(somecondition){
            currentright++;
            currentleft--;
        }
        if(somecondition){
            mostletf = currentleft;
            mostright = currentright;
        }
        return s.substr(mostleft, mostright - mostleft +1);
}
int main(){
    string s="ccc" ;
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
