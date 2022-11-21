#include <iostream>
using namespace std;

struct Node
{
    int item;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtHead(int data)
{
    struct Node* new_node = new Node();

    new_node->item = data;
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(int data)
{
    struct Node* new_node = new Node();
    struct Node* last = head;

    new_node->item = data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
    }

    else
    {
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = new_node;
    }
}

void insertAfter(struct Node* prev_node, int data)
{
    if (prev_node == NULL)
    {
        cout << "\nThe given previous node cannot be NULL..";
    }

    else
    {
        struct Node* new_node = new Node();

        new_node->item = data;
        new_node->next = prev_node->next;
        prev_node->next = new_node;
    }
}
Node* removeFirstNode(struct Node* head)
{
    if (head == NULL)
        return NULL;
    Node* temp = head;
    head = head->next;

    delete temp;

    return head;
}
Node* removeLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

   /* Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;

    delete (second_last->next);
    second_last->next = NULL;*/

    return head;
}
void deleteNode(int key)
{
    struct Node *temp = head, *prev;

    if (temp != NULL && temp->item == key)
    {
        head = temp->next;
        return;
    }

    while (temp != NULL && temp->item != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
}

    void printList(struct Node* node)
    {
        while (node != NULL)
        {
            cout << node->item << " ";
            node = node->next;
        }
        cout << endl << endl;
    }



int main()
{
    insertAtHead(5);
    insertAtHead(4);
    insertAtHead(3);
    insertAtHead(2);
    insertAtHead(1);

    cout << "Linked list after inserting at Head: ";
    printList(head);

    insertAtEnd(10);
    insertAtEnd(11);
    insertAtEnd(12);
    insertAtEnd(13);
    insertAtEnd(14);

    cout << "Linked list: ";
    printList(head);

    insertAfter(head->next->next->next->next, 55);

    cout << "Linked list after inserting 55: ";
    printList(head);

    cout << "\nAfter deleting 3, 11 & 13: ";
    deleteNode(3);
    deleteNode(11);
    deleteNode(13);

    printList(head);

}
