#include <iostream>
#define ll	long	long
using namespace std;

int main(){
	long double t,count=0,y=0;
	cin>>t;
	while(t--){
		long double x;
		cin>>x;
		y+=x;
		count++;
	}
	cout<<y/count;
}