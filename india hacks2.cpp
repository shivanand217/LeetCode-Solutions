#include<bits/stdc++.h>
#define ll long long int
using namespace std;

map<ll,int> ma;

void precomp()
{
    bool *prime = (bool *)malloc(10005*sizeof(bool));

    memset(prime, true, sizeof(prime));

    prime[0]=prime[1]=false;
    for(int i=2;i*i<=10005;i++)
	{
        if(prime[i])
		{
            for(int j=2*i;j<=10005;j+=i)
			{
                prime[j]=false;
			}
		}
	}

    for(int i=2; i<=10005; i++)
	{
		if(prime[i]){
				ma[i*i]++;
        for(int j=i+1; j<=10005; j++)
		{
			if(prime[j])
			{
                ma[i*j]++;
			}
		}
		}
	}

	free(prime);
}

int main()
{
    precomp();

    ll tmp;

    int n,q,t;
    ll x;

    scanf("%d", &n);
    ll a[n];
    cin>>t;

    int index=0;

    for(int i=0; i<n; i++)
	{
        scanf("%lld", &a[i]);
	}

	ll ko;

    while(t--)
	{
        scanf("%lld",&x);
        bool ans=false;

        for(int m=0; m<n; m++)
		{
            ko = x;
            if(ma[ko]>0){ans=true;break;}
            if(ko%a[m]==0){
            while(ko)
			{
                if(ma[ko]>0){ans=true;break;}
                ko=ko/a[m];
			}
            }
            if(ans==true)break;
		}

        if(ans)
            printf("YES\n");
		else
            printf("NO\n");

	}

	return 0;
}
