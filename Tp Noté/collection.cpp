#include "collection.h"
#include <string.h>
#include <iostream>

using namespace std;

col_chaine::col_chaine(int mnbc, int mnbi)//Constructeur
{
	Tmax=mnbc;
	Timax=mnbi;

	T_chaine=new char[mnbc];
	T_index=new char *[mnbi];

	nbc=0;
	nbi=0;
}



bool col_chaine::ajout(char *s)//ajout
{
	int nbcr=Tmax-nbc;
	int l=strlen(s)+1;
	if(l>nbcr || nbi==Timax)
	{
		return false;
	}
	T_index[nbi]=&T_chaine[nbc];
	strcpy(T_index[nbi],s);
	nbi++;
	nbc+=l;
	return true;
}

bool col_chaine::ajout_bis(char*s)//Question 4
{
	if(!(*this).present(s))
	{
		(*this).ajout(s);
	}
	return true;
	
}

void col_chaine::change_size(int nTmax_nbc, int nTimax_nbi)//Question 5
{
	col_chaine *c=new col_chaine(nTmax_nbc,nTimax_nbi);
	Tmax=nTmax_nbc;
	Timax=nTimax_nbi;
	
	if(nTmax_nbc<Tmax)
	{
		return;
	}
	
	for(int i=0;i<nbi;i++)
	{
		(*c).ajout(T_index[i]);
	}
	
	delete [] T_chaine;
	delete [] T_index;
	
	T_chaine=(*c).T_chaine;
	T_index=(*c).T_index;
		
}

col_chaine::col_chaine(const col_chaine& s)//Question 6
{
	T_chaine=new char[s.Tmax] ;
	T_index=new char*[s.Timax] ;
	nbi=0 ;
	nbc=0 ;
	Tmax=s.Tmax ;
	Timax=s.Timax ;


	for(int i=0 ; i<s.nbi ; i++)
	{
		ajout(s.T_index[i]) ;
	}
}

bool col_chaine::operator==(col_chaine & s)//Question 7
{
	if(nbi!=s.nbi) 
	{
		return false;
	}

	for(int i=0;i<s.nbi;i++)
	{
		if(!present(s.T_index[i]))
		{
			return false;
			break ;
		}
	}

	return true;
}

col_chaine& col_chaine::operator =(const col_chaine& s)//Question 8
{
	delete [] T_chaine ;
	delete [] T_index ;
	T_chaine=new char[s.Tmax] ;
	T_index=new char*[s.Timax] ;
	nbi=0 ;
	nbc=0 ;
	Tmax=s.Tmax ;
	Timax=s.Timax ;

	for(int i=0 ; i<s.nbi ; i++)
	{
		ajout(s.T_index[i]) ;
	}

	return (*this) ;
}


void col_chaine::afficher()//Question 3 aff
{	
	for(int i=0;i<nbi;i++) 
	{
		cout<<T_index[i];
		cout<<endl;
		
	}
}

int col_chaine::occurrence(char *s)//Question 3 occ
{
	int cpt=0;
	for(int i=0;i<nbi;i++)
	{
		if(strcmp(T_index[i],s)==0)
		{
			cpt++;
		}
	} 
	return cpt;
}

col_chaine::~col_chaine()//Question 1
{
	delete [] T_chaine;
	delete [] T_index;
	cout<<"Le desctructeur est passé"<<endl;
}

bool col_chaine::present(char *s)//Question 2
{
	for(int i=0;i<nbi;i++)
	{
		if(strcmp(s,T_index[i])==0) 
		{
			return true;
		}
	}
	return false;
}
