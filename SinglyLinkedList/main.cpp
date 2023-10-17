#include "SinglyLinkedList.h"
#include <iostream>

int main() {
    SinglyLinkedList sll;
    sll.addtoHead(5);
    sll.addtoHead(4);
    sll.addtoHead(3);
    sll.addtoHead(10);
    sll.addToTail(50);
    sll.printList();
    return 1;
}