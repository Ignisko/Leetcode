class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char mapS2T[256] = {0}, mapT2S[256] = {0};
        
        for (int i = 0; i < s.size(); ++i) {
            if (mapS2T[s[i]] != mapT2S[t[i]]) return false;
            mapS2T[s[i]] = i + 1;
            mapT2S[t[i]] = i + 1;
        }
        
        return true;
    }
};
