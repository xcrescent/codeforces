#include <iostream>
using namespace std;

int main(){
	int n,h,w=0;
	cin>>n>>h;
	int t;
	for (int i = 0; i < n; ++i)
	{
		cin>>t;
		if(t>h){
			w+=2;
		}else{
			w++;
		}
	}
	cout<<w;
}