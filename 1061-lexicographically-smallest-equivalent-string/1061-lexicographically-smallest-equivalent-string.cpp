class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<set<char>> v(26);

        for (int i=0; i<s1.length(); i++)
        {
            v[s1[i] - 'a'].insert(s2[i]);
            v[s2[i] - 'a'].insert(s1[i]);
        }
        
        for (int i=0; i<26; i++)
            v[i].insert(char('a' + i));

        int x = 2;
        while(x--)
        {
            for (int i=0; i<26; i++)
            {
                for (auto it : v[i])
                {
                    if (char('a'+i) != it)
                        v[i].insert(v[it - 'a'].begin(), v[it - 'a'].end());
                }
            }
        }

        for (int i=0; i<baseStr.length(); i++)
            baseStr[i] = min(baseStr[i], *(v[baseStr[i] - 'a'].begin()));

        return baseStr;
    }
};