// Title: Minimum Operations to Reduce X to Zero
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/

        int len = -1;
        if(total-x<0) return -1;
        if(total-x==0) return n;
        for(int i=0;i<n;i++){
            sum += nums[i];
            while(sum>total-x && left<=i){
                sum -= nums[left];
                left++;
            }
            if(sum==total-x) len = max(len,i-left+1);
        }
        if (len == -1) return -1;
        return n-len;
    }
};
