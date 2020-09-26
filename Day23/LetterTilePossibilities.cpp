class Solution {
public:
    int numTilePossibilities(string tiles) {
        int letterCounts[26] {};
        for (const auto &c :  tiles) {
            letterCounts[c - 'A']++;
        }
        int result = 0;
        permute(letterCounts, result);
        return result;
    }

    void permute(int letterCounts[26], int &result) {
        for(int i = 0; i < 26; ++i) {
            if (letterCounts[i]){
                letterCounts[i]--;
                result++;
                permute(letterCounts, result);
                letterCounts[i]++;
            }
        }
    }
};
