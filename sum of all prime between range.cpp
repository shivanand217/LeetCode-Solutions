#include<bits/stdc++.h>
using namespace std;

bool arr[1000005]={false};

void precomp()
{
    arr[0]=arr[1]=true;
	for(long int i=2; i*i <= 1000005; i++)
	{
        if(arr[i]==false)
		{
			for(long int k=2*i; k <= 1000005; k+=i)
                arr[k] = true;
		}
	}
}

int main() {
	precomp();
	int T;
	cin >> T;
	for(int i = 0;i < T;i++){

	    int n;
	    cin >> n;

	    long int sum = 0;

	    for(int j = 1;j < n+1;j++){
	        if(arr[j] == false){
	            sum += j;
	        }
	    }

	    cout << sum << endl;
	}
	return 0;
}
