//DEBORD GUILLAUME
//Exercice 4
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int saisir(int *tab, int taille, int n)
{
	int j=0, cpt=0;
	
	if(taille>n)
	{
		taille=n;
	}
	
	for(j=0;j<taille;j++)
	{
		cout<<"La Valeur "<<j<<" : ";
		cin>>tab[j];
		cpt++;
	}
	return cpt;
}

int main()
{
	const int n=10;
	int tab[n], nb=0;
	
	nb=saisir(tab,20,n);
	
	cout<<"Il y a "<<nb<<" nombres qui ont été saisis !"<<endl;
	
		
return 0;
}
