#include <iostream>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll s,a,b,c, buy,free;
		cin>>s>>a>>b>>c;
		buy=s/c;
		free=s/c/a*b;
		cout<<buy+free<<endl;
	}
}