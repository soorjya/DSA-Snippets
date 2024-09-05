#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int largest =INT_MIN;
    int second = INT_MIN;
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;
    vector<int> b;
    for (int i =0 ;i<n;i++){
        if(a[i]>largest){
            second = largest;
            largest = a[i];
        }
        else if(a[i]>second && a[i] != largest){
            second = a[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i]<ssmallest && a[i]!= smallest){
            ssmallest = a[i];
        }
    }
    b.push_back(second);
    b.push_back(ssmallest);
    return b;

}

int main(){
    return 0;
}
