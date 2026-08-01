class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> v1;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            bool destroyed=false;

            while(!v1.empty() && v1.back()>0  && asteroids[i]<0 ){
                if(v1.back()<abs(asteroids[i])){
                    v1.pop_back();
                    continue;
                }
                else if(v1.back()==abs(asteroids[i])){
                    v1.pop_back();
                }
                destroyed=true;
                break;
            }
            if(!destroyed){
                v1.push_back(asteroids[i]);
            }
            

        }
        return v1;
        
        
    }
};