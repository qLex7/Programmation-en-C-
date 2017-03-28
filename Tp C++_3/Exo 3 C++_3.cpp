//DEBORD GUILLAUME
//Exercice 3
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

bool cs(int *tab,int taille, int valeur)
{
	for(int i=0;i<taille;i++)
	{
		if(tab[i]==valeur)
		return true;
	}
	return false;
}	

int main()
{
	srand(time(NULL));
	int a(1);
	int b(20);
			
	int tab[10]; //Declare un tableau de 10 int
	
	for(int i=0;i<10;i++)
	{
		tab[i]=rand()%b+a;
		cout<<tab[i]<<endl;
	}
	
		if (cs(tab,10,2))
		cout<<2<<" est dans le tableau"<<endl;
		
		else
		
		cout<<2<<" n'est pas dans le tableau"<<endl;
		
		
	
	
	
return 0;
}
