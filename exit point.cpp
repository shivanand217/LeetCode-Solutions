// Samsung R&D
#include<bits/stdc++.h>
using namespace std;
int mat[22][22];
int n,m;
bool valid(int x,int y){
	return (x>=0&&x<n&&y>=0&&y<m);
}
int main(){
int t;
scanf("%d", &t);

while(t--){
	scanf("%d%d", &n, &m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	char d = 'R';bool ans=true;
    int s_x=0,s_y=0;
    int e_x=-1,e_y=-1;
    while(ans){
        if(d=='L'){
            if(mat[s_x][s_y]==1){mat[s_x][s_y]==0;
                d='U';
                if(valid(s_x-1,s_y)){
					s_x-=1;
                }else{
                    ans=false;
                    e_x=s_x;e_y=s_y;
                }
            }else{
                if(valid(s_x,s_y-1)){
                    s_y-=1;
                }else{
                    ans=false;
                    e_x=s_x;e_y=s_y;
                }
            }
        }
        else if(d=='R'){
				if(mat[s_x][s_y]==1){mat[s_x][s_y]==0;
                d='D';
                if(valid(s_x+1,s_y)){
					s_x+=1;
                }else{
                	ans=false;
                	e_x=s_x;e_y=s_y;
                }
            }else{
                if(valid(s_x,s_y+1)){
					//printf("ayaya");
                    s_y+=1;
                }else{
                    ans=false;
                    e_x=s_x;e_y=s_y;
                }
            }
        }
        else if(d=='U'){
				if(mat[s_x][s_y]==1){mat[s_x][s_y]==0;
                d='R';
                if(valid(s_x,s_y+1)){
					s_y+=1;
                }else{
                	ans=false;
                	e_x=s_x;e_y=s_y;
                }
            }else{
                if(valid(s_x-1,s_y)){
                    s_x-=1;
                }else{
                    ans=false;
                    e_x=s_x;e_y=s_y;
                }
            }
        }
        else if(d=='D'){
				if(mat[s_x][s_y]==1){mat[s_x][s_y]==0;
                d='L';
                if(valid(s_x,s_y-1)){
					s_y-=1;
                }else{
                	ans=false;
                	e_x=s_x;e_y=s_y;
                }
            }else{
                if(valid(s_x+1,s_y)){
                    s_x+=1;
                }else{
                    ans=false;
                    e_x=s_x;e_y=s_y;
                }
            }
        }
    }
    printf("%d %d\n",e_x,e_y);
}
	return 0;
}
