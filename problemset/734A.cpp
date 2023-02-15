#include <iostream>
using namespace std;

int main(){
	int n,a=0;
	string s;
	cin>>n;
	cin>>s;
	int i=n;
	while(i--){
		if (s[i]=='A')
		{	
			a++;
		}
	}
	// cout<<n<<a<<n-a;
	if(a>n-a){
		cout<<"Anton";
	}else if(a<n-a){
		cout<<"Danik";
	} else {
		cout<<"Friendship";
	}
}