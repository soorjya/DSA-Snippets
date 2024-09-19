#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) 
    {
        vector<int> circle(n);
        for (int i = 0; i < n; ++i) circle[i] = i + 1;

        int index = 0;
        while (circle.size() > 1) 
        {
            index = (index + k - 1) % circle.size();
            circle.erase(circle.begin() + index);
        }
        return circle[0];
    }
};

int main() {
    Solution solution;
    int n = 5;  
    int k = 2;  
    cout << "The winner is: " << solution.findTheWinner(n, k) << endl;
    return 0;
}
