class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        # end =1
        sub =1
        seen ={}
        if (len(s)==0):
            return 0;
        for end in range(len(s)):
            if s[end] not in seen:
                sub = max(sub, end-start+1)

            else:
                if seen[s[end]]< start:
                    sub = max(sub, end-start+1)
                else:
                    start= seen[s[end]]+1
                
            seen[s[end]]= end
        


        

        return sub
            
            

        