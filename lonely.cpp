#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    int ans=0;

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        ans^=a[i];

    }

    printf("%d\n", ans);
    return 0;
}
