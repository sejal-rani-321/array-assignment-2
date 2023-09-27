/*find the unique number in a given Array where all the elements are being repeated twice with one value being unique*/

#include<iostream>
using namespace std;

int  uniqueelemen(int arr[], int n){
    int ans = 0; 
    for (int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
   cout << endl << ans ;
}

int main(){
    int arr[] = { 8,7,9,7,9,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    uniqueelemen(arr,n);
}