#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
      int val;
      Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// newnode ar jonne akta function create korlam
void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)  // corner case jonne condition
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// print ar jonne akta function create korlam
void print_link_list(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    // create Node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    // connect Node
    head->next = a;
    a->next = tail;

    // newnoede ar prnit ar function k call korlam
    insert_at_tail(head ,tail, 40);
    insert_at_tail(head,tail, 50);
    insert_at_tail(head,tail, 60);
    print_link_list(head);
    cout << "tail = " << tail->val << endl;

    return 0;
}
