#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		if (x==1)
		{
			cout<<"HARD";
			return 0;
		}
	}
	cout<<"EASY";
	return 0;
}