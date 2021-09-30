#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int myAtoi(string s) {
    // left trim
    string ns = s.erase(0, s.find_first_not_of(" "));
    int prefix = 1;
    if (ns.length() > 1 && (ns[0] == '+' || ns[0] == '-'))
    {
        prefix = ns[0] == '-' ? -1 : 1;
        ns = ns.substr(1, ns.length());
    }

    long long int n = 0;
    string i;
    long long int max, min, res=0;
    max = pow(2, 31) - 1;
    min = -1 * pow(2, 31);

    for (char& c : ns)
    {
        if (isdigit(c))
        {
            i = c;
            n = n * 10 + stoi(i);
            res = prefix * n;
            // if res is already to overflow stop it immediately
            if (res > max)
                return max;
            else if (res < min)
                return min;
        }
        else
        {
            break;
        }
    }

    return res;
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

