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
    ListNode* findMiddle(ListNode* head){
        auto slow = head;
        auto fast = head->next;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* merge2(ListNode* list1, ListNode* list2){
        ListNode* dummy = new ListNode(-1);
        ListNode* res = dummy;
        while(list1 && list2){
            if(list1->val<=list2->val){
                res->next = list1;
                res = list1;
                list1 = list1->next;
            }
            else{
                res->next = list2;
                res = list2;
                list2 = list2->next;
            }   
        }
        if(list1) res->next = list1;
        else res->next = list2;
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* middle = findMiddle(head);
        ListNode* Lhead = head;
        ListNode* Rhead = middle->next;
        middle->next = NULL;
        Lhead =  sortList(Lhead);
        Rhead = sortList(Rhead);
       return merge2(Lhead,Rhead);
    }
};
