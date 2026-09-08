class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int l=0,i=0;
        while(i<players.size() && l<trainers.size()){
            if(players[i] <= trainers[l]){
                i++;
            }
            l++;
        }
        return i;
        
    }
};