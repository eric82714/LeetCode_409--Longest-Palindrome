class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> hashmap;
        map<char, int>::iterator iter;
        int size = 0;
        int add = 0;
        
        for(auto w : s) {
            if(hashmap.find(w) == hashmap.end()) hashmap[w] = count(s.begin(), s.end(), w);
            else continue;
        }
                
        for(iter = hashmap.begin(); iter != hashmap.end(); iter++) {
            if(iter->second % 2 == 0) size += iter->second;
            if(iter->second % 2 == 1) { 
                size += (iter->second - 1);
                add = 1;
            }
        }
        
        return size + add;
    }
};
