#include <iostream>
using namespace std;
int main ()
{
	int a[200]={2,5,4,8,6,3,9};
	int pos ,num ,i;
	cout <<"enter the pos and num ";
	cin>>pos>>num;
	for(i=5;i>=pos;i--)
	a[i+1]=a[i];
	a[pos]=num;
	cout <<"new array "
	for (i=0;i<7;i=i+1)
	cout <<a[i];
	return 0;
	
}
