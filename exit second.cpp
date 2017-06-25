// Samsung R&D
#include<bits/stdc++.h>
using namespace std;
        // d= 01 right->down
        // d= 00 down->left
        // d= 10 left->up
        // d= 11 up->right
int n,m;
int mat[22][22];
int t;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&mat[i][j]);
			}
        }
        int d=01;
        int j,k;
        j=0;
        k=0;
        while((j>=0&&j<n)&&(k>=0&&k<m)){
            if(mat[j][k]==0&&d==01){
                k++;
            }
            else if(mat[j][k]==1&&d==01){
                mat[j][k]=0;
				//d=00;
                j++;
                d=00;
            }
            else if(mat[j][k]==1&&d==00){
            	mat[j][k]=0;
				k--;
				d=10;
            }
            else if(mat[j][k]==0&&d==00){
				j++;
            }
            else if(mat[j][k]==1&&d==10){
				mat[j][k]=0;
                j--;
                d=11;
            }
            else if(mat[j][k]==0&&d==10){
                k--;
            }
            else if(mat[j][k]==1&&d==11){
				mat[j][k]=0;
                k++;
                d=01;
            }
            else if(mat[j][k]==0&&d==11){
                j--;
            }
        }
        if(j<0||j==n){
            if(j<0)j++;else if(j==n)j--;
        }
        if(k<0||k==m){
			if(k<0)k++;else if(k==m)k--;
        }
        printf("%d %d\n", j ,k);
    }
    return 0;
}
