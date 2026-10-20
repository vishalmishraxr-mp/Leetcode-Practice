// Title: Remove Nth Node From End of List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

        ListNode* slow = head;
        ListNode* fast = head;
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast = fast->next;
        }
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
