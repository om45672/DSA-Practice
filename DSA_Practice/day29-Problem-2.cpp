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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL) return 1;
        ListNode* temp = head;
        stack<int> st;
        while(temp){
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode* reverse = new ListNode(st.top());
        ListNode* mover = reverse;
        st.pop();
        int n = st.size();
        for(int i = 0;i<n;i++){
            ListNode* temp = new ListNode(st.top());
            mover->next = temp;
            mover = temp;
            st.pop();
        }
        int cnt = 0;
        for(int i=0;i<=n;i++){
            if(reverse->val==head->val) cnt++;  
            reverse = reverse->next;
            head = head->next;  
        }
        if(cnt == (n+1)) return 1;
        return 0;
    }
};
