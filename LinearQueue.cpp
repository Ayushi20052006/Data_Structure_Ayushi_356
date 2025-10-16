#include <bits/stdc++.h>
using namespace std;

void enqueue(int Arr[],int N, int element){
    if(Front==-1||Rear==-1){
        Front++;
        Rear++;
    }
    if(Rear==N){
       cout<<"Overflow....\n";
    }
    else{
        Arr[Rear]=element;
        Rear++;
    }
}

void dequeue(int Arr[],int N){
    if(Front==-1||Front==Rear){
        cout<<"Underflow....\n";
    }
    else{
        cout<<"%d is deleted\n"<<Arr[Front];
        Front++;
    }
}

void display(int Arr[],int N){
    if(Front==-1||Front==Rear){
        cout<<"Underflow....\n";
    }
    else if(Rear==N-1){
        cout<<"Overflow....\n";
    }
    else{
        for(int i=Front;i<Rear;i++){
            cout<<Arr[i];
        }
    }

}


int main(){
    int choice,element;
    do{
        cout<<"\nEnter your choice\n1.Insert in queue\n2.Deletion from queue\n3.Display\n4.Exit\n";
        cin>>choice;
        switch(choice){
            case(1):
                cout<<"Enter the element to be inserted\n";
                cin>>element;
                enqueue(Queue,N,element);
                break;
            case(2):
                dequeue(Queue,N);
                break;
            case(3):
                display(Queue,N);
                break;
            case(4):
                cout<<"Exiting........\n";
                break;

        }
            
    }while(choice!=4);

    return 0;    

}