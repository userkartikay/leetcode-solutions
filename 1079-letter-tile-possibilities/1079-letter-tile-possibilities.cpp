class Solution {
public:
    unordered_set<string> mp;
    int ans=0;
    void solve(string &tiles,vector<bool> &used,string current){
       if (!current.empty()) {
        if (mp.find(current) == mp.end()) {
            mp.insert(current);
            ans++;
        }
        }
        for(int idx=0;idx<tiles.size();idx++){
            if(used[idx]){
                continue;
            }
            used[idx]=true;
            solve(tiles,used,current+tiles[idx]);
            used[idx]=false;
        }

    }
    
    int numTilePossibilities(string tiles) {
        vector<bool> used(tiles.size(), false);
        solve(tiles,used,"");
        return ans;
    }
};