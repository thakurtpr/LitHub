//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
   vector<int>ans(2,-1);
   int left = 0;
   int right = n-1;
   int mid=0;
   while(left<=right){
       mid=left + (right - left) / 2;
       if(arr[mid]==x){
           ans[0] = mid;
           right = mid-1;
       }
       else if(arr[mid]<x){
           left=mid+1;
       }
       else {
            right = mid - 1;
        }
   }
   left = 0;
   right = n-1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == x) {
            ans[1] = mid;
            left = mid + 1;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends