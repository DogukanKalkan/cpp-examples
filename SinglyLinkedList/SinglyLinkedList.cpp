#include "SinglyLinkedList.h"
#include <iostream>

SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
    tail = nullptr;
}

SinglyLinkedList::~SinglyLinkedList() {
    for(Node *current; head != nullptr;) {
        current = head->next;
        delete head;
        head = current;
    }
}

int SinglyLinkedList::isEmpty() {
    return (head == nullptr);
}

void SinglyLinkedList::addtoHead(int data) {
    head = new Node(data, head);
    if(tail == nullptr) {
        tail = head;
    }
}

void SinglyLinkedList::addToTail(int data) {
    tail = new Node(data, nullptr);
}

int SinglyLinkedList::deleteFromHead() {
    if(head == nullptr) {
        return -1;
    }

    Node *current = head;
    head = current->next;
    return current->data;
}

int SinglyLinkedList::deleteFromTail() {
    if(head == nullptr) {
        return -1;
    }
    if(head == tail) {
        head = tail = nullptr;
        return -1;
    }

    Node *current = head;
    
    while(current->next != tail) {
        current = current->next;
    }

    tail = current;

    return current->next->data;
}

void SinglyLinkedList::deleteNode(int data){
    if(head == nullptr) {
        return;
    }
    if(head->data == data){
        deleteFromHead();
        return;
    }

    Node *previous = head;
    Node *current = head->next;

    while(current != nullptr) {
        if(current->data == data){
            break;
        } else {
            previous = current;
            current = current->next;
        }
    }

    if(current != nullptr) {
        if(current == tail) {
            tail = previous;
        }
        previous->next = current->next;
        return;
    }
}

bool SinglyLinkedList::isInList(int data) const {
    Node *current = head;

    while(current != nullptr) {
        if(current->data == data) {
            break;
        }
        else {
            current = current->next;
        }
    }

    return (current == nullptr);
} 

void SinglyLinkedList::printList() const {
    Node* current = head;
    if(head != nullptr) {
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "Head: " << head->data << std::endl;
        std::cout << "Tail: " << tail->data << std::endl;
        std::cout << "List: ";
        while(current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
    } else {
        std::cout << "The list is empty" << std::endl;
    }

}