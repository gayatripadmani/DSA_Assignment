
#include <iostream>
using namespace std;

struct node 
{
    int data;
    struct node* next;
};

// insert a node before a node
void insertAtBeginning(struct node** head, int new_data) {
    
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    // insert the data
    new_node->data = new_data;
    new_node->next = (*head);

    // Move head to new node
    (*head) = new_node;
}

// Insert a node after a node
void insertAfter(struct node* prev_node, int new_data) {
    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Insert at the end
void insertAtEnd(struct node** head, int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    struct node* last = *head;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (last->next != NULL) last = last->next;

    last->next = new_node;
    return;
}

// Delete a node
void deleteNode(struct node** head, int key) {
    struct node *temp = *head, *prev;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        delete(temp);
        return;
    }

    // Find the key to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not present
    if (temp == NULL) return;

    // Remove the node
    prev->next = temp->next;
    delete(temp);
}

// Search a node
bool searchNode(struct node** head, int key) {
    struct node* current = *head;

    while (current != NULL) {
        if (current->data == key) return true;
        current = current->next;
    } 
    return false;
}

// Sort the linked list
void sortLinkedList(struct node** head) {
    
    struct node *current = *head, *index = NULL;
    int temp;

    if (head == NULL) {
        return;
    } 
    else{
        while(current != NULL){

            // index points to the node next to current
            index = current->next;

            while(index != NULL){
                if(current->data > index->data){
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

// Print the linked list
void printList(struct node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

// Driver program
int main() {
  struct node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    cout << endl << "Linked list: ";
    printList(head);

    cout << endl << "\nAfter deleting an element: ";
    deleteNode(&head, 3);
    printList(head);

    int searchele = 4;
    if (searchNode(&head, searchele)) {
        cout << endl << "\n" << searchele << " is found";
    } 
    else {
        cout << endl << "\n" << searchele << " is not found";
    }

    sortLinkedList(&head);
    cout << endl << "\nSorted List: ";
    printList(head);
}