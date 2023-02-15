#include <iostream>
using namespace std;

int main(){
	string s;
	int count=0;
	cin>>s;
	for(auto i:s){
		if (i>=97 && i<=122)
		{
			count++;
		}
	}
	for (int i = 0; i < s.size(); ++i)
	{
		if (count>=s.size()-count)
		{
			if (s[i]>=97 && s[i]<=122)
			{
				cout<<s[i];
			}else{
				s[i] = s[i]+32;
				cout<<s[i];
			}
		}
		else
		{
			if (s[i]>=97 && s[i]<=122)
			{
				s[i] = s[i]-32;
				cout<<s[i];
			}else{
				
				cout<<s[i];
			}
		}
	}

}