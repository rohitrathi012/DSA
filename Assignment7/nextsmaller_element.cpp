#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n);
        stack<int> st;

        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            if(st.empty()) result[i] = -1;
            else result[i] = st.top();

            st.push(arr[i]);
        }

        return result;
    }
};
