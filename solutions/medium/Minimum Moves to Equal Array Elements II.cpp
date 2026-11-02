// Title: Minimum Moves to Equal Array Elements II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/

        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mid = n / 2;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += abs(nums[i] - nums[mid]);
        }
        return sum;
    }
};
