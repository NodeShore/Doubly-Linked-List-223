/*
Charlie Wyman, Thomas Domser, Parker Shore, Gavin Tate
CPSC223 Doubly Linked Lists Project

This program will allow the user to navigate through a linked list of street blocks,
and will display the amount of trees on each block.
*/

#include "linked_list.hpp"
#include "linked_list.cpp"

using namespace std;

int main(){

    StreetList StreetObj;
    StreetObj.setup();

    //StreetObj.printList(); -- Essentially handled this in the traversal
    //Traversal
    cout << "Starting traversal:" << endl;
    StreetObj.interactiveTraversal();
    
    return 0;
}