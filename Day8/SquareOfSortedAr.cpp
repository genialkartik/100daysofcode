// leetcode.com/problems/squares-of-a-sorted-array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        std::vector<int> squares(A.size());
        for (int i=0; i<A.size(); i++){
            A[i] = abs(A[i]);
        }
        sort(A.begin(), A.end());
        for (int i=0; i<A.size(); i++){
            squares[i] = pow(A[i], 2);
        } 
        return squares;
    }
};


// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& A) {
//       std::vector<int> squares(A.size());
//         int l = 0, r = A.size() - 1, p = A.size() - 1; 
//         while (l <= r)
//             squares[p--] = std::pow(A[(std::abs(A[l]) > std::abs(A[r])) ? l++ : r--], 2);
//         return squares;
//     }
// };
