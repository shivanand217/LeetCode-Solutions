class Solution {
public:
    string toLowerCase(string str) {
        string final="";
        for(int i=0;i<str.length();i++){
            final+=tolower(str[i]);
        }
        return final;
    }
};