#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c;
	    d=max(max(a,b),c);
	    e=min(min(a,b),c);
	    f=(a+b+c)-(e+d);
	    cout<<f<<endl;
	}
	return 0;
}
