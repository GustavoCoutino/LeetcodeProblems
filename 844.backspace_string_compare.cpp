#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        std::stack<char> s1;
        std::stack<char> s2;
        for(int i = 0; i<s.size(); i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            } else if(!s1.empty()) {
                s1.pop();
            }

        }

        for(int i = 0; i<t.size(); i++){
            if(t[i]!='#'){
                s2.push(t[i]);
            } else if(!s2.empty()) {
                s2.pop();
            }

        }
        return stacksEqual(s1, s2);
        
    }


    bool stacksEqual(stack<char>& s1, stack<char>& s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    stack<char> temp1 = s1;
    stack<char> temp2 = s2;

    while (!temp1.empty() && !temp2.empty()) {
        if (temp1.top() != temp2.top()) {
            return false;
        }
        temp1.pop();
        temp2.pop();
    }

    return true;
}

};

int main(){
    string s = "y#fo##f";
    string t = "y#f#o##f";
    Solution test1;
    cout << boolalpha << test1.backspaceCompare(s,t) << endl;
}