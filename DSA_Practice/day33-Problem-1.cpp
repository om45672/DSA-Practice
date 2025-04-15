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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> arr;
        auto temp = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;
        }
        temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        if(k>n) k=k%n;
        vector<int> rotate;
        for(int i = n-k;i<n;i++){
            rotate.push_back(arr[i]);
        }
        for(int i = 0;i<n-k;i++){
            rotate.push_back(arr[i]);
        }
        int i = 0;
        temp = head;
        while(temp){
            temp->val = rotate[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};
