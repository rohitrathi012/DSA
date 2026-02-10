#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<int>& pos, int m, int minDist) {
    int count = 1;              // first ball placed
    int lastPos = pos[0];

    for (int i = 1; i < pos.size(); i++) {
        if (pos[i] - lastPos >= minDist) {
            count++;
            lastPos = pos[i];
            if (count == m)
                return true;
        }
    }
    return false;
}

int maxDistance(vector<int>& position, int m) {
    sort(position.begin(), position.end());

    int low = 1;
    int high = position.back() - position.front();
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlace(position, m, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of positions: ";
    cin >> n;

    vector<int> position(n);
    cout << "Enter positions:\n";
    for (int i = 0; i < n; i++) {
        cin >> position[i];
    }

    cout << "Enter number of balls: ";
    cin >> m;

    cout << "Maximum magnetic force = "
         << maxDistance(position, m) << endl;

    return 0;
}
