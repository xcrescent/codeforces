#include <iostream>
using namespace std;

int main(){
	int t,count=0;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if (b-a>=2)
			{
				count++;
			}	
	}
	cout<<count;
}