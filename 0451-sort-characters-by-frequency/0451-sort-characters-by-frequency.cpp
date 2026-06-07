class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto c:s){
            mp[c]++;

        }
        string a;
        priority_queue<pair<int,char>> pq;
        for(auto &entry:mp){
            pq.push({entry.second,entry.first});
        }
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            a+=string(top.first, top.second);
        }
        return a;

        
    }
};