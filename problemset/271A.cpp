#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int n = t;
	while(1){
		n++;
		int d = n;
		int a = d%10;
		d/=10;
		int b = d%10;
		d/=10;
		int c = d%10;
		d/=10;
		if (a!=b&&a!=c&&a!=d&&b!=c && b!=d && c!=d)
		{
			cout<<n<<endl;
			return 0;
		}
	}
}