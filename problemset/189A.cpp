#include <iostream>
using namespace std;

int main(){
	int n,a,b,c,l,ln,count=0;
	cin>>n>>a>>b>>c;
	
	for (int i = 0; i <= n; ++i)
	{
		int k = 0; 
		for (int j = 0; j <= n; ++j)
		{
			l=a*i;
			l+=b*j;
			ln = n - l;
			k= ln/c;
			if (ln>=0 && ln%c == 0 && i+j+k>count)
			{
				count = i+j+k;
				// cout<<i<<j<<k;
			}

		}
	}
	cout<<count<<endl;
	return 0;
}