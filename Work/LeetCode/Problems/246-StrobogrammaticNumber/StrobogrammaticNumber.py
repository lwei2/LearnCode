class Solution():
    def strobogrammatic(self, s):
        lookup = {'1': '1', '8': '8', '0': '0', '6': '9', '9': '6'}
        i, j = 0, len(s) - 1
        while i <= j:
            if s[i] not in lookup or  lookup[s[i]] != s[j]:
                return False
            i += 1
            j -= 1
 
        return True　



class Solution:
    lookup = {'0':'0', '1':'1', '6':'9', '8':'8', '9':'6'}
 
    def isStrobogrammatic(self, num):
        n = len(num)
        for i in xrange((n+1) / 2):
            if num[n-1-i] not in self.lookup or \
               num[i] != self.lookup[num[n-1-i]]:
                return False
        return True
