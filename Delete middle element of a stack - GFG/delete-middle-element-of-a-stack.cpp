//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
      void removeMiddle(stack<int>& s, int sizeOfStack, int current = 0) {
        if (s.empty() || current == sizeOfStack / 2) {
            s.pop(); // Pop the middle element (when found) or last element (if the stack size is even)
            return;
        }
        
        int temp = s.top();
        s.pop();
        removeMiddle(s, sizeOfStack, current + 1);
        s.push(temp);
    }

    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s, int sizeOfStack) {
        if (sizeOfStack == 0)
            return;

        removeMiddle(s, sizeOfStack);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends