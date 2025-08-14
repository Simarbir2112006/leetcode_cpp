#include <iostream>
#include <vector>

using namespace std; 

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> rowMark(matrix.size(), false);
        vector<bool> colMark(matrix[0].size(), false);

        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j <matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    rowMark[i] = true;
                    colMark[j] = true;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j <matrix[i].size(); j++){
                if (rowMark[i] == true || colMark[j] == true){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main(){
    vector<vector<int>> mat = {{0,1,1}, {1,0,1}, {1,1,0}};
    Solution tst;
    tst.setZeroes(mat);
    for (int i = 0; i < mat.size(); i++){
        for (int j = 0; j <mat[i].size(); j++){
            cout << mat[i][j] <<" ";
        }
        cout << endl;
    }
}