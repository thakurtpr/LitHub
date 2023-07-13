//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int> frequencyMap;
        for (int i = 0; i < n; i++)
        {
            frequencyMap[arr[i]]++;
        }
        unordered_set<int> frequencySet;
       for (auto it = frequencyMap.begin(); it != frequencyMap.end(); it++)
        {
            int frequency = it->second;
           if (frequencySet.count(frequency) > 0)
            {
                return false;
            }
            frequencySet.insert(frequency);
        }

        return true;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends