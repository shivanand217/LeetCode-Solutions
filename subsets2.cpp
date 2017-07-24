#include<bits/stdc++.h>
using namespace std;

void unique_subsets(vector<int>& current, int index, vector<int> A, set<vector<int> >& ans)
{
    if(index >= A.size())
	{
        ans.insert(current);
        return;
	}

    // include current index or not
    unique_subsets(current, index+1, A, ans);
    current.push_back(A[index]);

    unique_subsets(current, index+1, A, ans);
    current.pop_back();

	return;
}

vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> current;
    set<vector<int> > ans;
    sort(A.begin(), A.end());

    unique_subsets(current, 0, A, ans);
    vector<vector<int> > ans1;

    for(auto it=ans.begin(); it!= ans.end(); it++)
	{
        ans1.push_back(*it);
	}

	ans.clear();
    return ans1;
}

int main()
{
	vector<int> curr;
    int n;
    cin>>n;

    int tmp;
    for(int i=0; i<n; i++)
	{
        cin>>tmp;
        curr.push_back(tmp);
	}

	vector<vector<int> > ans;
    ans = subsets(curr);

    for(int i=0; i<ans.size(); i++)
	{
        for(int j=0; j<ans[i].size(); j++)
		{
			cout<<ans[i][j]<<" ";
		}cout<<endl;
	}

	return 0;
}
