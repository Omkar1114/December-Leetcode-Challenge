class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    ListNode* h = NULL;
    
    Solution(ListNode* head) {
        h = head;
        
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        ListNode* curr = h;
        vector<int> ran;
        while(curr != nullptr){
            ran.push_back(curr->val);
            curr = curr->next;
        }
        
        int ranIndex = rand() % ran.size();
        return ran[ranIndex];
    }
};
