//O(N+M) approach


#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}



//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    Node *i = head1, *j = head2;

    int ct1 = 0, ct2 = 0;
    while (i) {
        ct1++;
        i = i->next;
    }
    while (j) {
        ct2++;
        j = j->next;
    }
    int diff = abs(ct1 - ct2);
    i = head1; j = head2;
    if (ct1 > ct2) {
        while (diff--)
            i = i->next;
    }
    else {
        while (diff--)
            j = j->next;
    }
    while ( i && j ) {
        if ( i == j )
            return i->data;
        i = i->next;
        j = j->next;
    }
    return -1;

}

