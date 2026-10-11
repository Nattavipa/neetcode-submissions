class Solution {
public:
    bool isAnagram(string s, string t) {
        int size = s.length();
        std::unordered_map<char, int> iListS;
        std::unordered_map<char, int> iListT;
        if(size==t.length())
        {
            for(int i =0;i<size;i++)
            {
                iListS[s[i]]++;
                iListT[t[i]]++;
            }
            return iListS == iListT;
        }
        return false;
    }
};
