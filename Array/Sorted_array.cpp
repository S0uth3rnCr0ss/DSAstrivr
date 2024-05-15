#include<iostream>

using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    int n;

    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

   
    if (isSorted(arr, n)) {
        cout << " sorted." <<endl;
    } else {
        cout << "not sorted." <<endl;
    }

    return 0;
}