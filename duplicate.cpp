#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(int arr[], int n)
{

    
    for (int i = 0; i < n; i++) {
        arr[i] += 1;
    }

  
    vector<int> res;

    int count = 0;

    for (int i = 0; i < n; i++) {

        
        int index = abs(arr[i]) > n ? abs(arr[i]) / (n + 1)
                                    : abs(arr[i]);

        
        if (index == n) {
            count++;
            continue;
        }

       
        int val = arr[index];

        
        if (val < 0) {
            res.push_back(index - 1);
            arr[index] = abs(arr[index]) * (n + 1);
        }
        else if (val > n)
            continue;
        else
            arr[index] = -arr[index];
    }

    
    if (count > 1)
        res.push_back(n - 1);

    if (res.size() == 0)
        res.push_back(-1);
    else
        sort(res.begin(), res.end());

    return res;
}


int main()
{
    int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 0 };
    int n = sizeof(numRay) / sizeof(numRay[0]);

    vector<int> ans = duplicates(numRay, n);
    for (int i : ans)
        cout << i << ' ' << endl;
    return 0;
}