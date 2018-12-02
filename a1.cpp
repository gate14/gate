#include <iostream>
using namespace std;
int main()
{
	//Write code here
	long long m,n,x,y,t,i,sm=0;
	cin>>x>>y>>t;
	m=x-y;
	while(t--)
	{
	    cin>>n;
	    sm += n/m;
	    if(n%m<=y)
	    sm++;
	}
	cout<<sm<<endl;
	return 1;
}
