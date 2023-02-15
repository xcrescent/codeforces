#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,x=0;
	cin>>n;
	string s;
	while(cin>>s){
		if("X++" == s || "++X" == s ){
			x++;
		}else {
			x--;
		}
	}
	cout<<x;
	return 0;
}