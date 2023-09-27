/*

Check if the given array is sorted or not

*/

#include<iostream>
using namespace std;

bool  sorted_or_not(int arr[], int n){

    for (int i = 0; i < n; i++){
         if(arr[i-1] < arr[i-2]){
         return true;
        }
         else{return false;}
    }
    
}

int main(){
     int arr[] = {3,4,5,5,9};
    // int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << sorted_or_not(arr,n);
    
}