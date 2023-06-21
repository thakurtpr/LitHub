//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // set <int> st;
        // for(int i = 0 ;i<n;i++){
        //     st.insert(a[i]);
        // }
        // int index = 0;
        // for(auto it : st){
        //     a[index]= it;
        //     index++;
        // }
        // return index;
        int i = 0;
        int j=0;
        while(i<n){
            if(a[i]!=a[j]){
                j++;
                a[j]=a[i];
            
            }
           
             i++;
        }
         return j + 1;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends