#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int M=1e9+7;

long long mod(long long x)
{
	return (x%M+M)%M;
}


long long sum(long long a ,long long  b)
{
	return mod(mod(a)%M+mod(b)%M);
}

long long mul(long long a ,long long b)
{
	return mod(mod(a)%M*mod(b)%M);
}


int gcd(int a ,int b)
{
	if(b==0 ) return a;
	return gcd(b,a%b);
}

int gcdArray(vector<int> arr)
{
	int result=arr[0];
	int n=arr.size();
	for(int i=1;i<n;i++)
	{
		result=gcd(result,arr[i]);
		if(result==1) return 1;
	}

	return result;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<int> arr{2,2,4,4,5};
	cout<<gcdArray(arr);

}