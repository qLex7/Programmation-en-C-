//DEBORD GUILLAUME
//Exercice 5
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int rand_a_b(int a, int b)
{
return rand()%(b-a)+a;
}

void aff(int *tab, int taille)
{
	for(int i=0;i<taille;i++)
	{
		cout<<"--"<<tab[i]<<"--"<<endl;
	}
}

int main()
{
	srand(time(NULL));
	const int taille=10;
	int tab[taille];
	
	
	for(int i=0;i<taille;i++)
	{
		tab[i]=rand_a_b(1,20);
	}
	
	aff(tab,10);
	
return 0;
}
