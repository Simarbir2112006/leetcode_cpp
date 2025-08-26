#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=0;
        double dia = 0;
        for(int i=0; i<dimensions.size(); i++){
            double new_dia = pow(dimensions[i][0], 2) + pow(dimensions[i][1], 2);
            if (dia < new_dia){
                dia = new_dia;
                area = dimensions[i][0] * dimensions[i][1];
            }
            else if(dia == new_dia && area < dimensions[i][0] * dimensions[i][1]){
                area = dimensions[i][0] * dimensions[i][1];
            }
        }
        return area;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> mat1 = {{3,4}, {4,3}};
    cout << sol.areaOfMaxDiagonal(mat1) << endl;
    vector<vector<int>> mat2 = {{5,1},{3,10},{8,4}};
    cout << sol.areaOfMaxDiagonal(mat2) << endl;
}