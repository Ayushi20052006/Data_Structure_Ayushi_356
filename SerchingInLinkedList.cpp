#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node* getnode(){
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    return p;
}

struct node* insbeg(struct node* start, int x){
    struct node* P=getnode();
    P->data=x;
    P->next=start;
    start=P;
    return start;
}

void searchnode(struct node* start,int value){
    struct node *ptr=start;
    while(ptr!=NULL){
        if(ptr->data==value) {
            cout<<"Value found"<<endl;
            break;
        }
        ptr=ptr->next;
    }
    if(ptr==NULL || ptr->next==NULL){
        cout<<"No such node found...."<<endl;
    }
}
void countnode(struct node* start){
    int count=0;
    struct node *ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        count++;
    }
    cout<<"Total nodes in list are"<<count<<endl;
}


void display(struct node* start){
    struct node* ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}


int main(){
    int x,value,choice ;
    struct node* start=NULL;
    cout<<"Enter your choice:"<<endl;
    do{ 
    cout<<endl<<"Menu: "<<endl;
    cout<<"1. Insert at begining \n2.Search a value \n3.Count total nodes \n4.Display \n5. Exit\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"enter the value:";
            cin>>x;
            start=insbeg(start,x);
            break;
        case 2:
            cout<<"enter the value to be searched:";
            cin>>value;
            searchnode(start,value);
            break;
        case 3:
            countnode(start);
            break;
        case 4:
            display(start);
            break;
        case 5:
            break;
    }
    
}while (choice!=5);
return 0;
}