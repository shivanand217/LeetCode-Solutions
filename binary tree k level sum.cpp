#include <iostream>
#include<string>
using namespace std;

int main() {
	//code

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int i,cnt=0;
	    int sum=0,num=0;
	    for(i=0;i<str.length();i++)
	    {
	        if(str[i]=='(')
	        cnt++;
	        else if(isdigit(str[i])&&cnt==n+1)
	        {
	            if(!isdigit(str[i+1]))
	            sum+=str[i]-'0';
	            else
	            {
	                while(isdigit(str[i]))
	                {
	                    num=num*10+str[i]-'0';
	                    i++;
	                }
	                sum+=num;
	                i--;
	                num=0;
	            }
	        }
	        else if(str[i]==')')
	        cnt--;
	    }
	    cout<<sum<<"\n";
	}

	return 0;
}
