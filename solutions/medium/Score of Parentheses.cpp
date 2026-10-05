// Title: Score of Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/score-of-parentheses/

            if(s[i]==')'){
                int x = st.top();
                st.pop();
                if(x==0) ans = 1;
                else ans = 2*x;
                int y = st.top();
                st.pop();
                y += ans;
                st.push(y);
            }
        }
        return st.top();
    }
};
