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
    void Insert(int data)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    void Print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void Delete(int n)
    {
        Node *temp1 = head;
        if (n == 1)
        {
            head = temp1->next;
            delete temp1;
            return;
        }
        for (int i = 0; i < n - 2; i++)
            temp1 = temp1->next;
        Node *temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }
};

int main()
{
    head = NULL;
    int n;
    Linkedlist a;
    a.Insert(2); // Insert at the end of the list
    a.Insert(3);
    a.Insert(4);
    a.Insert(5);
    a.Insert(6);
    a.Print();
    cout << "\n\n";
    cout << "Enter a position : ";
    cin >> n;
    a.Delete(n);
    cout << "\n\n";
    a.Print();
    return 0;
}
