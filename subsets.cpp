#include<bits/stdc++.h>
using namespace std;

void generate_all_subsets(vector<int>& current, int index, vector<int>& curr, vector<vector<int> >& ans)
{
    if(index >= curr.size())
	{
		ans.push_back(current);
		return;
	}
    //include current index it or not
    generate_all_subsets(current, index+1, curr, ans);
    current.push_back(curr[index]);

    generate_all_subsets(current, index+1, curr, ans);
	current.pop_back();
	return;
}

vector<vector<int> > subset(vector<int>& curr)
{
    vector<vector<int> > ans;
    vector<int> current;

	sort(curr.begin(), curr.end());
    generate_all_subsets(current, 0, curr, ans);
    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
	vector<int> curr;
    for(int i=0; i<4; i++)
	{
		curr.push_back(i);
	}

    vector<vector<int> > ans;
    ans = subset(curr);

    for(int i=0; i<ans.size(); i++)
	{
		for(int j=0; j<ans[i].size(); j++)
		{
            cout<<ans[i][j]<<" ";
		}cout<<endl;
	}

	return 0;
}
