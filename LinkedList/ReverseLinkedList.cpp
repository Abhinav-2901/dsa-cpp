#include <iostream>
#include "LinkedList.h"

using namespace std;


int main(){
    LinkedList list;
    list.addAtBeginning(1);
    list.addAtBeginning(2);
    list.addAtBeginning(3);


    list.display();

    list.reverseLinkedList();

    list.display();

    return 0;
}