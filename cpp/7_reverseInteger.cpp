#include <bits/stdc++.h>
using namespace std;
int reverse(int x){
    string s = to_string(x);
    int l = (s.length() % 2 ==0) ? s.length()/2 : (s.length()-1)/2 - 1;
    /*for(int i=0;i<=l;i++)
    {
        string t = s[s.length()-1-i];
        s[s.length()-1-i] = s[i];
        s[i] = t;
    }*/
    cout << s << endl;
    return 0;
}


