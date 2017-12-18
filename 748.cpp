/** Author : Shiv anand **/

class Solution {
public:
    Solution() {
    }

    string shortestCompletingWord(string licensePlate, vector<string>& words) {
  		vector<int> ha1(26);
  		string ans;
  		for(int i=0; i < 26;i++) {
  			ha1[i]=0;
  		}

  		for(int i=0;i<licensePlate.length();i++) {
  			if(isalpha(licensePlate[i]))
                licensePlate[i] = tolower(licensePlate[i]);
  			if(isalpha(licensePlate[i]))
                ha1[licensePlate[i]-'a']++;
  		}

  		vector<int> ha2(26);
        ans="";
  		for(int i=0; i < words.size(); i++) {
  			string p = words[i];
  			for(int j=0; j < 26; j++){
  				ha2[j]=0;
  			}

  			for(int j=0; j<p.length(); j++) {
  				if(isalpha(p[j]))
                    p[j]=tolower(p[j]);
                if(isalpha(p[j]))
  				  ha2[p[j]-'a']++;
  			}

  			bool an = true;
  			for(int j=0; j < 26; j++) {
  				if(ha1[j] > 0) {
  					if(ha2[j] < ha1[j]){
  						an = false;
  						break;
  					}
  				}
  			}

  			if(an == true) {
                if(ans == ""){
                    ans = p;
                }
                else if(p.length() < ans.length()) {
  					ans = p;
  				}
  			}
  		}
        return ans;
    }
};

