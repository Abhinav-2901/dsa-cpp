class Node{
    public:
    int data;
    Node * next;

    Node(int value);
};


class LinkedList{
    private:
    Node *head;

    public:
    LinkedList();


    void addAtBeginning(int value);
    void addAtEnd(int value);
    void deleteValue(int value);
    void display();
    int digit();
    void reverseLinkedList();
    void removeNthFromEnd(int n);

    ~LinkedList();
};