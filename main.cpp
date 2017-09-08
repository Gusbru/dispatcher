#include <iostream>
#include "main.h"
#include "utils.h"

using namespace std;



int main() {

    node *head = nullptr;

    printList(head);
    addBegin(&head, 2);
    printList(head);
    addBegin(&head, 3);
    printList(head);


    return 0;
}