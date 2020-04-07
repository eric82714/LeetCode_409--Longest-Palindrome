class Solution:
    def longestPalindrome(self, s: str) -> int:
        hashmap = {}
        size = 0
        add = 0
        
        for w in s:
            if w not in hashmap: hashmap[w] = s.count(w)
            else: continue
                
        for i, k in enumerate(hashmap):
            if hashmap[k] % 2 == 0: size += hashmap[k]
            if hashmap[k] % 2 == 1: 
                size += (hashmap[k] - 1)
                add = 1
                
        return size + add
