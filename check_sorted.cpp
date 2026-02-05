#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
    
        
        for(int i=0;i<n-1;i++){
            
                
            
            if(arr[i]>arr[i+1]){
                return false;
            }
            
            
            
            
        }
        return true;
        
    }
};
int main(){
    vector<int> arr = {1, 6, 2, 4, 5};
    Solution s;
    if(s.isSorted(arr)){
        cout<<"Array is sorted"<<endl;
    } else {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}
