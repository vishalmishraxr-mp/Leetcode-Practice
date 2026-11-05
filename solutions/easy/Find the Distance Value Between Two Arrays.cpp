// Title: Find the Distance Value Between Two Arrays
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

        int m = arr2.size();
        int count =0;
        for(int i=0;i<n;i++){
            bool flag = true;
            for(int j=0;j<m;j++){
                if(abs(arr1[i]-arr2[j])<=d) flag = false;
            }
            if(flag) count++;
        }
        return count;
    }
};
