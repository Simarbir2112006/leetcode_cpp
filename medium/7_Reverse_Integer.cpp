#include <iostream>

using namespace std;

const int INT_MAX = 2147483647;
const int INT_MIN = -2147483648;

class Solution {

public:
    int reverse(int x) {
        int reverseNumber = 0;
        int lastDigit;
        while (x != 0){
            lastDigit = x % 10;
            if (reverseNumber > INT_MAX / 10 || reverseNumber < INT_MIN / 10){
                return 0;
            }
            reverseNumber =  (reverseNumber * 10) + lastDigit;
            x = x/10;
        }
        return reverseNumber;
    }
};

int main(){
    int x = -2147483648;
    Solution sol;

    cout << sol.reverse(x) << endl;
}