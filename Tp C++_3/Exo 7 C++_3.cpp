//DEBORD GUILLAUME
//Exercice 7
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void rec(int *tab, int taille, int a,int b, int& cpta,int& cpt, int& cptb )
{
	cpta=0 ;
	cptb=0 ;
	cpt=0 ;
	
	for(int i=0;i<taille;i++)
	{
		if(tab[i]<a)
		{
			cpta=cpta+1;
		}
		else if(tab[i]>b) 
		{
			cptb=cptb+1;
		}
		else
		{
			cpt=cpt+1;
		}
	}
}

int main()
{
	
	int cpta,cptb,cpt ;
	
	int tab[10]={1,2,7,5,8,6,3,4,10,22}; //Declare un tableau de 10 int
	
	
	rec(tab,10,5,20,cpta,cpt,cptb);
	
	
	
	cout<<cpta<<" Inférieur à a "<<endl;
	
	cout<<cpt<<endl ;
	
	cout<<cptb<<" Supérieur à b " << endl ;
	
	return 0;
}
