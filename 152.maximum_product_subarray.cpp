#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums[0];

        for(int n : nums){
            if(n>maxProduct){
                maxProduct = n;
            }
        }

        int currMax = 1, currMin = 1;
        for(int n : nums){
            if(n == 0){
                currMax = 1;
                currMin = 1;
                continue;
            }
            int tmp = n*currMax;
            currMax = max(n*currMax, n*currMin);
            currMax = max(currMax, n);
            currMin = min(tmp, n*currMin);
            currMin = min(currMin, n);

            maxProduct = max(maxProduct, currMax);
        }
        return maxProduct;
    }
};