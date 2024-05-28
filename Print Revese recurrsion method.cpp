#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

class Linkedlist
{
public:
    void Print(Node *head)
    {
        if (head == NULL)
            return;
        Print(head->next);
        cout << head->data << " ";
    }

    Node *Insert(Node *head, int data)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;

        if (head == NULL)
            head = temp;
        else
        {
            Node *temp1 = head;
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp;
        }
        return head;
    }
};

int main()
{
    head = NULL;
    Linkedlist l;
    head = l.Insert(head, 2);
    head = l.Insert(head, 3);
    head = l.Insert(head, 4);
    head = l.Insert(head, 5);
    l.Print(head);
    return 0;
}