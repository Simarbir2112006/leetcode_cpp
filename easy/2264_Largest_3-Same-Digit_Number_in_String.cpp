#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        char c1 = ' ';
        for(int i = 0; i < num.size() - 2; i++){
            if (num[i]==num[i+1] && num[i] == num[i+2] && num[i]> c1){
                c1 = num[i];
            }
        }
        if (c1 == ' '){
            return "";
        }
        else{
            return string() + c1 + c1 + c1;
        }
    }
};

int main(){
    Solution sol;
    cout << sol.largestGoodInteger("778887722999") << endl;
}