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

struct node* insafter(struct node* start, int key, int x){
    struct node* P=getnode();
    struct node *ptr=start;
    while(ptr->data!=key && ptr!=NULL){
        ptr=ptr->next;
    }
    if(ptr==NULL){
        cout<<"No such node found....";
        return start;
    }
    P->data=x;
    P->next=ptr->next;
    ptr->next=P;
    return start; 
}

struct node* insend(struct node* start, int x){
    struct node* P=getnode();
    struct node *ptr=start;
    if(ptr!=NULL){ 
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=P;
        P->data=x;
        // return start;
    }
    else{
        start= insbeg(start,x);
    }
    return start;
}
int delbeg(struct node** start){
    if(*start == NULL){
        cout<<"List empty"<<endl;
        return -1;
    }
    struct node *ptr = *start;
    int x = ptr->data;
    *start = ptr->next;
    free(ptr);
    return x;
}

int delafter(struct node* start,int key){
    struct node *ptr=start;
    while(ptr!=NULL && ptr->data!=key){
        ptr=ptr->next;
    }
    if(ptr==NULL || ptr->next==NULL){
        cout<<"No such node found...."<<endl;
        return -1;
    }
    struct node* temp = ptr->next;
    int x = temp->data;
    ptr->next = temp->next;
    free(temp);
    return x;
}

int delend(struct node** start){
    if(*start==NULL){
        cout<<"List empty"<<endl;
        return -1;
    }
    if((*start)->next==NULL){ 
        int x = (*start)->data;
        free(*start);
        *start = NULL;
        return x;
    }
    struct node *ptr=*start;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    int x = ptr->next->data;
    free(ptr->next);
    ptr->next=NULL;
    return x;
}


void display(struct node* start){
    struct node* ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}


int main(){
    int x,key,choice ;
    struct node* start=NULL;
    cout<<"Enter your choice:"<<endl;
    do{ 
    cout<<"Menu: "<<endl;
    cout<<"1. Insert at begining \n2.Insert at end \n3.Insert after a value \n4.Delete from begining \n5.Delete after a value\n6.Delete from end\n7.Display \n8. Exit\n";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"enter the value:";
            cin>>x;
            start=insbeg(start,x);
            break;
        case 2:
            cout<<"enter the value:";
            cin>>x;
            start=insend(start,x);
            break;
        case 3:
            cout<<"enter the value:";
            cin>>x;
            cout<<"enter the key:";
            cin>>key;
            start=insafter(start,key,x);
            break;
        case 4:
            start=delbeg(start);
            break;
        case 5:
            cout<<"enter the key:";
            cin>>key;
            start=delafter(start,key);
            break;
        case 6:
            start=delend(start);
            break;
        case 7:
            display(start);
            break;
        case 8:
            break;
    }
    
}while (choice!=5);
return 0;
}