#include <cstdlib>
#include <iostream>

using namespace std;

int min(int arr[], int n, int currMin = 999999999){
    if(n==0){
        return currMin;
    }
    if(arr[n-1] < currMin){
        currMin = arr[n-1];
    }
    return min(arr, n-1, currMin);
}

int main(){
    int arr[] = {1, 4, 5, 7, 10};
    cout << min(arr, sizeof(arr)/sizeof(*arr));
    return 0;
}