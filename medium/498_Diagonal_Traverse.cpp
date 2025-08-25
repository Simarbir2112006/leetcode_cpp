#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        vector<int> res;
        int c_r=0;
        int c_c=0;
        bool going_up=true;

        while(res.size() < r*c){
            res.push_back(mat[c_r][c_c]);
            if(going_up){
                if(c_c == c-1){
                    c_r++;
                    going_up=false;
                }
                else if(c_r==0){
                    c_c++;
                    going_up=false;
                }
                else{
                    c_c++;
                    c_r--;
                }
            }
            else{
                if(c_r == r-1){
                    c_c++;
                    going_up=true;
                }
                else if(c_c == 0){
                    c_r++;
                    going_up=true;
                }
                else{
                    c_c--;
                    c_r++;
                }
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> mat1 = {{5, -3, 17, 99, -42}};
    vector<int> result1 = sol.findDiagonalOrder(mat1);
    for (int x : result1) {
        cout << x << " ";
    }
    cout << endl;
    vector<vector<int>> mat2 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result2 = sol.findDiagonalOrder(mat2);
    for (int x : result2) {
        cout << x << " ";
    }
    cout << endl;
}