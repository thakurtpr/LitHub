//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        int lar=-1,seclar=-1,tlar=-1;
      for(int i = 0 ;i< n ;i++){
          if(a[i]>lar){
              lar= a[i];
          }
      }
      for(int i = 0 ;i< n ;i++){
          if((a[i]>seclar )&& (a[i]!=lar)){
              seclar= a[i];
          }
      }
      for(int i = 0 ;i< n ;i++){
          if((a[i]>tlar) && (a[i]!=lar)&& (a[i]!=seclar)){
              tlar= a[i];
          }
      }
      return tlar;

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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends