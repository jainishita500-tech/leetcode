class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> siso;
        unordered_map<char,char> tiso;
        for(int i=0;i<s.size();i++){
        auto si=siso.find(s[i]);   //  finding elements
        auto ti=tiso.find(t[i]);
        if(si!=siso.end() && si->second!=t[i])  // (.end)= is for if the elemnet is not present in si so we store that elemnt .in simple it goes till end for finding elemnts 
        return false;
        if(ti!=tiso.end() && ti->second!=s[i]) 
        return false;
        
        siso[s[i]]=t[i];  // maping e=a
        tiso[t[i]]=s[i];  // maping a=e
        }
        return true;
        
    }
};