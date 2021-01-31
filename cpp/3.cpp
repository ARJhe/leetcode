#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    vector <char> box;
    vector <char> path;
    string ::iterator it;
    int cursor = 0;
    string carry="";  // put string with different words.
    int conti = 1;
    char last_word = s.back(); // last word.

    for(it =s.begin(); it < s.end(); it++){
        path.push_back(*it);
    };
    while(conti){        
        char word = path[0];
        size_t found = carry.find(word);
        if (cursor = 0 | found != string::npos){
            carry = carry + word;
        }else{
            cursor = found;
            box.push_back(word);
            carry = word; // reset
        }
        cursor ++;
        conti = 0;
        
    }
    for(int i=0; i < box.size(); ++i){
        cout << box.at(i) << '\n';
    }
    return 0;
};
int main(){
    string str = "bwwwcwba";
    lengthOfLongestSubstring(str);
};

