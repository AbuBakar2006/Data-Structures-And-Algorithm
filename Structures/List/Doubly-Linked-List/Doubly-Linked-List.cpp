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

    ~DoublyLinkedList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
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

void DoublyLinkedList::InsertNodeAtIndex(int index, int val)
{
    if (index < 0)
    {
        cout << "Invalid Index";
        return;
    }

    if (index == 0)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        newNode->prev = nullptr;

        if (head != nullptr)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    if (head == nullptr)
        return;

    Node *temp = head;

    while (index > 1 && temp->next != nullptr)
    {
        temp = temp->next;
        index--;
    }

    if (index > 1)
    {
        cout << "Index out of bounds" << endl;
        return;
    }

    Node *newNode = new Node(val);

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != nullptr)
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

void DoublyLinkedList::DeleteNode(int val)
{
    if (head == nullptr)
    {
        cout << "List is Empty!";
        return;
    }

    Node *temp = head;

    while (temp != nullptr)
    {

        if (temp->data == val)
        {
            Node *Del = temp;
            if (Del == head)
            {
                head = head->next;
                if (head != nullptr)
                {
                    head->prev = nullptr;
                }
            }
            else
            {
                if (Del->prev != nullptr)
                {
                    Del->prev->next = Del->next;
                }
                if (Del->next != nullptr)
                {
                    Del->next->prev = Del->prev;
                }
            }
            temp = Del->next;
            delete Del;
        }
        else
            temp = temp->next;
    }
}

void DoublyLinkedList::DeleteNodeAtIndex(int index)
{
    if (index < 0)
        return;

    if (head == nullptr)
    {
        cout << "List is Empty!";
        return;
    }

    Node *temp = head;

    if (index == 0)
    {
        head = head->next;
        if (head != nullptr)
        {

            head->prev = nullptr;
        }
        delete temp;
        return;
    }

    while (index > 0 && temp != nullptr)
    {
        temp = temp->next;
        index--;
    }
    if (temp == nullptr)
    {
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next != nullptr)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void DoublyLinkedList::UpdateNode(int val, int NewVal)
{
    if (head == nullptr)
    {
        cout << "List is Empty!";
        return;
    }
    Node *temp = head;
    bool found = false;
    while (temp != nullptr)
    {
        if (temp->data == val)
        {
            temp->data = NewVal;
            found = true;
        }
        temp = temp->next;
    }
    if (!found)
    {
        cout << "Value " << val << " not found in the list." << endl;
    }
}

void DoublyLinkedList::UpdateNodeAtIndex(int index, int NewVal)
{
    if (index < 0)
    {
        cout << "Invalid Index!";
        return;
    }
    if (head == nullptr)
    {
        cout << "List is Empty!";
        return;
    }

    Node *temp = head;
    while (index > 0 && temp != nullptr)
    {
        temp = temp->next;
        index--;
    }
    if (temp == nullptr)
    {
        cout << "Index Out of Bound!";
        return;
    }
    temp->data = NewVal;
}

void DoublyLinkedList::DisplayList()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " <--> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    DoublyLinkedList list;
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
