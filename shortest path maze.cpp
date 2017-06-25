#include<bits/stdc++.h>
using namespace std;

/**
20 13
0 1 1 1 1 0 0 0 1 1 1 1 0
0 0 0 0 1 1 1 0 1 0 1 1 0
0 1 0 1 0 1 0 1 0 1 1 0 0
0 1 1 0 1 1 0 1 1 1 0 1 1
0 1 0 1 1 0 0 1 1 0 0 0 0
0 1 1 1 1 0 0 1 0 0 0 0 1
0 1 0 1 0 0 0 0 1 1 0 1 0
1 0 1 1 0 1 1 1 0 0 1 1 1
1 1 0 1 0 0 0 0 1 0 0 1 0
1 0 0 1 0 0 1 1 1 1 1 0 0
1 1 0 0 0 1 1 0 1 0 0 1 0
1 0 1 0 0 0 0 1 1 1 1 0 0
0 1 1 1 0 1 0 0 1 0 1 1 1
0 1 1 0 1 1 0 0 1 0 1 0 1
0 1 0 1 1 1 0 1 0 0 0 0 0
1 0 0 0 1 0 1 1 0 1 0 0 1
1 1 0 1 0 1 0 1 0 0 0 0 1
0 1 1 0 1 0 0 1 1 0 0 0 1
0 1 1 1 1 0 0 1 0 0 0 0 1
0 0 1 1 1 1 0 0 1 1 1 0 1
6 3
ans = -1
**/

int maze[22][22];
bool vi[22][22];

void clear_(){
	for(int i=0; i<22; i++){
		for(int j=0; j<22; j++){
			maze[i][j] = 0;
			vi[i][j] = false;
		}
	}
}

int n,m;

bool valid(int x, int y){
		return (x >= 0 && x<n && y>=0 && y<m && maze[x][y] == 1 && vi[x][y]==false);
}

int main()
{
	int t;
	scanf("%d", &t);

	int d_x, d_y;

    int ans;

    while(t--){
			int ans = -1;

			clear_();

		scanf("%d%d", &n, &m);

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &maze[i][j]);
			}
		}

        scanf("%d%d", &d_x, &d_y);

        int s_x=0, s_y=0;
        int move_=0;

        queue<pair<int, pair<int,int> > > q;


		/** first move
        if(valid(s_x, s_y+1)){
            q.push({move_+1, {s_x, s_y+1}});
        }
        vi[s_x][s_y+1]=true;

        if(valid(s_x+1, s_y)){
			q.push({move_+1,{s_x+1, s_y}});
        }
        vi[s_x+1][s_y]=true;
        **/

		if(maze[0][0] != 0){
		q.push({0,{0,0}});
		while(!q.empty()){

            pair<int, pair<int,int> > m = q.front();
            q.pop();
            //four direction

            if(m.second.first == d_x && m.second.second == d_y){
				ans = m.first;break;
            }

            // up
            if(valid(m.second.first-1, m.second.second)){
				q.push({m.first+1, {m.second.first-1, m.second.second}});
				vi[m.second.first-1][m.second.second]=true;
            }

            //down
            if(valid(m.second.first+1, m.second.second)){
				q.push({m.first+1, {m.second.first+1, m.second.second}});
                vi[m.second.first+1][m.second.second]=true;
            }

            // right
            if(valid(m.second.first, m.second.second+1)){
				q.push({m.first+1, {m.second.first, m.second.second+1}});
                vi[m.second.first][m.second.second+1]=true;
            }

            //left
            if(valid(m.second.first, m.second.second-1)){
				q.push({m.first+1, {m.second.first, m.second.second-1}});
                vi[m.second.first][m.second.second-1]=true;
            }
		}
	}
        printf("%d\n", ans);
    }

    return 0;
}
