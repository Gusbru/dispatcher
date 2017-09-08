//
// Created by gusbr on 08/09/2017.
//

#include "utils.h"
#include <iostream>

using namespace std;

/*
 * Given a Linked List (node type) print all the
 * elements in the list
 *
 * @*head pointer to the first element of the liked list
 */
void printList(node* head){

    // empty list
    if(head == nullptr) {
        cout << "Empty list." << endl;
        return;
    }

    // not empty list
    node *current = head;
    while (current != nullptr){
        cout << current->val << " " ;
        current = current->next;
    }
    cout << endl;
}


/*
 * Given a linked list (type node) add an element
 * at the beginning of the list
 *
 * @**head pointer to a pointer to the first element of the list
 * @val an integer value to be given to the first element
 */
int addBegin(node** head, int val){

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