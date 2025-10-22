#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";

        for(int i = 0; i < strs[0].length(); i++){
            for (auto s : strs){
                if (i == s.length() or s[i] != strs[0][i]){
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;
    }
};

int main(){
    Solution sol;
    vector<string> arr1 = {"bat","bag","bank","band"};
    vector<string> arr2 = {"dance","dang","danger","danmage"};
    vector<string> arr3 = {"neet","feet"};

    cout << sol.longestCommonPrefix(arr1) << endl;
    cout << sol.longestCommonPrefix(arr2) << endl;
    cout << sol.longestCommonPrefix(arr3) << endl;

    return 0;
}