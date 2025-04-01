/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
         auto temp = head;
        int timer = 1;
        map<Node*,int> mp;
        while(temp){
            if(mp.find(temp)!=mp.end()){
                return timer-mp[temp];
            }
            mp[temp] = timer;
            timer++;
            temp = temp->next;
        }
        return 0;
    }
};
