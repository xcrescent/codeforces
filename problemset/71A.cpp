#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l = s.size();
		if(l>10){
			cout<<s[0]<<l-2<<s[l-1]<<endl;
		}else{
			cout<<s<<endl;
		}
	}
	return 0;
}