vector<int> Solution::solve(vector<int> &A, vector<int> &B) {

    priority_queue<pair<int, pair<int,int> > > heap;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    vector<int> ans;

    set<pair<int,int> > s1;

    heap.push(make_pair(A[A.size()-1]+B[A.size()-1], make_pair(A.size()-1,A.size()-1)));

    s1.insert(make_pair(A.size()-1, A.size()-1));

    int i=A.size();

    while(i--)
    {
        pair<int, pair<int,int> > p = heap.top();
        heap.pop();

        ans.push_back(p.first);

        int x = p.second.first;
        int y = p.second.second;

        if(x > 0 && y >=0 && s1.find(make_pair(x-1, y)) == s1.end())
        {
            heap.push(make_pair(A[x-1]+B[y], make_pair(x-1, y)));
            s1.insert(make_pair(x-1, y));
        }

        if(x >=0 && y > 0 && s1.find(make_pair(x, y-1)) == s1.end())
        {
            heap.push(make_pair(A[x]+B[y-1], make_pair(x, y-1)));
            s1.insert(make_pair(x, y-1));
        }

    }

    return ans;
}

