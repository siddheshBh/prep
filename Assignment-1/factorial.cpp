#include<iostream>
using namespace std;
int main()
{
	int n;
	int fact=1;
	cout<<"Enter the number";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial is"<<fact<<endl;
	return 0;
}