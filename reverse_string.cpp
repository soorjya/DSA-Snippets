#include <vector>
#include <algorithm>

using namespace std;

void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    // Swap elements from the start and end of the array
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s1);
  
    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    reverseString(s2);


    return 0;
}
