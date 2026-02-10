#include <iostream>
using namespace std;

int minSwap(int arr[], int n, int k) {
    int count = 0;

    // Count elements <= k
    for(int i = 0; i < n; i++) {
        if(arr[i] <= k)
            count++;
    }

    // Count bad elements in first window
    int bad = 0;
    for(int i = 0; i < count; i++) {
        if(arr[i] > k)
            bad++;
    }

    int ans = bad;

    // Sliding window
    for(int i = 0, j = count; j < n; i++, j++) {
        if(arr[i] > k) bad--;
        if(arr[j] > k) bad++;

        ans = min(ans, bad);
    }

    return ans;
}

int main() {
    int arr[] = {2, 1, 5, 6, 3};
    int n = 5, k = 3;

    cout << minSwap(arr, n, k);
    return 0;
}
