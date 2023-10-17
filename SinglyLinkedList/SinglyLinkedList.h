#ifndef SINGLYLINKEDLIST_H 
#define SINGLYLINKEDLIST_H
#include "Node.h"

class SinglyLinkedList {
    public:
        Node *head, *tail;
        SinglyLinkedList();
        ~SinglyLinkedList();
        int isEmpty();
        void addtoHead(int data);
        void addToTail(int data);
        int deleteFromHead();
        int deleteFromTail();
        void deleteNode(int data);
        bool isInList(int data) const;
        void printList() const;
};


#endif