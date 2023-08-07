#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        string phone_map[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        backtrack("", digits, phone_map, ans);
        return ans;
    }

private:
    void backtrack(string curStr, string next_digits, string phone_map[], vector<string>& ans){
        if(next_digits.empty()){
            ans.push_back(curStr);
        } else {
            string letters = phone_map[next_digits[0]-'2'];
            for(char letter : letters){
                backtrack(curStr+letter, next_digits.substr(1), phone_map, ans);
            }
        }
    }
};