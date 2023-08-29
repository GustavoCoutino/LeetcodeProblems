#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> closeToOpen = {{')', '('},{']','['},{'}','{'}};

        for(char c : s){
            //If character is closing parentheses
            if(closeToOpen.find(c) != closeToOpen.end()){
                if(!stack.empty() && stack.top() == closeToOpen[c]){
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};