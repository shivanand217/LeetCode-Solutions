#include<bits/stdc++.h>
using namespace std;

void combination_sum(vector<int> &unique_, int index , vector<int>& current, int curr_sum, int target, vector<vector<int> >& ans)
{
    if(curr_sum > target)
		return;

    if(curr_sum == target)
	{
		ans.push_back(current);
        return;
	}

    for(int i=index; i<unique_.size(); i++)
	{
        current.push_back(unique_[i]);
        curr_sum += unique_[i];

        combination_sum(unique_, i, current, curr_sum, target, ans);
        current.pop_back();
        curr_sum -= unique_[i];
	}
	return;
}

vector<vector<int> > combination(vector<int>& curr, int target)
{
    vector<vector<int> > ans;
    vector<int> current;
    sort(curr.begin(), curr.end());
    vector<int> unique_;
    for(int i=0; i<curr.size(); i++)
	{
        if(i==0 || curr[i] != curr[i-1])
		{
            unique_.push_back(curr[i]);
		}
	}
    combination_sum(unique_, 0, current, 0, target, ans);
    sort(ans.begin(), ans.end());
    return ans;
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
