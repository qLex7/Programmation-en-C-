#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

void retourne(int a, int& b, int& c)
{
	b=a/100 ;
	c=a-b*100 ;
}


void jour(int j, int m, int a,int& b, int& c)
{
	int m1, aprime ;

	if (m>=3) {m1=m-2 ; aprime=a ;}
	if (m<3) {m1=m+10 ; aprime=a-1 ;}

	retourne(aprime, b, c) ;

	int f ;

	f=(j+c+(c/4)-(2*b)+(b/4)+(((26*m1)-2)/10))%7 ;

	switch (f)
	{
		case (0) :
			cout << "Dimanche" << endl ; break ;
		case (1) :
			cout << "Lundi" << endl ; break ;
		case (2) :
			cout << "Mardi" << endl ; break ;
		case (3) :
			cout << "Mercredi" << endl ; break ;
		case (4) :
			cout << "Jeudi" << endl ; break ;
		case (5) :
			cout << "Vendredi" << endl ; break ;
		case (6) :
			cout << "Samedi" << endl ; break ;
	}
}

int main()
{
	int j, m, a, b, c, cpt, choix, n ;
	cpt=1 ;

	do
	{
		cout << "Entrez un jour = " ; cin >> j ;
		do
		{
			cout << "Choissisez le mois = " ; cin >> m ;
			if (m > 12) 
		{ 
			cout << "Il y a 12 mois dans l'année " << endl ;
		}
		} 
		while (m>12) ;

		do
		{
			cout << "L'année = " ; cin >> a ;
			n=(log10(a)+1);
			if (n!=4) 
		{
			cout << "Erreur : Une année prend 4 chiffres" << endl ;
		}
		} 
		
		while (n!=4) ;

		jour(j,m,a, b, c) ;

		cout << "\n" << "Voulez-vous une autre date ? (0/1) : " ; cin >> choix ;
		cout << endl ;

		if (choix==1) {cpt=0 ;}
	} while (cpt==1) ;

	return 0 ;
}
