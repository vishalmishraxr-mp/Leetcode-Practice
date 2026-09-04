// Title: Smallest Stable Index I
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-stable-index-i/

            }
            int mn = INT_MAX;
            for(int j=i;j<n;j++){
                mn = min(mn,nums[j]);
            }
            if(mx-mn<=k) return i;
        }
        return -1;
    }
};
