#include <bits/stdc++.h>
using namespace std;
struct Node {
    int coef;
    int power;
    Node* next;
};

Node* createNode(int coef,int power) {
    Node* newNode = new Node();
    newNode->coef = coef;
    newNode->power = power;
    newNode->next = NULL;
    return newNode;
}

void poly1(Node*& head1, int coef,int power) {
    Node* newNode = createNode(coef,power);
    if (head1 == NULL) { 
        head1 = newNode;
        return;
    }
    Node* temp = head1;
    while (temp->next != NULL) { // go to last node
        temp = temp->next;
    }
    temp->next = newNode; // link new node at the end
}
void poly2(Node*& head2, int coef,int power) {
    Node* newNode = createNode(coef,power);
    if (head2 == NULL) { 
        head2 = newNode;
        return;
    }
    Node* temp = head2;
    while (temp->next !=NULL) { // go to last node
        temp = temp->next;
    }
    temp->next = newNode; // link new node at the end
}
void insert(Node*& poly3,int coef,int power){
    Node* newNode = createNode(coef,power);
    if(poly3==NULL){
        poly3=newNode;
        return;
    }
    Node* temp = poly3;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void print(Node* poly3) {
    Node* temp = poly3;
    while (temp != NULL) {
        cout << temp->coef << "x^"<<temp->power<<" ";
        temp = temp->next;
    }
    cout << endl;
}
void addition(Node* head1,Node* head2){
    Node* poly1=head1;
    Node* poly2=head2;
    Node* poly3=NULL;
    while (poly1!= NULL && poly2!=NULL) {
        if(poly1->power==poly2->power){
            insert(poly3,poly1->coef+poly2->coef,poly1->power);
            poly1=poly1->next;
            poly2=poly2->next;
        }else{
            if(poly1->power > poly2->power){
                insert(poly3,poly1->coef,poly1->power);
                poly1=poly1->next;
            }
            if(poly2->power > poly1->power){
                insert(poly3,poly2->coef,poly2->power);
                poly2=poly2->next;
            }
        }
    }
    while(poly1!=NULL){
        insert(poly3,poly1->coef,poly1->power);
        poly1=poly1->next;
    }
    while(poly2!=NULL){
        insert(poly3,poly2->coef,poly2->power);
        poly2=poly2->next;
    }
    print(poly3);
}
void subtraction(Node* head1,Node* head2){
    Node* poly1=head1;
    Node* poly2=head2;
    while(poly2!=NULL){
        poly2->coef=(-1)*poly2->coef;
        poly2=poly2->next;
    }
    addition(head1,head2);
}
void multiply(Node* head1,Node* head2,int size){
    Node* poly1=head1;
    Node* poly2=head2;
    Node* poly3=NULL;
    int count,exp;
    int arr[size]={0};
    while(poly1!=NULL){
        while(poly2!=NULL){
            count=poly1->coef * poly2->coef;
            exp=poly1->power +poly2->power;
            arr[exp]=arr[exp]+count;
            poly2=poly2->next;
        }
        poly1=poly1->next;
        poly2=head2;
    }
    for(int i=size-1;i>=0;i--){
        insert(poly3,arr[i],i);
    }
    print(poly3);
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;
    // Node* head = nullptr;
    int n,m;
    cout<<"enter the highest power of poly 1 & 2";
    cin>>n>>m;
    int coef,power;
    cout<<"poly1\n";
    for(int i=n;i>=0;i--){
        power=i;
        cout<<"enter the coeff of x^"<<power<<" : ";
        cin>>coef;
        if(coef!=0){
            poly1(head1,coef,power);
        }
    }
    cout<<"poly2\n";
    for(int i=m;i>=0;i--){
        power=i;
        cout<<"enter the coeff of x^"<<power<<" : ";
        cin>>coef;
        if(coef!=0){
            poly2(head2,coef,power);
        }
    }
    int choice;
    do
    {
        cout << "Enter\n1.Addition\n2.Subtraction\n3.Multiplication\n4.End\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"poly 3: ";
            addition(head1,head2);
            cout << "\n";
            break;
        case 2:
            cout<<"poly 3: ";
            subtraction(head1,head2);
            cout << "\n";
            break;
        case 3:
            cout<<"poly 3: ";
            multiply(head1,head2,n+m+1);
            cout << "\n";
            break;
        default:
            cout << "invalid \n";
        }
    } while (choice != 4);

    return 0;
}