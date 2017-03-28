#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int n;
	cout<<"Donnez un entier : ";
	cin>>n;
	
	
	int v(0);
	v=log10(n)+1;
	cout<<"Le nombre de chiffres qui le composent est "<<v;
	


	return 0;
}
