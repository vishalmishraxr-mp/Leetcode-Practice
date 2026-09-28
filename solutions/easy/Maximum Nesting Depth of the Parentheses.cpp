// Title: Maximum Nesting Depth of the Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

        for(int i=0;i<n;i++){
        }
        int mx = INT_MIN;
            if(s[i]=='(') count++;
        int count = 0;
            else if(s[i]==')'){
                count--;
            }
    }
                mx = max(mx,count);
        return mx; 
        if(mx==INT_MIN) return 0;
};
