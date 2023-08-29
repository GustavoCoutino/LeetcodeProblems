#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            int area = (right-left)*min(height[left], height[right]);
            res = max(area,res);

            if(height[left] < height[right]){
                left = left+1;
            } else {
                right = right-1;
            }
        }
        return res;
    }
};