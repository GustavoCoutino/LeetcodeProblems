#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> string1;
        unordered_map<char, int> string2;
        for(int i = 0; i<s.size(); i++){
           if(string1.find(s[i]) == string1.end()){
               string1[s[i]] = 1;
           } else {
               string1[s[i]] += 1;
           }

           if(string2.find(t[i]) == string2.end()){
               string2[t[i]] = 1;
           } else {
               string2[t[i]] += 1;
           }
        }

        return string1 == string2;
    }
};