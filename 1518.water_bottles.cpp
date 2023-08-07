class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0;
        int remainder= 0;
        do {
            ans += numBottles;
            remainder += numBottles;
            numBottles = (remainder/numExchange);
            remainder %= numExchange;
        } while(numBottles+remainder >= numExchange);
        ans += numBottles;
        return ans;
    }
};