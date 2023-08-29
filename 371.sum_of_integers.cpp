#include <iostream>

using namespace std;


class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){
            // & operator carries
            // the << 1 shifts the carry to the left 
            int tmp = (a & b) << 1;
            // ^ operator performs the addition
            a = a ^ b;
            cout << tmp << " " << a << endl;
            // holds the left-sided carry
            b = tmp;
        }
        return a;
    }
};