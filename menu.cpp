//
// Created by gusbr on 08/09/2017.
//

#include <iostream>
#include "menu.h"

using namespace std;

void menu() {
    cout <<
               "\n************************************************************\n"
                 "*                         MAIN MENU                        *\n"
                 "************************************************************\n"
                 "*                                                          *\n"
                 "* Choose one option below:                                 *\n"
                 "*                                                          *\n"
                 "* 1. Insert an element at begin of the list                *\n"
                 "* 2. Insert an element in the end of the list              *\n"
                 "* 3. Print the list values                                 *\n"
                 "* 4. Clear the list                                        *\n"
                 "* 5. Remove the first element                              *\n"
                 "* 6. Remove the last element                               *\n"
                 "* 7. Insert an element (N) in an ordered list              *\n"
                 "* 9. Advanced Menu                                         *\n"
                 "* 0. Exit                                                  *\n"
                 "*                                                          *\n"
                       "******************************************************\n"
         << endl;
}

void menuAdvanced() {
    cout <<
               "\n******************************************************\n"
                 "*                     ADVANCED MENU                  *\n"
                 "******************************************************\n"
                 "*                                                    *\n"
                 "* Choose one option below:                           *\n"
                 "*                                                    *\n"
                 "* 1. Return the number of even elements in a list    *\n"
                 "* 2. Return the highest value                        *\n"
                 "* 3.                                                 *\n"
                 "* 4.                                                 *\n"
                 "* 0. Return to Main Menu                             *\n"
                 "*                                                    *\n"
                 "******************************************************\n"
         << endl;
}