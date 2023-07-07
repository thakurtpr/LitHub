//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // vector<int> result ; 
        // int i = 0 ,j = 0;
       
        // while(i!=n && j!=m){
        //      if(arr1[i] == arr2[j]){
        //          result.push_back(arr1[i]);
        //          i++;
        //          j++;
     
                
        //      }
        //      else if(arr1[i] <arr2[j]){
        //          if( result[result.size()-1] ==arr1[i]))
        //          i++;
        //      }
        //      else
                
        //         j++;
        // }
       
        // if(n>m){
        //     for(int i = m ;i<n;i++){
        //         result.push_back(arr1[i]);   
        //     }
        // }
        // else{
        //     for(int i = n ;i<m ; i++){
        //         result.push_back(arr2[i]);
        //     }
        // }
        // return result;
       set<int>ans;
       vector<int>uni;
       for(int i= 0 ;i<n;i++){
           ans.insert(arr1[i]);
       }
       for(int i = 0;i<m;i++){
           ans.insert(arr2[i]);
       }
       for(auto it:ans){
           uni.push_back(it);
       }
       return uni;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends