#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for(int i = 0; i < k; i++){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                nums.push_back(val);
                i--;
                k--;
            }
        }
        return k;
    }
};

int main(){
    Solution sol;
    vector<int> arr1 = {3,2,2,3};
    vector<int> arr2 = {0,1,2,2,3,0,4,2};

    cout << sol.removeElement(arr1, 3) << endl;
    cout << sol.removeElement(arr2, 2) << endl;

    return 0;
}