#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = NULL;
    }

    // Function to insert a node at the beginning of the list
    void insertNode(int value) {
        // Create a new node
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;

        // Update the head
        head = newNode;
    }

    // Function to delete a node from the list
    void deleteNode(int value) {
        // Check if the list is empty
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }

        // Check if the node to be deleted is the head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Search for the node to be deleted
        Node* current = head;
        Node* previous = NULL;
        while (current != NULL && current->data != value) {
            previous = current;
            current = current->next;
        }

        // If the node is not found
        if (current == NULL) {
            cout << "Node not found." << endl;
            return;
        }

        // Delete the node
        previous->next = current->next;
        delete current;
    }

    // Function to search for a node in the list
    bool searchNode(int value) {
        Node* current = head;
        while (current != NULL) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Function to display the elements of the list
    void displayList() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;

    // Insert nodes into the list
    myList.insertNode(5);
    myList.insertNode(10);
    myList.insertNode(15);
    myList.insertNode(20);

    cout << "Linked List: ";
    myList.displayList();

    // Search for a node
    int searchValue = 10;
    if (myList.searchNode(searchValue)) {
        cout << "Node " << searchValue << " is found." << endl;
    } else {
        cout << "Node " << searchValue << " is not found." << endl;
    }

    // Delete a node
    int deleteValue = 15;
    myList.deleteNode(deleteValue);
    cout << "Linked List after deleting node " << deleteValue << ": ";
    myList.displayList();

    return 0;
}

