#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>Vec;

//     vector<int>V={2,3,4,5,6};
//    for(auto value:V){
//     cout<<value<<" ";
//    } 
//    cout<<endl;
//    //INITIALIZING A VECTOR WITH SAME VALUES
//     vector<int>V1(3,5);
//    for(auto value:V1){
//     cout<<value<<" ";
//    } 
//    cout<<endl;

    // cout<<"Size of vector: "<<Vec.size()<<endl;
    // cout<<"Capacity of vector: "<<Vec.capacity()<<endl;
    Vec.push_back(5);
    // cout<<"Size of vector: "<<Vec.size()<<endl;
    // cout<<"Capacity of vector: "<<Vec.capacity()<<endl;
    Vec.push_back(8);
    // cout<<"Size of vector: "<<Vec.size()<<endl;
    // cout<<"Capacity of vector: "<<Vec.capacity()<<endl;
    Vec.push_back(1);
    // cout<<"Size of vector: "<<Vec.size()<<endl;
    // cout<<"Capacity of vector: "<<Vec.capacity()<<endl;
    Vec.push_back(6);
    // cout<<"Size of vector: "<<Vec.size()<<endl;
    // cout<<"Capacity of vector: "<<Vec.capacity()<<endl;
    Vec.push_back(4);
    // cout<<"Size of vector: "<<Vec.size()<<endl;
    // cout<<"Capacity of vector: "<<Vec.capacity()<<endl;

    // for(int i=0;i<Vec.size();i++){
    //     //cout<<Vec[i]<<" ";
    //     cout<<Vec.at(i)<<" ";
    // }

   for(auto value:Vec){
    cout<<value<<" ";
   } 
      cout<<endl;
//    Vec.pop_back();
//    for(auto value:Vec){
//     cout<<value<<" ";
//    } 
//    cout<<endl;
//    cout<<"First value: "<<Vec.front()<<endl;
//    cout<<"Last value: "<<Vec.back()<<endl; 
    //INSERTING ELEMENT IN STARTING OF VECTOR  
    Vec.insert(Vec.begin(),2);
    Vec.insert(Vec.begin()+2,10);
    Vec.insert(Vec.begin()+1,1);
    Vec.insert(Vec.begin()+4,12);
    Vec.insert(Vec.begin()+2,3,6); //to push a element 3 times
   for(auto value:Vec){
    cout<<value<<" ";
   } 
   cout<<endl;    
    //cout<<"Size of vector: "<<Vec.size()<<endl;
    //cout<<"Capacity of vector: "<<Vec.capacity()<<endl;
   Vec.erase(Vec.begin());
   for(auto value:Vec){
    cout<<value<<" ";
   } 
   cout<<endl; 

//TO ERASE A CERTAIN RANGE
    Vec.erase(Vec.begin()+1,Vec.begin()+4); //to dlt elements on index 1 to 3
   for(auto value:Vec){
    cout<<value<<" ";
   } 
   cout<<endl;  

//USE OF ITERATOR
//PRINTING THE VECTOR ELEMENTS
   vector<int>::iterator itr;
    for(auto itr=v.begin(); itr!=v.end(); itr++)
    {
        cout<<*(itr)<<" ";
    }
    cout<<endl;
//PRINTING THE VECTOR IN REVERSE ORDER
    vector<int>::reverse_iterator rit;
    for(auto rit=v.rbegin(); rit!=v.rend(); rit++)
        cout<<*(rit)<<" ";
    cout<<endl;

}
