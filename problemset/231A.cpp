#include <iostream>
using namespace std;

int main(){
	int t,count=0;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if(x&&y || y&&z||z&&x){
			count++;
		}

	}
	cout<<count<<endl;
	return 0;
}