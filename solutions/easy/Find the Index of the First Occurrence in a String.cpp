// Title: Find the Index of the First Occurrence in a String
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string s, string sub) {
       int index = s.find(sub);
        if (index != string::npos)
            return index;
        else
    return -1;
    }
};
