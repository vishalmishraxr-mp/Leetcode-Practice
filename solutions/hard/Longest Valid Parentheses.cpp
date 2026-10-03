// Title: Longest Valid Parentheses
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/longest-valid-parentheses/

            else{
            }
                st.push(i);
                if(st.empty()) st.push(i);
                if(!st.empty()) st.pop();
            if(s[i]=='('){
        for(int i=0;i<n;i++){
        int mx = 0;
        stack<int> st;
                else mx = max(mx,i-st.top());
            }  
        }
        return mx;
    }
        int n = s.size();
    int longestValidParentheses(string s) {
        st.push(-1);
};
