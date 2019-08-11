class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        unordered_map<string,int> ans_count;
        vector<string> mapping = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        string temp = "";
        for(int i=0; i<words.size(); i++){
            temp = "";
            for(int j=0; j<words[i].length(); j++){
                temp += mapping[words[i][j]-'a'];
            }
            ans_count[temp]++;
        }
        
        return ans_count.size();
    }
};