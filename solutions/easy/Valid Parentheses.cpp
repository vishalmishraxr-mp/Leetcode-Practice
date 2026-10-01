// Title: Valid Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-parentheses/

            if(st.empty()) return false;
            char prev = st.top();
            st.pop();
            if((s[i] == ')' && prev != '(') ||
               (s[i] == '}' && prev != '{') ||
               (s[i] == ']' && prev != '[')) {
                return false;
            }
        }
    }
    return st.empty();
    }
};
