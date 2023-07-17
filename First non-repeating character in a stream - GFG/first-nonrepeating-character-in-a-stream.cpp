//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A) {
            queue<char> charQueue;
            int charCount[26] = {0};
            string result;
        
            for (char c : A) {
                charCount[c - 'a']++;
                charQueue.push(c);
        
                while (!charQueue.empty() && charCount[charQueue.front() - 'a'] > 1) {
                    charQueue.pop();
                }
        
                if (charQueue.empty()) {
                    result.push_back('#');
                } else {
                    result.push_back(charQueue.front());
                }
            }
        
            return result;
        }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends