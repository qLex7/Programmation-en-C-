//DEBORD GUILLAUME
//Exercice 11

#include <iostream>
#include <string>

using namespace std ;

int const n=10 ;


int Zero(int *t, int taille)          // Savoir le nombre de chiffre au-dessus de 0 pour créer un nouveau tableau
{
  int cpt=0 ;

  for(int i=0 ; i<taille ; i++)
  {
    if(t[i]!=0) 
    {
		cpt++ ;
	}
  }

  return cpt ;
}

void supprime(int *new_tab, int *t, int taille)   //Définir un  nouveau tableau
{
  int count=0 ;

  for(int i=0 ; i<taille ; i++)
  {
    if(t[i]!=0) 
    {
		new_tab[i-count]=t[i] ;
	}
    else 
    {
		count++ ;
	}
  }
}

int main()
{
  int t[n]={1,0,2,0,3,0,4,5,0,6}, nb=0 ;

  nb=Zero(t,10) ;

  cout <<"Il y a " << nb << " qui ne sont pas des 0" << endl ;

  int new_tab[nb] ;

  supprime(new_tab,t,10) ;

  for(int i=0 ; i<nb ; i++)
  {
    cout << "--" << new_tab[i] << "--" << endl ;
  }


  return 0 ;
}
