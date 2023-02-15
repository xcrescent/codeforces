#include <iostream>
using namespace std;

int main(){
	string s,t;
	cin>>s;
	for (int i = 0; i < s.size(); ++i)
	{
		int j;
		for (j = 0; j < s.size(); ++j)
		{
			if (s[i]==s[j])
			{
				break;
			}
		}
		if (i==j)
		{
			t+=s[i];
		}
	}
	// cout<<t<<endl;
	if (t.size()%2==0)
	{
		cout << "CHAT WITH HER!" << endl;
	} 
	else
	{
		cout << "IGNORE HIM!" << endl;
	}
	return 0;
}