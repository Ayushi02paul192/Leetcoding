class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int vec[26]={0};
        for(int i=0;i<s.size();i++)
        {
            vec[s[i]-'a']++;
            vec[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
            if(vec[i])
            return false;
        return true;
    }
};