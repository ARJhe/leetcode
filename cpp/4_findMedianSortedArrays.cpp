#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    // binary search should be O(log(m+n))
    // 1. set range
    // 2. merge two vec (std::merge <algorithm>)
    // 3. sort the merged vec
    // Issue: double res = (3 + 4) /2 got 3
    //      >> should be (3+4)/2.0
    int s1 = nums1.size();
    int s2 = nums2.size();
    if ( s1 > 1000 || s1 < 0 || s2 < 0 || s2 > 1000 || s1+s2 < 1 || s1+s2 > 200){
        return 0;
    }
    double res;
    vector<int> nums3(s1+s2);
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
    
    int n = nums3.size();
    int pos= n/2;
    if (n & 1){ // which means divide by 2 got 1 reminder
        res = nums3.at(pos);
    }
    else{
        res = (nums3.at(pos-1) + nums3.at(pos))/2.0;
    }
    return res;

};

int main(){
    vector<int> n1 = {1,2};
    vector<int> n2 = {3,4};
    double d3 = findMedianSortedArrays(n1,n2);
    cout << d3 << endl;
};
