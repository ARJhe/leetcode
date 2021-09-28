#include <iostream>
#include <string>
using namespace std;

// Runtime: 0ms (100%) Memory: 6.4 MB (7.17%)
int reverse(int x) {
    if (x == 0)
        return 0;
    string s = to_string(x);
    string res;

    // just like scan from rightside
    bool isPos = isdigit(s[0]);
    s = isPos ? s : s.substr(1, s.length() - 1);
    int l = s.length();
    bool islastconstZero = (s[s.length() - 1] == '0') ? true : false;
    int i = 0;
    while (i < l) {
        islastconstZero = (islastconstZero && s[s.length() - 1 - i] == '0') ? true : false;
        if (!islastconstZero)
            res += s[s.length() - 1 - i];
        i++;
    }
    res = isPos ? res : '-' + res;
    try {
        return stoi(res);
    }
    catch (const std::out_of_range&) {
        return 0;
    }
}

int main() {
    cout << reverse(0) << endl;
    return 0;
}

// Use this template always on leetcode to improve runtime.
static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();