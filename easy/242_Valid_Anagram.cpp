#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;
        
        for(int i = 0; i<s.length(); i++){
            s_map[s[i]]++;
            t_map[t[i]]++;
        }
        if(s_map == t_map){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Solution sol;
    string s1= "racecare";
    string t1= "carerace";
    string s2= "rat";
    string t2= "car";

    cout << sol.isAnagram(s1,t1) << endl;
    cout << sol.isAnagram(s2,t2) << endl;

    return 0;
}