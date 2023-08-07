#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for(int i = 1; i<=n; i++){
            string s;
            if(i%3==0 && i%5==0){
                s = "FizzBuzz";
            } else if(i%3==0){
                s = "Fizz";
            } else if(i%5==0){
                s = "Buzz";
            } else{
                s = to_string(i);
            }
            answer[i-1] = s;
        }
        return answer;
    }
};