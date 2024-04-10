class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        for(int i = 0;i<deck.size();i++){
            cout<<deck[i]<<" ";
        }
        queue<int> q;

        q.push(deck[deck.size()-1]);
        for(int i =deck.size()-2;i>=0;i--){
          
           int  x=q.front();
            q.pop();
            q.push(x);
            q.push(deck[i]);
              }
        vector<int> result;
        while(!q.empty()){
            result.push_back(q.front());
            q.pop();
        }
 
         reverse(result.begin(),result.end());
        return result;
    }

};