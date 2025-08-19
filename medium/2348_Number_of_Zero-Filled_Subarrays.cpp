#include <iostream>
#include <vector>

using namespace std; 

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0;
        long long count = 0;
        for(int i =0; i<nums.size(); i++){
            if (nums[i]==0){
                count++;
                result += count;
            }
            else{
                count = 0;
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    vector<int> zero{1,2,0,0,3,0,0,4};
    cout << sol.zeroFilledSubarray(zero)<<endl;
}