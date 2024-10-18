#include <iostream>
#include <string>
#include "Stack.h"

bool isBalanced(const std::string& expression) {
    Stack<char> stack;

    for (char ch : expression) {
        if (ch == '(') {
            stack.push(ch);
        }
        else if (ch == ')') {
            if (stack.isEmpty()) {
                return false; // Unmatched closing parenthesis
            }
            stack.pop();
        }
    }

    return stack.isEmpty(); // If stack is empty, parentheses are balanced
}

int main() {
    std::string expression;

    std::cout << "Enter a string of parentheses: ";
    std::getline(std::cin, expression);

    if (isBalanced(expression)) {
        std::cout << "The parentheses are balanced." << std::endl;
    }
    else {
        std::cout << "The parentheses are not balanced." << std::endl;
    }

    return 0;
}
