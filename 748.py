

# Author : Shiv anand 

class Solution:
    def shortestCompletingWord(self, licensePlate, words):
        """
        :type licensePlate: str
        :type words: List[str]
        :rtype: str
        """
        ha1 = [0]*26

        licensePlate = list(licensePlate)

        for i in range(len(licensePlate)):
            if licensePlate[i].isalpha():
                licensePlate[i]=licensePlate[i].lower()
                
            if licensePlate[i].isalpha():
                ha1[ord(licensePlate[i])-97] += 1

        
        ans = ""

        for i in range(len(words)):
            p = words[i]
            p = p.lower()
            
            ha2 = [0]*26
            
            for j in range(len(p)):
                if p[j].isalpha():
                    ha2[ord(p[j]) - 97] += 1
                    
            flag = 1
            for j in range(26):
                if ha1[j] > 0:
                    if ha2[j] < ha1[j]:
                        flag = 0
                        break;
            if flag == 1:
                if ans == "":
                    ans = p
                elif len(p) < len(ans):
                    ans = p
        return ans
