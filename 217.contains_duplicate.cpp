#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            if(m.find(nums[i]) != m.end() && m[nums[i]] >= 2){
                return true;
            } else {
                m[nums[i]] += 1;
                if(m[nums[i]]>=2){
                    return true;
                }
            }
        }

        return false;
        
    }
};