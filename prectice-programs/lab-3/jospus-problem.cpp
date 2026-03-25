#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int josephus(int n, int k)
{
    // Create circular linked list
    Node* head = new Node(1);
    Node* prev = head;

    for (int i = 2; i <= n; i++)
    {
        prev->next = new Node(i);
        prev = prev->next;
    }

    prev->next = head; // make it circular

    Node* ptr = head;
    Node* temp;

    while (ptr->next != ptr)
    {
        for (int i = 1; i < k - 1; i++)
        {
            ptr = ptr->next;
        }

        temp = ptr->next;
        ptr->next = temp->next;

        cout << "Removed: " << temp->data << endl;

        delete temp;

        ptr = ptr->next;
    }

    return ptr->data;
}

int main()
{
    int n = 7, k = 3;

    cout << "Safe Position: " << josephus(n, k);

    return 0;
}