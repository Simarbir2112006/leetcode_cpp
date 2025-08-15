#include <iostream>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n < 0){
            return false;
        }
        while (n % 4 == 0){
            n /=4;
        }
        if (n ==1){
            return true;
        }
        return false;
    }
};

int main(){
    Solution sol;
    cout << sol.isPowerOfFour(4) << endl;
    cout << sol.isPowerOfFour(3) << endl;
    cout << sol.isPowerOfFour(16) << endl;
    cout << sol.isPowerOfFour(5) << endl;
    cout << sol.isPowerOfFour(1) << endl;
    cout << sol.isPowerOfFour(256) << endl;
    cout << sol.isPowerOfFour(64) << endl;
}