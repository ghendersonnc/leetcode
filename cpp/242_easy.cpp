class Solution {
public:
    bool isAnagram(string s, string t) {
        int length = s.length();

        if (length != t.length()) {
            return false;
        }

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for (int i = 0; i < length; i++) {
            if (sMap.find(s[i]) == sMap.end())
                sMap[s[i]] = 1;
            else
                sMap[s[i]] += 1;

            if (tMap.find(t[i]) == tMap.end())
                tMap[t[i]] = 1;
            else
                tMap[t[i]] += 1;
        }

        return (sMap == tMap);
    }
};