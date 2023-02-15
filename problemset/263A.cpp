#include <iostream>
using namespace std;

int main(){
	int x;
	int f;
	for(int i=0;i<25;i++){
		cin>>f;
		if(f==1){
			x=abs((i%5)-2)+abs((i/5)-2);
		}
	}
	cout<<x;
	return 0;
}