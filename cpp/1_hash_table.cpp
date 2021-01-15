#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target){
		vector<int> ans;
		unordered_map<int, int> u;
        // 1. push pair to hashtable as key, position i as value;
        // 2. if contain nums.at(i) in hashtable, container[nums.at(i)]
        for (int i=0; i<nums.size(); i++){
            int pair = target - nums.at(i);
            if(u.count(nums.at(i))){
                ans.push_back(i);
                ans.push_back(u[nums.at(i)]);
                break;
            }
            u[pair] = i;
        }
        return ans;
	}
};

