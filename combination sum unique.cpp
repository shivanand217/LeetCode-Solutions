#include<bits/stdc++.h>
using namespace std;

void combination_sum(vector<int> &unique_, int index , vector<int>& current, int curr_sum, int target, set<vector<int> >& ans)
{
    if(index >= unique_.size())
	{
        if(curr_sum == target)
		{
			ans.insert(current);
		}
		return;
	}

    if(curr_sum > target)
		return;

    if(curr_sum == target)
	{
        if(ans.find(current) == ans.end())
			ans.insert(current);
        return;
	}

    for(int i=index; i<unique_.size(); i++)
	{
        current.push_back(unique_[i]);
        curr_sum += unique_[i];

        combination_sum(unique_, i+1, current, curr_sum, target, ans);

        current.pop_back();
        curr_sum -= unique_[i];
	}
	return;
}

vector<vector<int> > combination(vector<int>& curr, int target)
{
    set<vector<int> > ans;
    vector<int> current;
    sort(curr.begin(), curr.end());
    combination_sum(curr , 0, current, 0, target, ans);
    vector<vector<int> > ans1;

    for(auto it=ans.begin(); it != ans.end(); it++)
	{
        ans1.push_back(*it);
	}

    return ans1;
}

int main()
{
	vector<int> curr;
    int n, target;
    cin>>n;

    int tmp;
    for(int i=0; i<n; i++)
	{
        cin>>tmp;
        curr.push_back(tmp);
	}

	cin>>target;
	vector<vector<int> > ans;
    ans = combination(curr, target);

    for(int i=0; i<ans.size(); i++)
	{
        for(int j=0; j<ans[i].size(); j++)
		{
		cout<<ans[i][j]<<" ";
		}cout<<endl;
	}

	return 0;
}
