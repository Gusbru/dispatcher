//
// Created by gusbr on 08/09/2017.
//

#include "utils.h"
#include <iostream>

using namespace std;

void messageEnterValue() {
    cout << "\nEnter the value of the element:" << endl;
}

/*
 * Given a Linked List (node type) print all the elements in the list
 *
 * @*head pointer to the first element of the liked list
 */
void printList(node *head) {

    // empty list
    if (head == nullptr) {
        cout << "Empty list." << endl;
        return;
    }

    // not empty list
    node *current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}


/*
 * Given a linked list (type node) add an element at the beginning of the list
 *
 * @**head pointer to a pointer to the first element of the list
 * @val an integer value to be given to the first element
 */
int addBegin(node **head, int val) {

    // list is empty
    if ((*head) == nullptr) {
        cout << "You gave an empty list." << endl;
        (*head) = new node;
        (*head)->val = val;
        (*head)->next = nullptr;
        return 0;
    }

    // list is not empty
    cout << "You gave a not empty list." << endl;
    node *new_element = new node;
    new_element->next = (*head);
    new_element->val = val;
    (*head) = new_element;

    return 0;
}

/*
 * Add an element in the end of the list
 *
 * @**head first element of the list
 * @val value to be added
 */
int addEnd(node **head, int val) {

    // empty list
    if ((*head) == nullptr) {
        (*head) = new node;
        (*head)->val = val;
        (*head)->next = nullptr;

        return 0;
    }

    // list is not empty
    node *current = (*head);

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = new node;
    current->next->val = val;
    current->next->next = nullptr;

    return 0;
}

/*
 * Clear all elements from a list
 *
 * @**head the first element of a list
 */
int clearList(node **head) {

    // empty list
    if ((*head) == nullptr) {
        cout << "List already empty" << endl;
        return 0;
    }

    // not empty list
    node *current = (*head);
    node *next = nullptr;
    while (current != nullptr) {
        next = current->next;
        free(current);
        current = next;
    }
    (*head) = nullptr;

    return 0;

}

/*
 * Count the number of even elements in a list
 *
 * @*head first element of the list
 * @return the number of even elements
 */
int numberOfEven(node* head){
    node *current = head;
    int count = 0;
    while (current != nullptr){
        if(current->val % 2 == 0) {
            count += 1;
        }
        current = current->next;
    }
    return count;
}

/*
 * Remove the first element from a list and return its value.
 * If the list is empty return -1
 *
 * @**head first element of a list
 * @return the value of the first element
 */
int removeFirst(node** head){

    // empty list
    if ((*head) == nullptr){
        return -1;
    }

    // list with a single element
    if ((*head)->next == nullptr){
        int val = (*head)->val;
        free((*head));
        (*head) = nullptr;
        return val;
    }

    // list with 2 or more elements
    node *current = (*head)->next;
    int val = (*head)->val;
    free((*head));
    (*head) = current;
    return val;
}