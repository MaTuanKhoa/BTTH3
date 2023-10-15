//libary
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,n;


	cout <<"nhap a va n (a<n): ";
	cin>>a>>n;
	c=a;
	for (a;a<n;a++){
		if (a%2==1){
			b= b+a;
			}
		}
	cout<<"tong cac so le tu "<<c<<" toi "<<n<<" la: "<<b;
	return 0;
}
	
