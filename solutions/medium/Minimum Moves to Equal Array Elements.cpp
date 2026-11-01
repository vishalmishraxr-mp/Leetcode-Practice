// Title: Minimum Moves to Equal Array Elements
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/

        for(int i=0;i<n;i++){
            nums[i] = nums[i] - x;
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        return sum;
    }
};
