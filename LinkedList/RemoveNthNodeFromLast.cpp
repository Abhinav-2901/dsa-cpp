#include <iostream>
#include "LinkedList.h"

using namespace std;


int main(){
    LinkedList list;
    list.addAtBeginning(1);
    list.addAtBeginning(2);
    list.addAtBeginning(3);
    list.addAtBeginning(4);
    list.addAtBeginning(5);

    list.display();

    list.removeNthFromEnd(2);

    list.display();

    return 0;

}