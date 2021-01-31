#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcde";
    vector <char> box;
    string:: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        box.push_back(*it);
    }
    cout << box[0] << '\n';
    
}

