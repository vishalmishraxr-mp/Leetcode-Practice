// Title: Remove Outermost Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/remove-outermost-parentheses/

        int c_br = 0;
        int st = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') o_br++;
            else c_br++;
            if(o_br==c_br){
                v +=s.substr(st+1,i-st-1);
                st = i+1;
            }
        }
        return v;
    }
};
