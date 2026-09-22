// Title: Counting Words With a Given Prefix
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/counting-words-with-a-given-prefix/

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int m = pref.size();
        int n = words.size();
        int count =0;
        for(int i=0;i<n;i++){
            string sub = "";
            if (words[i].size() < m) continue;
            for(int j=0;j<m;j++){
                sub += words[i][j];
            }
            if(sub==pref) count++;
        }
        return count;
    }
};
