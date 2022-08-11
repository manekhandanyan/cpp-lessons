#include <iostream>
using namespace std;
int binarySearch(int array[], int start, int end, int numToBeFound) {
    if (start <= end) {
        int mid = (start + end) / 2;
        if (array[mid] == numToBeFound)
            return mid ;
        if (array[mid] > numToBeFound)
            return binarySearch(array, start, mid - 1, numToBeFound);
        if (array[mid] < numToBeFound)
            return binarySearch(array, mid + 1, end, numToBeFound);
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int num;
    cout << "Enter the number to search: \n";
    cin >> num;
    int index = binarySearch (arr, 0, n-1, num);
    if(index == -1){
        cout<< num <<" is not present in the array";
    }else{
        cout<< num <<" is present at index "<< index <<" in the array";
    }
    return 0;
}