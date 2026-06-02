class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='I'){
                if(i==s.size()-1){
                    n+=1;
                }
                else if(s[i+1]!='V'&&s[i+1]!='X'){
                    n+=1;
            
                }
                else{
                    if(s[i+1]=='V'){
                        n+=4;
                        i++;
                    }
                    else{
                        n+=9;
                        i++;
                    }
                }

            }
            else if(c=='V') n+=5;
            else if(c=='X'){
                if(i==s.size()-1){
                    n+=10;
                }
                else if(s[i+1]!='L'&&s[i+1]!='C'){
                    n+=10;
                }
                else{
                    if(s[i+1]=='L'){
                        n+=40;
                        i++;
                    }
                    else{
                        n+=90;
                        i++;
                    }
                }
            }
            else if(c=='L') n+=50;
            else if(c=='C'){
                if(i==s.size()-1){
                    n+=100;
                }
                else if(s[i+1]!='D'&&s[i+1]!='M'){
                    n+=100;
                }
                else{
                    if(s[i+1]=='D'){
                        n+=400;
                        i++;
                    }
                    else{
                        n+=900;
                        i++;
                    }
                }
            }
            else if(c=='D') n+=500;
            else if(c=='M') n+=1000;
            else return n;
        }
        return n;
        
    }
};