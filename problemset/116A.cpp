#include <iostream>
using namespace std;

int main(){
	int t,n=0,maxn=0;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		n-=a;
		n+=b;
		if (maxn<n)
		{
			maxn=n;
		}
	}
	cout<<maxn;
}