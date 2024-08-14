#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int i=0,j=0;
    vector<int> ans;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j])
            i++;
        else if(nums2[j]<nums1[i])
            j++;
        else{
            ans.push_back(nums2[j]);
            i++;
            j++;
        }
    
    }
    auto it = unique(ans.begin(), ans.end()); 
    ans.erase(it, ans.end()); 
    return ans;        
    }
};

int main(){
    return 0;
}