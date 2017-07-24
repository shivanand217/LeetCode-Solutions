#include<bits/stdc++.h>
using namespace std;

// 1 to n
// backtracking
void combination(vector<int> &current, int n, int k, vector<vector<int> > &ans)
{
    if(k == 0)
	{
        vector<int> newEntry = current;
        reverse(newEntry.begin(), newEntry.end());
        ans.push_back(newEntry);
        return;
	}

    if(n == 0 || n < k)
		return;

    //not include now
    combination(current, n-1, k, ans);

    // include now
    current.push_back(n);
    combination(current, n-1, k-1, ans);

    current.pop_back();
    return;
}

vector<vector<int> > combine(int n, int k)
{
    vector<vector<int> > ans;
    vector<int> current;
    combination(current, n, k, ans);
    return ans;
}

int main()
{
	int n,k;
	cin>>n>>k;

	vector<vector<int> > ans;
	ans = combine(n,k);

    for(int i=0; i<ans.size(); i++)
	{
        for(int j=0; j<ans[i].size(); j++)
		{
            cout<<ans[i][j]<<" ";
		}cout<<endl;
	}

	return 0;
}
