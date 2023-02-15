#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[t];
	for (int i = 0; i < t; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < t; ++j)
		{
			if (arr[j]==i+1)
			{
				cout<<j+1<<" ";
				break;
			}
		}	
	}
	return 0;
}