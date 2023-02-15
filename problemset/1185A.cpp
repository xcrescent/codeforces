#include <iostream>
#define ll long long
using namespace std;

void swap(ll& a, ll& b)
{
	ll t = a;
	a = b;
	b = t;
}
int main(){
	ll a,b,c,d,ans = 0;
	cin>>a>>b>>c>>d;
	if (a > b)
		swap(a, b);
	if (b > c)
		swap(b, c);
	if (a > b)
		swap(a, b);
	ll x = b - a;
	ll y = c - b;
	if (x < d)
		ans = d - x;
	if (y < d)
		ans = ans + d - y;
	cout << ans << endl;
}