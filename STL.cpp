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

    //REMOVE LAST VALUE FROM VECTOR  TC=O(1)
//    Vec.pop_back();   
//    for(auto value:Vec){
//     cout<<value<<" ";
//    } 
//    cout<<endl;
//    cout<<"First value: "<<Vec.front()<<endl;
//    cout<<"Last value: "<<Vec.back()<<endl; 

    cout<<Vec.empty()<<endl;   //Returns 0(false) or 1(true) 


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
//TO ERASE 1ST ELEMENT OF VECTOR
   Vec.erase(Vec.begin());
   for(auto value:Vec){
    cout<<value<<" ";
   } 
   cout<<endl; 

//TO ERASE A CERTAIN RANGE OF VECTOR    TC=O(N)
    Vec.erase(Vec.begin()+1,Vec.begin()+4); //to dlt elements on index 1 to 3
   for(auto value:Vec){
    cout<<value<<" ";
   } 
   cout<<endl;  

//USE OF ITERATOR
//    vector<int>::iterator itr;
//     for(auto itr=Vec.begin(); itr!=Vec.end(); itr++)
//     {
//         cout<<*(itr)<<" ";
//     }
//     cout<<endl;

//     vector<int>::reverse_iterator rit;
//     for(auto rit=Vec.rbegin(); rit!=Vec.rend(); rit++)
//         cout<<*(rit)<<" ";
//     cout<<endl;
//SORTING OF VECTOR

    // sort(Vec.begin(),Vec.end()); //Ascending order
    // for(auto v : Vec){
    //     cout<<v<<" ";
    // }
    // cout<<endl;
    // sort(Vec.rbegin(),Vec.rend());   //DESCENDING ORDER
    // sort(Vec.begin(),Vec.end(),greater<int>()); //Descending order
    // for(auto v : Vec){
    //     cout<<v<<" ";
    // }

//BINARY SEARCH
cout<<binary_search(Vec.begin(),Vec.end(),6)<<endl;   //returns 0 or 1

//TO GET INDEX OF PARTICULAR ELEMENT 
cout<<find(Vec.begin(),Vec.end(),8)-Vec.begin()<<endl;   


} 