struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* rotateByN(Node *&head, int pos) {
        if(head==NULL || pos==0 ){
            return head;
        }
        
        Node* curr=head;
        Node* newHead;
        
        while(curr->next!=NULL && pos>1){
            curr=curr->next;
            k--;
        }
      
        Node *tail = curr->prev;
        newHead = curr;
        tail->next = NULL;
        curr->prev = NULL;
        
        if(newHead!=NULL){
            Node* join=newHead;
            
            while(join->next!=NULL){
                join=join->next;
            }
            join->next=head;
            head->prev=join;
            return newHead;
        }
        return head;
    }
};
