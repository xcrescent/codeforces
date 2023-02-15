#include <iostream>
#define ll long long
using namespace std;

int main(){
	ll t,count=0;
	cin>>t;
	// cout<<t<<endl;
	while(t*10/10){
		if(t%10 == 4 || t%10 == 7){
			// cout<<t%10<<endl;
			count++;
		}
		t=t/10;
	}
	// cout<<count;
	if(count == 4 || count==7 )
		cout<<"YES";
	else
		cout<<"NO";
	return 0;

}