class Solution {
public:
    bool isPalindrome(string s) {
   string su="";
        // transform given string to lower case
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' and s[i]<='z')
                su+=s[i];
            else if(s[i]>='0' and s[i]<='9')
                su+=s[i];
        }
        // reverse string, to check whether it is palindrome
        string rev=su;
        reverse(rev.begin(),rev.end());
        
        return (rev==su);
    }
};