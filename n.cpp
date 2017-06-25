#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;

    string s;
    int sum , num;

    while(t--)
	{
		sum = 0;
		num = 0;

        scanf("%d", &n);

        cin>>s;
        int cnt=0;

        for(int i=0; i<s.length(); i++)
		{
            if(s[i]=='(')
				cnt++;
			else if(isdigit(s[i]) && cnt==n+1)
			{
                if(!isdigit(s[i+1]))
					sum+=s[i]-'0';
				else
				{
					num=0;
                    while(isdigit(s[i]))
					{
                        num=num*10+(s[i]-'0');
                        i++;
					}
					i--;
					sum+=num;
				}
			}
			else if(s[i]==')')
			{
                cnt--;
			}
		}

        printf("%d\n", sum);
	}

	return 0;
}
