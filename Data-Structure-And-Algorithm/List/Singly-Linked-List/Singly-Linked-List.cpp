#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
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

void LinkedList::InsertNode(int val)
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
    cout << "Node Inserted Successfully!" << endl;
}

void LinkedList ::InsertNodeAtIndex(int index, int val)
{
    if (index == 0)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        cout << "Node Inserted Successfully!" << endl;
        return;
    }
    if (head == nullptr)
    {
        cout << "List is Empty. Index Out of Bound" << endl;
        return;
    }

    Node *temp = head;
    int count = 0;
    while (count < index - 1)
    {
        temp = temp->next;
        count++;
        if (temp == nullptr)
        {
            cout << "Index Out of Bound!" << endl;
            return;
        }
    }

    Node *Newnode = new Node(val);
    Newnode->next = temp->next;
    temp->next = Newnode;
    cout << "Node Inserted Successfully!" << endl;
}

void LinkedList::DeleteNode(int val)
{
    if (head == nullptr)
    {
        cout << "List is Empty!" << endl;
        return;
    }
    while (head != nullptr && head->data == val)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    Node *temp = head;
    while (temp != nullptr && temp->next != nullptr)
    {
        if (temp->next->data == val)
        {
            Node *temp2 = temp->next;
            temp->next = temp2->next;
            delete temp2;
        }
        else
        {
            temp = temp->next;
        }
    }
    cout << "Node(s) Deleted Successfully!" << endl;
}

void LinkedList::DeleteNodeAtIndex(int index)
{
    if (head == nullptr)
    {
        cout << "List is Empty" << endl;
        return;
    }
    if (index == 0)
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
        cout << "Node Deleted Successfully!" << endl;
        return;
    }
    Node *temp = head;
    int count = 0;
    while (count < index - 1)
    {
        if (temp == nullptr || temp->next == nullptr)
        {
            cout << "Node Doesn't Exist in The List. Index Out of Bound!" << endl;
            return;
        }
        temp = temp->next;
        count++;
    }

    Node *temp2 = temp->next;
    if (temp2 == nullptr)
    {
        cout << "Node Doesn't Exist in The List. Index Out of Bound!" << endl;
        return;
    }
    temp->next = temp2->next;
    delete temp2;
    cout << "Node Deleted Successfully!" << endl;
}

void LinkedList::UpdateNode(int val, int NewVal)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == val)
        {
            temp->data = NewVal;
        }
        temp = temp->next;
    }
    cout << "Node(s) Updated Successfully!" << endl;
}

void LinkedList::UpdateNodeAtIndex(int index, int NewVal)
{
    if (head == nullptr)
    {
        cout << "List is Empty. Index Out of Bound!" << endl;
        return;
    }
    Node *temp = head;
    int count = 0;
    while (count < index)
    {
        temp = temp->next;
        count++;
        if (temp == nullptr)
        {
            cout << "Node Is not Available in the List. Index Out of Bound!";
            return;
        }
    }
    temp->data = NewVal;
    cout << "Node Updated Successfully!" << endl;
}

void LinkedList::DisplayList()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null";
}

int main()
{
    LinkedList list;
    int choice, val, index, newVal;
    do
    {
        cout << "\n1. Insert Node\n2. Insert Node at Index\n3. Delete Node\n4. Delete Node at Index\n5. Update Node\n6. Update Node at Index\n7. Display List\n8. Exit\nEnter Your Choice: ";
        cin >> choice;
        if (choice == 8)
            break;
        switch (choice)
        {
        case 1:
            cout << "Enter Value to Insert: ";
            cin >> val;
            list.InsertNode(val);
            break;
        case 2:
            cout << "Enter Index: ";
            cin >> index;
            cout << "Enter Value: ";
            cin >> newVal;
            list.InsertNodeAtIndex(index, newVal);
            break;
        case 3:
            cout << "Enter Value to Delete: ";
            cin >> val;
            list.DeleteNode(val);
            break;
        case 4:
            cout << "Enter Index to Delete: ";
            cin >> index;
            list.DeleteNodeAtIndex(index);
            break;
        case 5:
            cout << "Enter Value to Update: ";
            cin >> val;
            cout << "Enter New Value: ";
            cin >> newVal;
            list.UpdateNode(val, newVal);
            break;
        case 6:
            cout << "Enter Index to Update: ";
            cin >> index;
            cout << "Enter New Value: ";
            cin >> newVal;
            list.UpdateNodeAtIndex(index, newVal);
            break;
        case 7:
            list.DisplayList();
            cout << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }
        system("pause");
        system("cls");
    } while (true);
    return 0;
}