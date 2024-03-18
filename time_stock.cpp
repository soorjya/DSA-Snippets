#include<bits/stdc++.h>
using namespace std;

int maxprofit(int price[],int n){
    int buy = price[0];
    int max_profit = 0;
    
    for (int i=1;i<n;i++) {
    if(buy>price[i])
        buy = price[i];
    else if(price[i]-buy > max_profit)
        max_profit = price[i] - buy;
    }
    return max_profit;
}
int main(){
    int price[]={7,1,5,6,4};
    int n = sizeof(price)/sizeof(price[0]);
    int max_Profit = maxprofit(price,n);
    cout<<"Maximum Profit You Can Get From This Stock Price Is : "<<max_Profit<<endl;
    return 0;
}