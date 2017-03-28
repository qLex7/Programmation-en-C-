//DEBORD GUILLAUME
//Exercice 1
#include <iostream>

using namespace std;


int main()
{
	int T[10]={1,2,3,4,5,6,7,8,9,10}; //La taille du tableau occupé par la mémoire est de 40 octets.

	

	for(int i;i<10;i++)
	{
		cout<<T[i]<<endl;
	}

	*(&(T[3]))=5;//La 3ème case de mon tableau aura comme valeur 5.

	cout<<""<<endl;

	cout<<*T<<endl;

	cout<<*(T+3)<<endl;//"*"signifie un pointeur, je demande au pointeur d'aller chercher la donnée 3.

	cout<<T+3<<endl;//Je demande l'adresse de la 4 ème case du tableau.

	cout<<&(T[3])<<endl;//L'opérateur "&" signifie "adresse de", je demande à afficher l'adresse T[3].

	cout<<T[3]<<endl;//Je demande à afficher la donnée T[3] qui est dans le tableau.


}
