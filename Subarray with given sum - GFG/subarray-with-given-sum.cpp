//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int left = 0; 
        int right = 0; 
        long long currSum = arr[0]; 
        
        if(s == 0){
            return {-1};
        }
        while (right <= n) {
           
            if (currSum == s) {
                    return {left + 1, right+1}; 
                }
            else  if (currSum < s) {
                right++;
                if(right<n)
                currSum += arr[right];
            }
           else  {
                
                currSum -= arr[left];
                left++;
            }
            
            
           
        }
    
    return {-1};
        // vector<int> prefixSum(n + 1, 0); 
     }   // unordered_map<long long, int> prefixSumMap;
        // for (int i = 1; i <= n; i++) {
        //     prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
        // }
        
        // for (int i = 0; i <= n; i++) {
        //     if (prefixSumMap.find(prefixSum[i] - s) != prefixSumMap.end()) {
        //         int start = prefixSumMap[prefixSum[i] - s] + 1;
        //         int end = i; 
        //         return {start, end};
        //     }
        //     prefixSumMap[prefixSum[i]] = i;
        // }
        
        // return {-1};
        // }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends