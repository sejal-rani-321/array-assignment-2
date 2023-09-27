/*

WAp to find the largest three elements in array

*/

#include<iostream>
#include<climits>
using namespace std;

int threeLargeElement(int arr[], int n){
    int third, first, second ;
    third = first = second = INT_MIN;
    
    for (int i = 0; i < n; i++){
        if(arr[i] > first){
            third = second;
            cout << " thrid " << third ;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first){
            third = arr[i];
        }
    }
        cout <<" largest three elements in array " << first << " " << second << " " << third << endl;
} 

int main(){
    int arr[] = {4,5,3,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    threeLargeElement(arr,n);
}