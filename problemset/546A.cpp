#include <iostream>
using namespace std;

int main(){
	int k,n,w,cost=0;
	cin>>k>>n>>w;
	for (int i = 1; i <= w; ++i)
	{
		cost+=k*i;
	}
	if(cost>n){
		cout<<cost-n;
	}else{
		cout<<0;
	}
	return 0;
}