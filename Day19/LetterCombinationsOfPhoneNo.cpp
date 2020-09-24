class Solution {
public:
    vector<string>ar;
    vector<string> letterCombinations(string digits) {
     if(digits.empty()) return vector<string>();

      vector<char> keypad[] = {
        {}, {},
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
      };
        int n = digits.size();
        int input[n];
        for(int i=0; i<n; i++){
          input[i] = (int)(digits[i])-48;
        }
        findCombinations(keypad, input, string(""), n - 1);
        return ar;
    }
    void findCombinations(vector<char> keypad[], int input[], string res, int index){
      if (index == -1) {
        ar.push_back(res);
        return;
      }
      int digit = input[index];
      int len = keypad[digit].size();
      for (int i = 0; i < len; i++) {
        findCombinations(keypad, input, keypad[digit][i] + res, index - 1);
      }
    }
};

// #include<bits/stdc++.h>
// using namespace std;
//
// class Solution {
// public:
//     vector<string>ar;
//     vector<string> letterCombinations(string digits) {
//       vector<char> keypad[] = {
//         {}, {},
//         { 'A', 'B', 'C' },
//         { 'D', 'E', 'F' },
//         { 'G', 'H', 'I' },
//         { 'J', 'K', 'L' },
//         { 'M', 'N', 'O' },
//         { 'P', 'Q', 'R', 'S'},
//         { 'T', 'U', 'V' },
//         { 'W', 'X', 'Y', 'Z'}
//       };
//         int n = digits.size();
//         int input[n];
//         for(int i=0; i<n; i++){
//           input[i] = (int)(digits[i])-48;
//         }
//         findCombinations(keypad, input, string(""), n - 1);
//         return ar;
//     }
//     void findCombinations(vector<char> keypad[], int input[], string res, int index){
//       if (index == -1) {
//         ar.push_back(res);
//         return;
//       }
//       int digit = input[index];
//       int len = keypad[digit].size();
//       for (int i = 0; i < len; i++) {
//         findCombinations(keypad, input, keypad[digit][i] + res, index - 1);
//       }
//     }
// };
//
// int main(){
//   Solution s;
//   vector<string>temp;
//   temp = s.letterCombinations("23");
//   for(vector<string>::iterator it =  temp.begin(); it!=temp.end(); it++){
//     cout<<*it<<" ";
//   }
// }
