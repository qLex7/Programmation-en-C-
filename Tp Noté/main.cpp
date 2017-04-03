#include "collection.h"
#include "collection.cpp"
#include <iostream>

using namespace std;

int main()
{

	col_chaine s(100,50);
	
	char s1[10]="Salut";
	char s2[10]="Bonjour";
	char s3[10]="Bonjour";
	char s4[10]="TOTO";
	
	s.ajout(s1);
	s.ajout(s2);
	s.ajout(s3);	
	
	s.afficher();
	cout<<" "<<endl;
	
	s.ajout_bis(s4);//Question 4
		
	s.afficher();//Question 3 aff
	cout<<" "<<endl;
	
	if(s.present(s3)) cout<<"Il appartient"<<endl;//Question 2
	else cout<<"Il n'appartient pas"<<endl; // Cela vérifie si s3 appartient à s
	
	char b[20]="Bonjour";
	cout<<s.occurrence(b)<<" Occurence"<<endl;//Question 3 occ
	cout<<" "<<endl;
	
	s.change_size(700,100);//Question 5
	s.afficher();
	cout<<" "<<endl;
	
	
	col_chaine X(s) ;//Question 6
	X.afficher();
	cout<<" "<<endl;
	
	
	if(X==s) //Question 7
	{
		cout << "Les collections sont les mêmes !" << endl;
	}
	else 
	{
		cout << "Les collections sont différentes !" << endl;
	}
	cout<<" "<<endl;
	
	col_chaine G=s ;//Question 8
	G.afficher() ;
	
}
