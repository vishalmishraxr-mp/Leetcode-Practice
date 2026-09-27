// Title: Reverse Substrings Between Each Pair of Parentheses
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/

                s.erase(s.begin() + oidx);
                s.erase(s.begin() + cidx-1);
            }
            else if(s[oidx]=='(') cidx++;
            else if(s[cidx]==')') oidx--;
            else{
            oidx--;
            cidx++;
            }
        }
        return s;
    }
};
