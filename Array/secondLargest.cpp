#include<bits/stdc++.h>

using namespace std;

//Second largest..

int second_largest(int arr[]
, int n){
    int max = arr[0];
    int second_max = -1;
    for(int i = 1; i<n ; i++){
        if(arr[i] > max){
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > second_max){
            second_max = arr[i];
        }
    }
    return second_max;
}

//Second Smallest
int second_smallest(int arr[],int n){
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for(int i = 1 ; i< n; i++){
        if (arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];

        
        }
        else if (arr[i] != smallest && arr[i]<second_smallest){
            second_smallest = arr[i];
        }
    }
    return second_smallest;

}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=second_smallest(arr,n);
        int sL=second_largest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}





