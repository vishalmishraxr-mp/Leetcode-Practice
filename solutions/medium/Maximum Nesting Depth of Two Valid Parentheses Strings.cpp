// Title: Maximum Nesting Depth of Two Valid Parentheses Strings
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/

        for(int i = 0; i < n; i++) {
            if(seq[i] == '(') {
                depth++;
                arr[i] = depth % 2;
            }
            else {
                arr[i] = depth % 2;
                depth--;
            }
        int depth = 0;

        vector<int> arr(n, 0);
        int n = seq.size();
    vector<int> maxDepthAfterSplit(string seq) {
public:
        }
        return arr;
