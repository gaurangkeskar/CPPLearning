#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
public:
    Stack();
    void push(const T& item);
    void pop();
    T top() const;
    bool isEmpty() const;
    size_t size() const;

private:
    std::vector<T> elements;
};



