#include <bits/stdc++.h>

using namespace std;

// brute force
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i +1; j< nums.size(); j++){
//                 if(nums[i] + nums[j] == target){
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;
        for (int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(check.count(diff)){
                return {check[diff], i};
            }
            else{
                check[nums[i]] = i;
            }
        }
        return {};
    }
};


void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << endl;
};

int main(){
    Solution sol;
    vector<int> arr1 = {2,7,11,15};
    vector<int> arr2 = {3,2,4};

    printVector(sol.twoSum(arr1, 9));
    printVector(sol.twoSum(arr2, 6));

    return 0;
}