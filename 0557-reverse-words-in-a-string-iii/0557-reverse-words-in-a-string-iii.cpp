class Solution {
public:
    string reverseWords(string s) {
       int start=0;
       int end = 0;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]==' ')
           {
               end=i-1;
               reverse(s.begin()+start,s.begin()+end+1);
               start=i+1;
               
           } 
       }
       reverse(s.begin()+start,s.end());
       return s;
    }
};