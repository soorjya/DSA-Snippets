#include <bits/stdc++.h>
using namespace std;

bool chkpair(int A[], int size, int x){
    for(int i=0;i<size;i++){
        for(int j = (i+1);j<size;j++){ 
            if(A[i] + A[j] == x)
                return 1;
        }        
    }

return 0;
}

int main()
{
    int A[] = {0,-1,2,-3,1};
    int x=10;
    int  n = sizeof(A)/sizeof(A[0]);

    if(chkpair(A,n,x)){
        cout<<"Yes"<<endl;
    }


    else{
        cout<<"No"<<endl;
    }
    return 0;
}
