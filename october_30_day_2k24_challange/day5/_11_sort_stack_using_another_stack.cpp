#include <stack>
#include <iostream>

std::stack<int> sortStack(std::stack<int>& stacku) {
    std::stack<int> tempStack;

    while (!stacku.empty()) {
        int temp = stacku.top();
        stacku.pop();

        while (!tempStack.empty() && tempStack.top() > temp) {
            stacku.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(temp);
    }

    return tempStack;
}

int main() {
    std::stack<int> stacku;
    stacku.push(5);
    stacku.push(2);
    stacku.push(8);
    stacku.push(3);
    stacku.push(1);
    stacku.push(6);
    stacku.push(4);

    std::stack<int> sortedStack = sortStack(stacku);

    std::cout << "Sorted stack: ";
    while (!sortedStack.empty()) {
        std::cout << sortedStack.top() << " ";
        sortedStack.pop();
    }
    std::cout << std::endl;

    return 0;
}