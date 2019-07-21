class Solution {
public:
    string defangIPaddr(string address) {
        string defangedIPAddress = "";
        string defangSymbol = "[.]";
        for(int i=0;i<address.length();i++){
            if(address[i] == '.'){
                defangedIPAddress+=defangSymbol;
            } else {
                defangedIPAddress+=address[i];
            }
        }
        return defangedIPAddress;
    }
};