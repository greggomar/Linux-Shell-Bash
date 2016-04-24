/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    if(head == NULL) return head;
    if(position == 0) return head->next;
    Node *cur = head;
    while (--position){
        cur = cur->next;
    }
    cur->next = cur->next->next;
    return head;
}
