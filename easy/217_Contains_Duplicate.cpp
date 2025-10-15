#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         for(int i =0; i<nums.size()-1; i++){
//             for(int j = i+1; j < nums.size(); j++){
//                 if (nums[i] == nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for (int i : nums){
            if(dup.count(i)){
                return true;
            }
            else{
                dup.insert(i);
            }
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<int> arr1 = {3, 4};
    vector<int> arr2 = {1,2,3,1};
    vector<int> arr3 = {1,1,1,3,3,4,3,2,4,2};

    cout << sol.containsDuplicate(arr1) << endl;
    cout << sol.containsDuplicate(arr2) << endl;
    cout << sol.containsDuplicate(arr3) << endl;

    return 0;
}