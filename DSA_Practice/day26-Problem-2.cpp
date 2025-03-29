/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        if(head == NULL || head->next == NULL) return NULL;
        if(x<=0) return head;
        int cnt = 0;
        Node* temp = head;
        while(temp){
            cnt++;
            if(cnt == x) break;
            temp = temp->next;
        }
        Node* back = temp->prev;
        Node* front = temp->next;
        if (x == 1) {
            Node* newHead = head->next;
            if (newHead) newHead->prev = NULL;
            delete head;
            return newHead;
        }

        if(front == NULL){
            back->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            return head;
        }
        back->next = front;
        front->prev = back;
        temp->prev = nullptr;
        temp->next = nullptr;
        return head;
    }
};
