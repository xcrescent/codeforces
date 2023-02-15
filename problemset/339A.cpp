#include <iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int count[4] = {0};
	int len = s.size();
	for (int i = 0; i < len; i=i+2)
	{
		if (s[i]=='1')
		{
			count[1]++;
		}
		else if (s[i]=='2')
		{
			count[2]++;
		}	
		else if (s[i]=='3')
		{
			count[3]++;
		}
	}
	for (int i = 1; i < 4; ++i)
	{
		for (int j = 0; j < count[i]; ++j)
		{
			cout<<i;
			count[0]++;
			if (count[0]<count[1]+count[2]+count[3])
			{
				cout<<"+";
			}
		}
	}
	return 0;
}