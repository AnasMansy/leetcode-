class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,v=0,f=0;
        for(int i=s.size()-1 ; i>=0 ;i--)
       {
        if(s[i]== ' ' && c==0)continue;
        if(s[i]!=' '&&f==0){
            v++;
            c=1;
        }
        if(s[i]==' '&&c==1)
        f=1;
        }
         return v;
    }
   
};