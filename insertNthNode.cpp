/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *newNode = new(Node);
    newNode->data = data;
    if(head == NULL){
        return newNode;
    }
    if(position == 0){
        newNode->next = head;
        return newNode;
    }
    Node *cur = head;
    while (cur->next != NULL && --position){
        cur = cur->next;
    }
    newNode->next = cur->next;
    cur->next = newNode;
    return head;
}

