#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class linkedlist
{
public:
    Node *Reverse(Node *head)
    {
        Node *prev = nullptr, *current = head, *next = nullptr;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }

    void insert(Node **head, int x)
    {
        Node *temp = new Node();
        temp->data = x;
        temp->next = *head;
        *head = temp;
    }

    void print(Node *head)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Node *head = nullptr;
    linkedlist l;
    l.insert(&head, 2);
    l.insert(&head, 3);
    l.insert(&head, 3);
    l.insert(&head, 5);
    l.insert(&head, 6);

    l.print(head);
    head = l.Reverse(head);
    l.print(head);

    return 0;
}
