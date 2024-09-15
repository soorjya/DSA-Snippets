#include <bits/stdc++.h>
using namespace std;

int count_second_highest(int arr[], int n) {
    //sort(arr, arr + n);
    int max = INT_MIN;
    int sec = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            sec = max;
            max = arr[i];
        } else if (arr[i] > sec && arr[i] != max) {
            sec = arr[i];
        }
    }
    if (sec == INT_MIN) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == sec) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {5,10,2,2,2,5,3,5,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = count_second_highest(arr, n);
    if (result > 0) {
        cout<<result<<endl;
    } else {
        cout<<""<<endl;
    }
    return 0;
}