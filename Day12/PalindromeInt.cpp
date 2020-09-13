leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long count = 0;
        long copy_x = x;
        long rev_x = 0;
        while(x!=0){
            rev_x = rev_x*10 + x%10;
            x /= 10;
        }
        return (copy_x - rev_x == 0)? true: false;
    }
};
