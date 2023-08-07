#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0, b = 0;
        int m1[10] = {0};
        int m2[10] = {0};
        for(int i = 0; i<secret.size(); i++){
            if(secret[i] == guess[i]){
                a++;
                continue;
            }
            m1[secret[i]-'0']++;
            m2[guess[i]-'0']++;
        }   

        for (int i = 0; i < 10; i ++) {
            cout << m1[i] << endl;
            cout << m2[i] << endl;
            b += min(m1[i], m2[i]);
        }
        return to_string(a)+"A"+to_string(b)+"B";
    }
};

int main(){
        Solution test1;
        cout<< test1.getHint("1123", "0111") << endl;
}