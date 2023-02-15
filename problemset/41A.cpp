#include <iostream>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int l = a.size();
	while(l--){
		
		if (a[l]!=b[a.size()-l-1])	
		{
			break;
		}
	}
	if(l==-1){
		cout<<"YES"<<endl;
	} else{
		cout<<"NO"<<endl;
	}
}