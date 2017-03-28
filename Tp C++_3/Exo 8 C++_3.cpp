//DEBORD GUILLAUME
//Exercice 8
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

const int n=10;

void aff(int *tab, int taille)
{
	for(int i=0;i<taille;i++)
	{
		cout<<"--"<<tab[i]<<"--"<<endl;
	}
}

int trouve_indice(int *t, int taille, int x)
{
  int trouve=-1 ;

  for(int i=0 ; i<taille ; i++)
  {
    if (t[i]==x) 
    {
		trouve=i ;
	}
  }

  return trouve ;
}

void decale(int *t, int taille, int indice, int x)
{
  for(int i=n-1 ; i>indice ; i--)
  {
    t[i]=t[i-1] ;
  }
  t[indice]=x ;
}

int main()
{
  int tab[n]={1,2,3,4,5,6,7,8,9,10}, v=0, indice=0, x=0 ;

  cout<< "Entrer une valeur pour v : " ; cin >> v ;

  indice=trouve_indice(tab,10,v) ;

  if (indice>0) 
	{
	  cout << "La valeur se trouve à l'indice : " << v << endl ;
	}
  else 
	{
		cout << "" << endl ;
	}

  cout << "Entrer une valeur pour y : " ; cin >> x ;

  decale(tab,10,indice,x) ;

  cout << endl << "Voici votre tableau !" << endl ;

  aff(tab,10) ;

  return 0 ;

}
