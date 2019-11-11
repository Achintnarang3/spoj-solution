#include <bits/stdc++.h>

#define  R return
#define  vc vector<char> 
#define   lli long long int
 

using namespace std;
void solve()
{
		lli n,s;
	cin>>n>>s;
	lli sum=  (n*(n+1))>>1;
	
	if(s>sum)
	{
		cout<<"Impossible";
		R;
	}
	vc sign(n+1,'+');
	if(sum%2!=s%2)
	{
		cout<<"Impossible";
		R;
	}
	
	for(int i=n;i>=2;i++)
	{
		
		if(sum-2*i>=s&&sum-2*i!=s+2)
		{
			sum-=2*i;
			sign[i]='-';
		}
	}
	
	if(sum!=s)
	{
			cout<<"Impossible";
		R;
		
	}
	cout<<"1";
	for(int i=2;i<=n;i++)
	cout<<sign[i]<<i;
}

int main() {
	

solve();
	

	return 0;
}
