#include<bits/stdc++.h>
using namespace std;
bool sort_(pair<int,int> x, pair<int,int> y)
{
    return x.first>y.first;
}
int main()
{
    int t, tmp, n, k, len;
    scanf("%d", &t);
    bool ay;
    map<int,int> ma;
    vector<pair<int,int> > v;
    priority_queue<pair<int,int> > pq;
    pair<int,int> kl;
	while(t--)
	{
		ma.clear();
		ay = false;
        scanf("%d%d", &n, &k);
        for(int i=0; i<n; i++)
		{
			len=0;
            scanf("%d", &tmp);
            if(ma[tmp] > 0)
			{
                ma[tmp]++;
                len=0;
                for(auto it=ma.begin();it!=ma.end();it++)
				{
                    pq.push({it->second, it->first});
				}
                while(!pq.empty())
				{
					kl = pq.top();
					pq.pop();
					len++;
					if(len<=k)printf("%d ", kl.second);
				}
			}
			else
			{
				ma[tmp]++;
				for(auto it=ma.begin(); it!=ma.end(); it++)
				{
                    printf("%d ", it->first);
				}
			}

		}
		printf("\n");
	}
	return 0;
}
