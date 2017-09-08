#include <iostream>
#include "main.h"
#include "utils.h"
#include "menu.h"

using namespace std;



int main() {

    // menu variables
    bool quitMainMenu = false;
    bool quitAdvMenu = false;
    int userOption;
    int userOptionAdv;
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
            case 9:
                do {
                    menuAdvanced();
                    cin >> userOptionAdv;
                    switch (userOptionAdv){
                        case 1:
                            cout << "The list have " << numberOfEven(head) << " even elements" << endl;
                            break;
                        case 0:
                            quitAdvMenu = true;
                            break;
                        default:
                            cout << "Option not valid. Try again." << endl;
                            break;
                    }
                } while(!quitAdvMenu);
                break;
            case 0:
                cout << "Good bye!" << endl;
                quitMainMenu = true;
                break;
            default:
                cout << "Option not valid. Try again." << endl;
                break;
        }
    } while(!quitMainMenu);


    return 0;
}