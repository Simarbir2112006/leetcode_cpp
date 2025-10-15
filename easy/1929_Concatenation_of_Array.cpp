#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int k = 0; k<2; k++){
            for(int i =0; i < nums.size(); i++){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};

void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
}

int main(){
    Solution sol;
    vector<int> arr1 = {3, 4};
    vector<int> arr2 = {1, 2, 1};

    printVector(sol.getConcatenation(arr1));
    printVector(sol.getConcatenation(arr2));

    return 0;
}