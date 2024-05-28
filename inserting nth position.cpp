#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head;
class node
{
public:
    void Insert(int data, int n)
    {
        Node *temp1 = new Node();
        temp1->data = data;
        temp1->next = NULL;
        if (n == 1)
        {
            temp1->next = head;
            head = temp1;
            return;
        }
        Node *temp2 = head;
        for (int i = 0; i < n - 2; i++)
            temp2 = temp2->next;
        temp1->next = temp2->next;
        temp2->next = temp1;
        delete temp1;
    }

    void Print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    int n, x, j;
    head = NULL;
    node a;
    a.Insert(10, 1);
    a.Insert(12, 2);
    a.Insert(100, 2);
    a.Print();
    j++;
    return 0;
}