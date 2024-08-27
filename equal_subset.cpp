#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total =accumulate(nums.begin(),nums.end(),0);

        if(total%2 !=0)
            return false;
        
        int subsetsum=total/2;
        int n = nums.size();

        vector<bool> dp(subsetsum +1,false);
        dp[0] = true;

        for(int num:nums){
            for(int i = subsetsum; i>=num;--i){
                dp[i] = dp[i] || dp[i - num];
            }
        }
        return dp[subsetsum];
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 5, 11, 5};
    cout << "Test Case 1: " << (solution.canPartition(nums1) ? "True" : "False") << endl;  // Expected output: True

    vector<int> nums2 = {1, 2, 3, 5};
    cout << "Test Case 2: " << (solution.canPartition(nums2) ? "True" : "False") << endl;  // Expected output: False

    vector<int> nums3 = {3, 3, 3, 4, 5};
    cout << "Test Case 3: " << (solution.canPartition(nums3) ? "True" : "False") << endl;  // Expected output: True

    return 0;
}