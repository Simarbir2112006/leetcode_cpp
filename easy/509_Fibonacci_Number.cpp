#include <iostream>

using namespace std;

// Recursion: Brute force
// class Solution {
// public:
//     int fib(int n) {
//         if (n < 2){
//             return n;
//         }
//         return fib(n-1) + fib(n-2);
//     }
// };

// Optimised solution
class Solution {
public:
    int fib(int n) {
        if (n < 2){
            return n;
        }
        int a = 0;
        int b = 1;
        int temp = 0;
        for (int i = 2; i <= n; i++){
            temp = b;
            b += a;
            a = temp;
        }
        return b;
    }
};

int main(){
    Solution sol;
    cout << sol.fib(0) << endl;
    cout << sol.fib(1) << endl;
    cout << sol.fib(2) << endl;
    cout << sol.fib(3) << endl;
    cout << sol.fib(100) << endl;
}