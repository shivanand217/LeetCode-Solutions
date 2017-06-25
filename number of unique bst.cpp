#include<bits/stdc++.h>
#define si(x) scanf("%d",&x)
using namespace std;
int unique_bst(int n, int counts[])
{
    int count_=0;
    if(n < 0){
		return 0;
    }
    if(n <= 1){
		return 1;
    }
    for(int i=1; i<=n; i++){
        if(counts[i-1] == -1){
            counts[i-1]=unique_bst(i-1, counts);
        }
        if(counts[n-i] == -1){
			counts[i-1]=unique_bst(n-i, counts);
        }
        count_ += counts[i-1]*counts[n-i];
    }
    return count_;
}
void solve(int len, int n)
{
    int *counts = new int[n+1];
    for(int i=0; i<=n; i++)
	{counts[i]=-1;}
    printf("%d\n", unique_bst(len, counts));
}

int main()
{
    int t,n;
	si(t);
    int a=1;
	while(t--)
	{
        si(n);
        solve(n-a+1, n);
	}
	return 0;
}
