#include<iostream>
using namespace std;
void display();
int pop();
int top = -1;
int n;
int *stack;
void push() {
    if (top == n-1){
        cout << "Stack Overflow" << endl;
    }
    else {
        int x;
        cout << "Enter the element to be pushed: ";
        cin >> x;
        top++;
        stack[top] = x;
    }
}
int pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return -1; // Indicate stack is empty
    }
    else {
        int poppedElement = stack[top];
        top--;
        return poppedElement;
    }
}
void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    int choice;
    cout << "Enter the size of the stack: ";
    cin >> n;
    stack = new int[n];
    do {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                push();
                break;
            case 2: {
                int poppedElement = pop();
                if (poppedElement != -1) {
                    cout << "Popped element: " << poppedElement << endl;
                }
                break;
            }
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    delete[] stack; // Free allocated memory
    return 0;
}