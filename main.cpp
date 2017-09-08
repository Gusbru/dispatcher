#include <iostream>
#include "main.h"
#include "utils.h"
#include "menu.h"

using namespace std;



int main() {

    // menu variables
    bool quit = false;
    int userOption;
    int val;

    // initialize an empty list
    node *head = nullptr;

    do {
        menu();
        cin >> userOption;

        switch (userOption){
            case 1:
                messageEnterValue();
                cin >> val;
                addBegin(&head, val);
                break;
            case 2:
                messageEnterValue();
                cin >> val;
                addEnd(&head, val);
                break;
            case 3:
                printList(head);
                break;
            case 4:
                clearList(&head);
                break;
            case 0:
                cout << "Good bye!" << endl;
                quit = true;
                break;
            default:
                cout << "Option not valid. Try again." << endl;
                break;
        }
    } while(!quit);


    return 0;
}