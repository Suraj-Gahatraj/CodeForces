#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int M=1e9+7;

long long mod(long long x){
	return ((x%M+M)%M);
}


long long add(long long a ,long long b){
	return mod(mod(a)+mod(b));
}

long long mul(long long a ,long long b){
	return mod(mod(a)*mod(b));
}

int gcd(int a ,int b)
{
	if(b==0) return a;

	 return gcd(b,a%b);
}

void Solve()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	int min=*min_element(a.begin(),a.end());
	vector<int>v;
	for(int i=0;i<n;i++) 
	{
		if(gcd(a[i],min)==min) 
		{
			v.push_back(a[i]);
			a[i]=-1;
		}
	}

	sort(v.begin(),v.end());
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==-1) {
			a[i]=v[j];
			j++;
		}
	}

	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]>=a[i]) continue;
		else
		{
			cout<<"NO"<<"\n";
			return;
		}
	}

	cout<<"YES"<<"\n";
}





int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout<<fixed;
	int tcase;
	cin>>tcase;
	for(int i=0;i<tcase;i++)
	{
		Solve();
	}
}

