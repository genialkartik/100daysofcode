// leetcode.com/problems/roman-to-integer/

#include<bits/stdc++.h>
using namespace std;

int main(){
        unordered_map<char, int> m = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        string s = "IILVIII";
        int res = m[s[s.size()-1]];
        for(int i=s.size()-2; i>=0; --i){
            if(m[s[i]] >= m[s[i+1]])
                res += m[s[i]];
            else if(m[s[i]] < m[s[i+1]])
                res = res - m[s[i]];
        }
        cout<<res;
}
