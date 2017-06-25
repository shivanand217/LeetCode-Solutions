// samsung R & D

#include<bits/stdc++.h>
using namespace std;

void swap_(char *x, char *y)
{
	char tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

set<string> s;

void backtrack(string &ss, int l, int r)
{
	if(l == r)
	{
        s.insert(ss);
	}
	else
	{
		for(int i=l; i<=r; i++)
		{
            swap_(&ss[l], &ss[i]);
            backtrack(ss, l+1, r);
            swap_(&ss[l], &ss[i]);
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);

	string ss;

	while(t--)
	{
		s.clear();
        //scanf("%s", c)
        cin>>ss;

        backtrack(ss, 0, ss.length()-1);

        for(auto it=s.begin(); it != s.end(); it++)
		{
            cout<<*it<<" ";
		}

        printf("\n");

	}

	return 0;
}
