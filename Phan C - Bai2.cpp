#include <iostream>
using namespace std;
int main()
{
	string s, s1="";
	getline( cin, s);
	for ( int i = s.size() - 1 ; i>=0; i-- )
	{
		s1 = s1 + s[i];
	}
	if ( s1 == s)
	{
		cout << "yes";
	}
	else {cout << "no";}
}
