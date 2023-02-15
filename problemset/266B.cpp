#include <iostream>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	string	s;
	cin>>s;
	int l = s.size();
	while(t--){
		for (int i = 0; i < l-1; ++i)
		{
			if(s[i]=='B' && s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
	}
	cout<<s;
}