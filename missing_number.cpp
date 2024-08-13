#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        int total = n*(n-1)/2;
        int actual = 0;
        for(int i=0;i<n-1;i++){
            actual = nums[i]+actual;
        }
        return total - actual;
    }
};

int main(){
    
    return 0;
}