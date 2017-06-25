#include<bits/stdc++.h>
using namespace std;

char *swap_(char *x, char *y)
{
    char tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
	int t;
	scanf("%d", &t);

    int n, tmp;
    string p;

    while(t--)
	{
		p = "";

		scanf("%d", &n);
		tmp = n;

        while(n)
		{
            p += (n%10) + '0';
            n /= 10;
		}

		reverse(p.begin(), p.end());
        int i=1;

        while(p[i] - '0' < p[i-1] - '0' && i<=p.length()-1)
			i++;

		if(i == p.length())
		{
            printf("not possible\n");
		}
		else
		{
            i=1;

            while(p[i] - '0' > p[i-1] - '0' && i <= p.length()-1)
				i++;

			if(i == p.length())
			{
                swap_(&p[p.length()-1], &p[p.length()-2]);
                cout<<p<<endl;
			}
			else
			{
                i=p.length()-2;

				// find the first place from right where p[i] < p[i+1]
                while(p[i] - '0' > p[i+1] - '0')
					i--;

				// swap pos and smallest to its right
				int pos;
				int val = INT_MAX;

                for(int kl = i+1; i<p.length(); i++)
				{
                    if(p[kl] - '0' < val)
					{
						val = p[kl] - '0' ;
						pos = kl;
					}
				}

				swap_(&p[i], &p[pos]);
				sort(p.begin()+(i+1), p.end());
				cout<<p<<endl;
			}
		}
	}
	return 0;
}
