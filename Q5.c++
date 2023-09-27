/*given an array of integers, change the value of all odd indexed elements to its second multiple and 
increment all even indexed values by 10*/



#include<iostream>
using namespace std;

int modifiedArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        if(i%2!=0){  //change the value of all odd indexed elements to its second multiple
            cout << arr[i]*2 << " ";
            }
        else { //increment all even indexed values by 10

            cout << arr[i] + 10 << " ";
            }
    }
}

int main(){
    int arr[] = {2,3,4,6,7,8,5};
    int n = sizeof(arr)/ sizeof(arr[0]);

    modifiedArray(arr,n);
    
}