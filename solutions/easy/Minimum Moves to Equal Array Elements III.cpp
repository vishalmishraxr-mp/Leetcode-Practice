// Title: Minimum Moves to Equal Array Elements III
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/

        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mx = nums[n-1];
        int ans = 0;
        for(int i=0;i<n;i++){
            ans +=mx-nums[i];
        }
        return ans;
    }
};
