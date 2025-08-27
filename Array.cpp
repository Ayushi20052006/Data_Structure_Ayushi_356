// TRAVERSAL

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,3,5,6,7,8,9,10,4,6};
//     for (int i=0; i<10; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


//INSERTION at a given location 

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10]={3,6,7,4,2,6};
//     int element=8;
//     int position=2;
//     for(int i=6;i>=position;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[position]=element;
//     for (int i=0; i<7; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


//deletion

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,3,5,7,8,6,4,3};
//     for (int i=2; i<8 ;i++){
//         arr[i]=arr[i+1];
//     }
//     for (int i=0; i<7; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//FINDING MISSING NUMBER FROM THE RANGE OF 1 TO N

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int arr[10]={1,2,4,5,6,7,8,9,10};
//     int total=n;
//     int arrsum=0;
//     for(int i=0;i<n;i++){
//         total+=i;
//         arrsum+=arr[i];
//     }
//     cout<<total-arrsum;
//     return 0;
// }

//PRINT THE ELEMENTS OF THE ARRAY WHICH AREB NOT REPEATED

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,1,2,3,3,4,5,7,7,8};
//     for(int i=0;i<10;i++){
//         int count=1;
//         for(int j=0;j<10;j++){
//             if(i==j) continue;
//             if (arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if(count==1) cout<<arr[i]<<endl;
//     }
// }

//REVERSAL OF ARRAY

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={3,5,7,9,1};
//     int f=0;
//     int l=4;
//     while(l>f){
//         swap(arr[f],arr[l]);
//         f++;
//         l--;
//     }
//     for (int i=0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//MERGING TWO SORTED ARRAY


// #include <iostream>
// using namespace std;
// int main(){
//     int arr1[6]={2,3,4,5,10,14};
//     int arr2[5]={5,7,8,9,12};
//     int buffer[11];
//     int i=0,j=0,k=0;
//     while(i<6 && j<5){
//         if(arr1[i]<=arr2[j]){
//             buffer[k]=arr1[i];
//             i++;
//             k++;
//         }
//         else{
//             buffer[k]=arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while (i<6){
//         buffer[k]=arr1[i];
//         k++;
//         i++;
//     }
//     while(j<5){
//         buffer[k]=arr2[j];
//         j++;
//         k++;
//     }
//     for(int x=0;x<11;x++){
//         cout<<buffer[x]<<"\n";
//     }

//     return 0;
// }