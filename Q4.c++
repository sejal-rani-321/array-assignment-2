/*

find the difference between the sum of element at even indices to the sum of element at odd indices.

*/
#include<iostream>
using namespace std;

int oddElementSum(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(i%2==0){
            sum += i;
        }
    }
    // cout << "sum of element at odd indices: " << sum <<endl;
    return sum;
}
int evenElementSum(int arr[],int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(i%2!=0){
            sum += i;
        }
    }
    return sum;
    // cout << "sum of element at even indices: " << sum <<endl;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "sum of element at even indices: "<< evenElementSum(arr,n) << endl;
    cout << "sum of element at odd indices: " << oddElementSum(arr,n) << endl;

    cout << "difference: " << evenElementSum(arr,n) -  oddElementSum(arr,n) << endl;
}