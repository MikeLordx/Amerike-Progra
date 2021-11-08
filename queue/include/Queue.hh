#pragma once
#include<iostream>
#include "Node.hh"

class Queue
{
private:
    Node* head{};
    Node* end{};
public:
    Queue();
    ~Queue();
    Node* Peek() const;
    void Pop();
    void Push(Book* book);
    bool IsEmpty() const;
    void Print();
};
