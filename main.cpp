#include <iostream>
#include <math.h>

using namespace std;


int snt(int x)
{
	if(x<2) return 0;
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0) return 0;
	return 1;
}

int main()
{
	int n;
	cout<<"nhap n= ";
	cin>>n;
	if(snt(n)==0) cout<<n<<" khong la so nguyen to";
	else cout<<n<<" la so nguyen to";
	return 0;
}
