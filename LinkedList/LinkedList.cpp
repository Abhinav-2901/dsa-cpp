#include <iostream>
#include "LinkedList.h"

using namespace std;

Node::Node(int value){
    data = value;
    next = nullptr;
}


LinkedList::LinkedList(){
    head = nullptr;
}


void LinkedList::addAtEnd(int value){
    Node * newNode = new Node(value);

    if(head == nullptr){
        head = newNode;
    }
    else{
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        
    }
}


void LinkedList::addAtBeginning(int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}


void LinkedList::deleteValue(int value){

    if(head->next == nullptr){
        return;
    }

    if(head->data == value){
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;

    while (temp->next != nullptr && temp->next->data != value)
    {
        temp = temp->next;
    }

    if(temp->next == nullptr){
        cout << "Element not found";
        return;
    }


    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void LinkedList::display(){
    Node *temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

LinkedList::~LinkedList(){
    Node *temp;

    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    
}

int LinkedList::digit(){
    
    Node *temp = head;
    if(temp == nullptr){
        return 0;
    }
    int digit = temp->data;
    temp = temp->next;
    while (temp != nullptr)
    {
        digit = digit * 10 + temp->data;
        temp = temp->next;
    }
    
    return digit;
}

void LinkedList::reverseLinkedList(){
    Node *prev;
    Node *next;
    Node *curr = head;

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

void LinkedList::removeNthFromEnd(int n){
    Node *slow = head;
    Node *fast = head;

    for(int i = 0; i < n; i++){
        fast = fast->next;
    }

    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;
    
}

