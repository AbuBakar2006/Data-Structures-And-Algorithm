#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList
{
    Node *head;

public:
    DoublyLinkedList()
    {
        head = nullptr;
    }
    void InsertNode(int val);
    void InsertNodeAtIndex(int index, int val);
    void DeleteNode(int val);
    void DeleteNodeAtIndex(int index);
    void UpdateNode(int val, int NewVal);
    void UpdateNodeAtIndex(int index, int NewVal);
    void DisplayList();
};

void DoublyLinkedList::InsertNode(int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    temp->next->prev = temp;
}

void DoublyLinkedList::InsertNodeAtIndex(int index, int val) {}
void DoublyLinkedList::DeleteNode(int val) {}
void DoublyLinkedList::DeleteNodeAtIndex(int index) {}
void DoublyLinkedList::UpdateNode(int val, int NewVal) {}
void DoublyLinkedList::UpdateNodeAtIndex(int index, int NewVal) {}

void DoublyLinkedList::DisplayList()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    DoublyLinkedList L1;
    L1.InsertNode(4);
}
