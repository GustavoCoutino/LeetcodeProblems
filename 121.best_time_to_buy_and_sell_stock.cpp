#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        int right = 1;

        while(right < prices.size()){
            if(prices[right] > prices[left]){
                int temp = prices[right] - prices[left];
                profit = max(profit, temp);
            } else {
                left = right;
            }
            right++;
        }
        return profit;
    }
};