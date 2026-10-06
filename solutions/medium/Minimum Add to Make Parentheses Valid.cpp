// Title: Minimum Add to Make Parentheses Valid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

        int o_br = 0;
        int c_br = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') o_br++;
        }
            else if(o_br>0 && s[i]==')') o_br--;
            else if(s[i]==')') c_br++;
    }
        return o_br+c_br;
};
