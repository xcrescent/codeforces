#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	if (t%10>=5)
	{
		cout<<(t/10+1)*10;
	} 
	else
	{
		cout<<t/10*10;
	}
}