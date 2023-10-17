#include "Node.h"

Node::Node() {
    data = 0;
    next = nullptr;
}

Node::Node(int _data, Node *_next) {
    data = _data;
    next = _next;
}