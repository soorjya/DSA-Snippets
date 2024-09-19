#include <bits/stdc++.h>
using namespace std;

int candy(int n, vector<int>&arr,int m)
{
    sort(arr.begin(),arr.end());
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%5==0)
        count++;
        else if(arr[i]<=m)
        {
            count++;
            m-=arr[i];
        }
    }
    return count;
}


int main() {
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int m;
    cin>>m;
    
    cout<<candy(n,arr,m);

    return 0;
}
