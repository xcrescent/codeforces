#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f,cost=0;
	cin>>a>>b>>c>>d>>e>>f;
	while(d--)
	{
		if(f>=e && b>0 && c>0){
				// cout<<b<<" "<<c<<" "<<d<<endl;
				cost+=f;
				b--; 
				c--;
		}else if (a>0)
		{
			// cout<<a<<" "<<d<<endl;
			cost+=e;
			a--;
		} else if(a==0 && b>0 && c>0){
			// cout<<b<<" "<<c<<" "<<d<<endl;
				cost+=f;
				b--; 
				c--;
		}
	}
	cout<<cost;
}