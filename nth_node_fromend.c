#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;

}*start;

void insert();

int getNthFromLast(struct Node *head, int n)
{

  struct Node *curr = head, *ahead = head;
  while (n && ahead->next ) {
    ahead = ahead->next;
    n -= 1;
  }
  if (n > 1)
    return -1;
  else if (n == 1)
    return head->data;

  while (ahead) {
    curr = curr->next;
    ahead = ahead->next;
  }
  return curr->data;
}




int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    start = NULL;
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    insert(n);
    int res = getNthFromLast(start, k);
    printf("%d\n", res);
  }
  return 0;

}


void insert(int n)
{ int value, i;
  struct Node *temp;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &value);
    if (i == 0)
    {
      start = (struct Node *) malloc( sizeof(struct Node) );
      start->data = value;
      start->next = NULL;
      temp = start;
      continue;
    }
    else
    {
      temp->next = (struct Node *) malloc( sizeof(struct Node) );
      temp = temp->next;
      temp->data = value;
      temp->next = NULL;
    }
  }
}
