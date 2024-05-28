#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

// int Insert(Node *head,int x)
class Nodeinsert
{
public:
    void Insert(Node **head, int x)
    {
        Node *temp = new Node();
        temp->data = x;
        temp->next = NULL;
        if (*head != NULL)
            temp->next = *head;
        *head = temp;
        //    return head;
    }
    void Display(Node *head)
    {
        Node *temp = head;
        cout << "List is :";
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << " \n";
    }
};

int main()
{
    Node *head = NULL;
    int x;

    cout << "How many no's?  : ";
    int n;
    cin >> n;
    Nodeinsert a;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number : ";
        cin >> x;
        a.Insert(&head, x);
        a.Display(head);
    }

    return 0;
}
// Node *temp = new Node(); is a line of code that creates a new node on the heap and assigns its address to a pointer variable named temp. The Node struct is defined earlier in the code as having an int data field and a Node *next field. The new Node() expression creates a new instance of the Node struct on the heap and returns a pointer to that memory location. The pointer variable temp is then assigned this address, allowing the program to access and manipulate the new node.

// #include <iostream>
// using namespace std;
// struct Node
//{
//     int data;
//     Node *next;
// };
// Node *head = NULL;
////int Insert(Node *head,int x)
// int Insert(Node **head,int x)
//{
//     Node *temp = new Node();
//     temp->data = x;
//     temp->next = head;
//     head = temp;
//     return head;
// }
// void Display()
//{
//     Node *temp = head;
//     cout << "List is :";
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << " \n";
// };
// int main()
//{
//     head = NULL;
//     int x;
//
//     Node *temp1 = new Node();
//     cout << "Enter the no's : ";
//     int n;
//     cin >> n;
//     cout << "Enter the numbers";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         head =Insert(x);
//         Display();
//     }
//
//     return 0;
// }

// if head is not a global variable then we need to pass it in every function