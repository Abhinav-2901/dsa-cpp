#include <iostream>
#include "LinkedList.h"

using namespace std;


int main(){
    LinkedList list1;
    list1.addAtBeginning(0);
    list1.addAtBeginning(0);
    list1.addAtBeginning(1);

    LinkedList list2;
    list2.addAtBeginning(0);
    list2.addAtBeginning(0);
    list2.addAtBeginning(2);
    

    list1.display();
    list2.display();
    
    int res1 = list1.digit();
    int res2 = list2.digit();
    cout << res1 + res2;


    return 0;
}