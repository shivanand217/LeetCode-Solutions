class Solution {
public:
    string removeOuterParentheses(string S) {
        int open = 0, close = 0;
        string ans = "",fcuk = "",temp = "";
        for(int i=0; i<S.length(); i++){
            if(S[i] == '('){
                open+=1;
                temp+=S[i];
            }else{
                close+=1;
                temp+=S[i];
            }
            if(open == close && (open != 0 && close != 0)){
                fcuk = "";
                if(temp.length() > 2){
                    for(int j=1;j<temp.length()-1;j++){
                        fcuk+=temp[j];
                    }
                }
                ans+=fcuk;
                temp = "";
                open = 0; close = 0;
            }
        }
        return ans;
    }
};