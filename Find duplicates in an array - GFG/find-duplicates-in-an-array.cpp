//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
    unordered_map<int,int> m;
    vector<int>temp;
    for(int i = 0 ; i < n ; i++){
        m[arr[i]]++;
    }
    for(auto itr:m) {
        if(itr.second>1){
            temp.push_back(itr.first);
        }
    }
    sort(temp.begin(),temp.end());
    if(temp.empty()){
        temp.push_back(-1);
    }
    return temp;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends