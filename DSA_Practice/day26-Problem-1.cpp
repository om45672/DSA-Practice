/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node* InsertAfterX(Node* head,int k){
        Node* temp = new Node(k);
        Node* front = head->next;
        head->next = temp;
        temp->prev = head;
        front->prev = temp;
        temp->next = front;
        return head;
    }
    Node* InsertAfterTail(Node* head,int k){
        Node* tail = head;
        while(tail->next){
            tail = tail->next;
        }
        Node* temp = new Node(k);
        temp->prev = tail;
        tail->next = temp;
        return head;
    }
    Node *addNode(Node *head, int pos, int data) {
        if(head == NULL){
            Node* temp = new Node(data);
            return temp;
        }
        int cnt =0;
        while(head){
            if(cnt == pos) break;
            head = head->next;
            cnt++;
        }
        if(head->next == NULL) return InsertAfterTail(head,data);
         return InsertAfterX(head,data);
    }
};
