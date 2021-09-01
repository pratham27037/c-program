//update it
#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxx=2e3+100;
int a[maxx];
int n;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int sum=0;
		int sumj=0;
		int sumo=0;
		for(int i=1;i<=n;i++) 
		{
			scanf("%d",&a[i]);
			sum+=a[i];
			if(a[i]%2) sumj++;
			else sumo++;
		}
		if(sum&1) cout<<"YES"<<endl;
		else if(sumj&&sumo) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
