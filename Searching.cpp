//LINEAR SEARCH
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, target;
//     cout<<"Enter the size of array";
//     cin>>n;
//     int arr[100];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to be searched: ";
//     cin>>target;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             cout<<target<<" found at "<<i+1<<" position"<<endl;
//             break;
//         }
//     }

// }


// BINARY SEARCH AFTER SORTING THE GIVEN ARRAY
// #include <bits/stdc++.h>
// using namespace std;

// void sortt(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int searchh(int arr[], int n, int target) {
//     int l = 0, h = n - 1;
//     while (l <= h) {
//         int mid = (l + h) / 2;
//         if (arr[mid] == target) {
//             return mid;
//         } else if (arr[mid] > target) {
//             h = mid - 1;
//         } else {
//             l = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int n, arr[100];
//     cout << "Enter the size of array: ";
//     cin >> n;

//     cout << "Enter the elements of array:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sortt(arr, n);

//     int target;
//     cout << "Enter the element to be searched: ";
//     cin >> target;

//     int result = searchh(arr, n, target);
//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found\n";

//     return 0;
// }
