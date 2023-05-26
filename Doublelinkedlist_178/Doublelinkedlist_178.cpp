#include <iostream>
using namespace std;

class Node {
public:
    int noMhs;
    string name;
    Node* next;
    Node* prev;

};

class DoubleLinkedList {
private:
    Node* START;
public:
    DoubleLinkedList();
    void addNode();
    bool search(int rollNo, Node** previous, Node** current);
    bool deleteNode(int rollNo);
    bool listEmpty();
    void transverse();
    void revtransverse();
    void hapus();
    void searchData();
};

DoubleLinkedList::DoubleLinkedList() {
    START = NULL;
}

void DoubleLinkedList::addNode() {
    int nim;
    string nm;
    cout << "\nEntar the roll number o f the student: ";
    cin >> nim;
    cout << "\nEnter the name of the student: ";
    cin >> nm;
    Node* newNode = new Node();             //Step 1
    newNode->noMhs = nim;                   //Step 2
    newNode->name = nm;                     //Step 2
    
    /*Insert a node on the beginning of a double linked list*/
    if (START == NULL || nim <= START->noMhs) {
        if (START != NULL && nim == START->noMhs)
        {
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }
        newNode->next = START;		//Step 3 
        if (START != NULL)
            START->prev = newNode;  //Step 4
        newNode->prev = NULL;       //Step 5
        START = newNode;            //Step 6
        return;
    }
}
