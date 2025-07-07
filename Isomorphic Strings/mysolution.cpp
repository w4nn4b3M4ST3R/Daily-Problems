/*  - Make pair each of their characters Ex: (s[0] and t[0])
    - Use 2 arrays to mark the last time the pair appeared EX: (lastS[s[0]]=lastT[t[0]]=1)
    - If the last time of any pair has a difference, the two strings is not Isomorphic and otherwise
*/

bool isIsomorphic(string s, string t) {
        int lastS[256] = {0}, lastT[256] = {0};
        for (int i = 0; i < s.size(); ++i) {
            unsigned char cs = s[i], ct = t[i];
            if (lastS[cs] != lastT[ct]) 
                return false;
            lastS[cs] = lastT[ct] = i + 1;
        }
        return true;
    }