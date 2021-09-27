#include <bits/stdc++.h>
using namespace std;
string convert(string s, int numRows)
{
    /*
    PAYPALISHIRING => numRows:4
    P     I    N
    A   L S  I G
    Y A   H R
    P     I


    0           2n-2
    1         . 2n-1
    .     N+1     .
    N-2 N       3n-4 3n-2
    N-1         3n-3

    Pattern : |/|/|/|
    */

    string res;

    if (numRows <=1){
        return s;
    }
    int size= 2*numRows-2;    
    for (int i=0; i<numRows; i++)
    {
        for (int j=i; j<s.length(); j+=size)
        {
            // deal with | col element
            res+= s[j];

            // deal with / element and ignore top and bottom
            if ((i !=0 && i!=numRows-1) && j+size-2*i < s.length())
            {
                res += s[j+size-2*i];
            }
        }

    }
    return res;
}

int main(){
    string s= "abcdefg";
    int nrows = 4;
    string res = convert(s, nrows);
    cout << res << endl;
    return 0;
}

static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
