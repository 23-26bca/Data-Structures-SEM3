#include <iostream.h>
#include <conio.h>

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the doubly linked list
void insertEnd(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to search for a key in the doubly linked list
Node* search(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL; // Key not found
}

// Function to display the doubly linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void main() {
    clrscr();
    Node* head = NULL;
    int n, data, key;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> data;
        insertEnd(head, data);
    }

    cout << "Doubly Linked List: ";
    display(head);

    cout << "Enter the key to search: ";
    cin >> key;

    Node* result = search(head, key);
    if (result != NULL) {
        cout << "Key found: " << result->data << endl;
    } else {
        cout << "Key not found" << endl;
    }
    getch();
}
