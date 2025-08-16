#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for(int i = 0; i < s.size(); i++){
            if (s[i] == '6'){
                s[i] = '9';
                break;
            }
        }
        return stoi(s);
    }
};

int main(){
    Solution sol;
    cout << sol.maximum69Number(69) << endl;
    cout << sol.maximum69Number(6999) << endl;
    cout << sol.maximum69Number(6669) << endl;
    cout << sol.maximum69Number(6699) << endl;
}