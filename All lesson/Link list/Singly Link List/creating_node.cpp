#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
       int val;
       Node *next;
};
int main()
{
    Node a, b, c;
    // proti ta node a amra value set koriya dilam
    a.val = 10;
    b.val = 20;
    c.val = 30;

    // amra node gular modde link koriya dibo
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
}
