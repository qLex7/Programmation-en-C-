#include "Collection.h"
#include <iostream>
#include <string.h>

using namespace std;

col_chaine::col_chaine(int nmi, int nmd)
{
	Dmax=nmd, Imax=nmi, T_chaine=new char[Dmax], T_index=new char*[Imax],nbi=0,nbc=0;
	
	cout<<"Le constructeur a appelé "<<Imax<< " lettre dans "<<Dmax<< " chaines "<<endl;
}



bool col_chaine::ajout(const char*s)
{
	
	int nbr=Dmax-nbc;
	int l=strlen(s)+1;
	
	if((l>nbr) || nbi==Imax)
	{		
	return false;
	}
	
	if(nbi==0)
	{
		T_index[nbi]=T_chaine;
	}
	
	else
	{
		T_index[nbi]=T_index[nbi-1]+strlen(T_index[nbi-1])+1;
	}
		strcpy(T_index[nbi],s);
		nbi++;
		nbc=nbc+l;
		return true;

}

void col_chaine::etendre(int facteur)
{
	char* nT_chaine=new char[facteur *Imax];
	char** nT_index=new char*[facteur *Dmax];
	
	for(int i=0;i<Imax;i++)
	{
		nT_chaine[i] = T_chaine[i];
	}
	
	for(int i=0;i<Dmax;i++)
	{
		nT_index[i]=T_index[i];
	}
	
	delete [] T_chaine;
	delete [] T_index;
	
	nbi*=facteur;
	nbc*=facteur;
	
	T_chaine=nT_chaine;
	T_index=nT_index;
}
	





void col_chaine::afficher()
{
	for(int i=0;i<nbi;i++)
	{
		cout<<T_index[i];
		
		if(T_index[i] == '\0')
		{
			cout << endl;
		}
		
	}
}





col_chaine::~col_chaine()
{
	delete [] T_chaine;
	delete [] T_index;
	
	cout<<"Le destructeur est passé... "<<endl;	
	
	
}
