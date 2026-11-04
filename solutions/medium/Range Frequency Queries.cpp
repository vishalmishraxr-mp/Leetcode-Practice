// Title: Range Frequency Queries
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/range-frequency-queries/

    int mid = low + (high-low)/2;
    int left = freq_max(2*i+1,low,mid,l,r,value);
    int right = freq_max(2*i+2,mid+1,high,l,r,value);
    return left+right;
    }
    int query(int left, int right, int value) {
        return freq_max(0,0,n-1,left,right,value);
    }
};

