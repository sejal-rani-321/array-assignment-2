/*if an array arr contains n elements, then check if the given array is a palindrom or not*/

#include<iostream> 
using namespace std;

bool isPalindrom(int arr[],int n){
    int s = 0;
    int e = n-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[s] != arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;   
    }
    
}

int main(){
    int arr[] = {1,0,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl << isPalindrom(arr,n);

}