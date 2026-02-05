#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();

        for (int i = 0; i < n; i += k) {
            int l = i;
            int r = min(i + k - 1, n - 1);

            while (l < r) {
                swap(arr[l], arr[r]);
                l++;
                r--;
            }
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    Solution s;
    s.reverseInGroups(arr, k);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
