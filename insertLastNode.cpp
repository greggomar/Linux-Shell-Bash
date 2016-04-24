/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* cur = head;
    if (head == NULL){
        cur = new(Node);
        cur->data = data;
        return cur;
    }
    else{
        while(cur->next != NULL){
            cur = cur->next;
        }
    }
    cur->next = new(Node);
    cur->next->data = data;
    return head;
}
