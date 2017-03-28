#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void date(int a, int& b, int& c)
{
	b=a/100;
	c=a-b*100;
}
int main()
{
	int a=0, b=0, c=0 ;

	cout << "Valeur : " ; cin >> a ;

	date(a,b,c);

	cout << b << endl << c << endl ;

	return 0 ;

}
