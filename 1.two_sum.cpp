#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> m; 
        vector<int> ans(2, 0);
        for(int i =0; i<nums.size(); i++){
            int requiredNum = target-nums[i];
            if(m.find(requiredNum) != m.end()){
                ans[0] = m[requiredNum];
                ans[1] = i;
            } else {
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};


int main(){
    Solution test1;
    vector<int> vect;
    vect.push_back(2);
    vect.push_back(7);
    vect.push_back(11);
    vect.push_back(15);

    test1.twoSum(vect, 9);
}