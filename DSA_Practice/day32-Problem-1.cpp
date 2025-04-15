/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        auto curr = head;
        map<int,int> mpp;
        while(curr){
            mpp[curr->val]++;
            curr = curr->next;
        }
        ListNode* dummy = new ListNode(-101);
        curr = dummy;
        for(auto& it:mpp){
            if(it.second == 1){
                ListNode* tmp = new ListNode(it.first);
                curr->next = tmp;
                curr = tmp;
            }
        }
        return dummy->next;
    }
};
