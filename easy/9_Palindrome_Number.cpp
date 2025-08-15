#include <iostream>
#include <string>

using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string pal = string();
//         if (x < 0){
//             return false;
//         } 
//         else{
//             for(int i = to_string(x).size() - 1; i > -1; i--){
//                 pal += to_string(x)[i];
//             }
//             if (pal == to_string(x)){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//     }
// };


// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0){
//             return false;
//         } 
//         else{
//             string str_x = to_string(x);
//             int len = str_x.size();
//             for(int i = 0; i < len/2; i++){
//                 if (str_x[i] != str_x[len - i -1]){
//                     return false;
//                 }
//             }
//             return true;
//         }
//     }
// };

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x%10 == 0 && x !=0)){
            return false;
        } 
        int rev = 0;
        while(x > rev){
            rev = (rev*10) + (x % 10);
            x/=10;
        }
        if (rev == x || rev/10 == x){
            return true;
        }
        return false;
    }
};

int main(){
    Solution sol;
    cout << sol.isPalindrome(1431) << endl;
    cout << sol.isPalindrome(10) << endl;
    cout << sol.isPalindrome(20) << endl;
    cout << sol.isPalindrome(2431) << endl;
    cout << sol.isPalindrome(1432) << endl;
    cout << sol.isPalindrome(141) << endl;
    
}