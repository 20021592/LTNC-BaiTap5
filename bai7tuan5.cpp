#include<iostream>
using namespace std;

void space(int m, int n)
{
	for(int i=0;i<m;i++)
	cout << " ";
	for(int i=0;i<n;i++)
	cout << "*";
}

int main()
{
	int a=4,b=1;
	for(int j=0;j<5;j++)
	{
		space(a,b);
		cout << "\n";
		a=a-1;
		b=b+2;
	}
	return 0;
}