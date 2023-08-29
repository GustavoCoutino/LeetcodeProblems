#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
      
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (string& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }

            string key;
            for (int c : count) {
                key += to_string(c) + '#';
                
            }

            anagramGroups[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
};