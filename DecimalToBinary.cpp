#include<bits/stdc++.h> 
using namespace std; 

void push(int x); 
int pop();    

int st[100]; 
int top=-1; 

void push(int x) { 
    st[++top] = x; 
} 

int pop() { 
    return st[top--]; 
}

int main() { 
    int num; 
    cout << "Enter the number:"; 
    cin >> num; 

    int rem, decimal = 0, power = 1; 
    while(num > 0) { 
        rem = num % 10; 
        num = num / 10; 
        decimal += rem * power; 
        power *= 2; 
    } 

    push(decimal);  
    int a = pop(); 
    cout << "The decimal conversion is " << a << endl; 
    return 0;
}  
