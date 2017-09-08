#include <iostream>
#include "main.h"
#include "utils.h"
#include "menu.h"

using namespace std;



int main() {

    // menu variables
    bool quit = false;
    int userOption;

    node *head = nullptr;

    do {
        menu();
        cin >> userOption;

        switch (userOption){
            case 1:
                cout << "\nEnter the value of the element:" << endl;
                int val;
                cin >> val;
                addBegin(&head, val);
                break;
            case 0:
                cout << "Good bye!" << endl;
                quit = true;
            default:
                cout << "Option not valid. Try again." << endl;
                break;
        }
    } while(!quit);

    printList(head);

    printList(head);
    addBegin(&head, 3);
    printList(head);


    return 0;
}