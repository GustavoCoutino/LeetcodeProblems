#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end(), greater<int>());
        int ans = 0;
        int c = 0;
        for(int i = 0; i<satisfaction.size(); i++){
            if(c+satisfaction[i]>0){
                c+=satisfaction[i];
                ans+=c;
            }
        }
        return ans;
    }
};


int main(){
    Solution test1;
    vector<int> vect{-1,-8,0,5,-9};
    cout << test1.maxSatisfaction(vect) << endl;;
}