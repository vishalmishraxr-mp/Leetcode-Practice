// Title: Check if Every Row and Column Contains All Numbers
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/

            bool flag1 = true;
            bool flag2 = true;
            for(auto it : freq){
                if(it.second!=1) flag1 = false;
            }
            for(auto it : freq2){
                if(it.second!=1) flag2 = false;
            }
            if(flag1==false || flag2==false) return false;
        }
        return true;
    }
};
