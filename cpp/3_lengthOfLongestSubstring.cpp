#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    // 1 walk throught it and push to target
    // 2 when meet repeated char find the pos[too1]: find()
    // 3 restart[too2] from the pos: string:: substr()
    // Issue: 1. tool2 only return first target
    //      >> just substring from the found pos + 1
    int maxL = 0;
    string res="";

    for(char& c: s){ // for c in s [ c is alias of s' item ] 
        // another use for(char c:s ) do a copy for each element.
        size_t f = res.find(c);
        if (f == string::npos){ // remind compares to use double euals
            res += c;
        }
        else{
            size_t pos = res.find(c);
            res = res.substr(pos+1) + c; // tool

        }
        if (res.length() > maxL){
            maxL = res.length();
        }
        
    }
    return maxL;
}
