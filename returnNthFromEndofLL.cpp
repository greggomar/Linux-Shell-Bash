/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    int length = 0;
    Node *cur = head;
    while(cur != NULL){
        ++length;
        cur = cur->next;
    }
    for (int i = 0 ; i < length - positionFromTail -1 ; ++i)
        head = head->next;
    return head->data;
        
}
