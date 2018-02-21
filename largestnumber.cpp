
/** Corner Case : [0, 0, 0, 0] **/

bool compare(const string &s1, const string &s2) {
    return ((s1 + s2) > (s2 + s1));
}

string Solution :: largestNumber(const vector<int> &A) {
    vector<string> s;

    for(int i=0; i<A.size(); i++) {
        int k = A[i];
        string m = "";

        while(k) {
            m += (k%10) + '0';
            k /= 10;
        }

        reverse(m.begin(), m.end());
        s.push_back(m);
    }

    sort(s.begin(), s.end(), compare);
    string ans="";

    for( int i=0; i<s.size(); i++ ){
        ans += s[i];
    }

    if(ans.length()==0){
        ans+='0';
    }

    return ans;
}

