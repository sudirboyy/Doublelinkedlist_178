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


}