#include<iostream>
using namespace std;
int main()
{
	int n, count;
	cin >> n;
	int a[n];
	for ( int i = 0; i< n; i++)
	{
		cin >> a[i];
	}
	for ( int i = 0; i< n; i++)
	{
		for ( int j = i+ 1; j< n; j++)
		{
			if ( a[i] == a[j])
			{
				count = 1;
			}
		}
	}
	if ( count == 1) { cout << "yes";} else { cout << "no";}
}
	
