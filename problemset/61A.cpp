#include <iostream>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int t= a.size();
	for (int i = 0; i < t; ++i)
	{
		if (a[i]!=b[i])
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
}