
int find_root(int u, vector<int> parent) {
    while(u != parent[u]) {
        parent[u] = parent[parent[u]];
        u = parent[u];
    }
    return u;
}

void merge( int u , int v, vector<int> &parent, vector<int> &size ) {
    if( size[u] > size[v] ) {
        size[v] += size[u];
        parent[u] = v;
    } else {
        size[u] += size[v];
        parent[v] = u;
    }
}

int kruskals( int vertices, vector<pair<int,pair<int,int> > > edge ) {
    vector<int> parent( vertices + 1 );
    vector<int> size( vertices + 1 );

    for(int i = 1; i <= vertices; i++) {
          parent[i] = i;
          size[i] = 0;
    }

    int minimum_cost = 0, u, v, parent1, parent2, cost;
    for( int i=0; i<edge.size(); i++ ) {
        u = edge[i].second.first;
        v = edge[i].second.second;
        cost = edge[i].first;
        parent1 = find_root(u,parent);
        parent2 = find_root(v,parent);
        if(parent1 != parent2) {
            merge( parent1, parent2, parent, size );
            minimum_cost += cost;
        }
    }

    return minimum_cost;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    vector<pair<int, pair<int,int> > > edge;
    int f , s, cost;

    for( int i = 0; i < B.size(); i++ ) {
        f = B[i][0];
        s = B[i][1];
        cost = B[i][2];
        edge.push_back(make_pair(cost, make_pair(f,s)));
    }
    sort(edge.begin(),edge.end());
    int ans = kruskals(A, edge);

    return ans;
}

