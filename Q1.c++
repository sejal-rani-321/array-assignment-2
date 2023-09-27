/* 
count the number of elements strictly greater than  x.
*/
#include<iostream>
using namespace std;

int countElement(int arr[], int n){
    int x = 5;
    int count = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] > x){
           arr[i] = arr[i] % 10;
              ++count;
              cout << endl << arr[i] ;
        }
    }
    return count;
}

int main(){
    int arr[] = {2,3,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "no. of element greater than x : " << countElement(arr,n);
    
}
