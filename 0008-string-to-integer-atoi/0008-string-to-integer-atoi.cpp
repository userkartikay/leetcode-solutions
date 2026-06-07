class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        while(i<n && s[i]==' ') i++;
        int a=1;
        if(i<n &&(s[i]=='+'||s[i]=='-')){
            if(s[i]=='+'){
                a=1;
            }
            else{
                a=-1;
            }
            i++;
        }
        long result=0;
        while(i<n){
            if(!isdigit(s[i])) break;
            result=result*10+(s[i]-'0');
            if (result * a >= INT_MAX) return INT_MAX;
            if (result * a <= INT_MIN) return INT_MIN;
            i++; 
        }
        return (int)(result*a);

        
    }
};