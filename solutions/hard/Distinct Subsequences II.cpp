// Title: Distinct Subsequences II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/distinct-subsequences-ii/


int solve(string s) {
    int n = s.length();
    int MOD = 1e9 + 7;
    
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    unordered_map<char, int> last_seen;
    
    for (int i = 1; i <= n; i++) {
        char ch = s[i - 1];
        dp[i] = (2 * dp[i - 1]) % MOD;
        if (last_seen.find(ch) != last_seen.end()) {
