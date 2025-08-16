#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string clean = string();
        for(int i = 0; i < s.size(); i++){
            if (isalnum(s[i])){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    s[i] += 32;
                }
                clean += s[i];
            }
        }

        for(int i = 0; i < clean.size()/2; i++){
            if (clean[i] != clean[clean.size() - i -1]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution sol;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << sol.isPalindrome("race a car") << endl;
    cout << sol.isPalindrome("  ") << endl;
    
}