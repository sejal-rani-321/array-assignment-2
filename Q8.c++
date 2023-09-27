/* find thr error */

#include<iostream> 
using namespace std;

double getAverage(int arr[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    double average = sum / size;
    return average;
    
}

int main(){

    int balance[5] = {1000,2,3,17,50};
    double avg;
    avg = getAverage(balance, 5 );
    cout << " Average value is: " << avg << endl;
    return 0;

}