#include "Collection.h"
#include "Collection.cpp"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	col_chaine s(20,100);
	 char s1[10]="Hello \n";
	 char s2[10]="Goodbye\n";
	 char s3[10]="Aurevoir\n";
	 char s4[10]="Salut\n";
	
	s.ajout(s1);
	s.ajout(s2);
	s.ajout(s3);
	s.ajout(s4);
	
	s.afficher();
	
	
}

