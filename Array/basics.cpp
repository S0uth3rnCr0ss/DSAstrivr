//Largest element in array

#include<bits/stdc++.h>
using namespace std;

int largest_element(int arr[], int n){
    int max = arr[0];
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {2,4,7,5,8};
    int n = 5;
    int max = largest_element(arr , n);
    cout<<"The largest element is: "<<max<<endl;

    return 0;

}
 

//Do it for user input......