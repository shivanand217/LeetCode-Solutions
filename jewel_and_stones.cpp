class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_map<char,int> un_map;

        int count=0;

        for(int i=0;i<J.length();i++){
            un_map[J[i]]++;
        }

        for(int i=0;i<S.length();i++){
            if(un_map[S[i]]>0)
                count++;
        }
        return count;
    }
};