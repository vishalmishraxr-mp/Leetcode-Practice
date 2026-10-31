// Title: Maximum XOR of Two Numbers in an Array
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/

                if(curr->right==NULL){
                    curr->right = new Node();
                }
                curr = curr->right;
            }
        }
    }
    int findMaximumXOR(vector<int>& nums) {
        Node * head = new Node();
        insert(head, nums[0]);
        int ans = 0;
        for(int i=1;i<nums.size();i++){
            ans = max(ans,maxXorPair(head,nums[i]));
            insert(head,nums[i]);
        }
        return ans;
    }
};
