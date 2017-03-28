#include <iostream>
#include <string>
#include "collection.h"

using namespace std ;

collection_string::collection_string(int Nb)
{
  cout << "Une collection de " << Nb << " string vient d'être créée." << endl ;
  Nmax=Nb;
  D=new string[Nb];
  for(int i=0;i<Nb;i++) 
  {
	  D[i]=" ";
	}
	Nbe = 0;
}

collection_string::collection_string(const collection_string& C)
{
  cout << "Une collection de " << C.Nmax << " string vients d'être créée." << endl ;
  Nmax=C.Nmax ;
  Nbe=C.Nbe ;
  D=new string[C.Nmax] ;

  for(int i=0 ; i<C.Nmax ; i++)
  {
    D[i]=C.D[i] ;
  }
}

collection_string::~collection_string()
{
  cout << "Le destructeur est passé \n " << endl ;
  delete [] D ;
}

void collection_string::afficher()
{
  cout<<"Voici le tableau de collection : \n"<<endl;
    cout<<"[";
    for(int i=0;i<Nbe;i++)
    {
      cout<<D[i]<<" ";

    } cout<<"]"<<endl;
}

bool collection_string::ajout(string ajout)
{	
 if(Nbe<Nmax)
 {
   D[Nbe]=ajout;
   Nbe++;
   return true;
 }
 else
 {
   return false;
 }

}

bool collection_string::present(string pres)
{
  for(int i=0 ; i<Nbe ; i++)
  {
    if(D[i]==pres)
    {
		return true;
	}
  }

  return false ;
}

void collection_string::occurence(string occ)
{
  int j=0 ;
  for(int i=0 ; i<Nbe ; i++)
  {
    if(D[i]!=occ)
    {
		 D[j]=D[i];
		 j++;
	}
    if(D[i]==occ)
    {
		D[i]=D[j];
	}
  }
}

collection_string *collection_string::intersection(collection_string& G)
{
	collection_string *s=new collection_string(Nmax + G.Nmax);
	for(int i=0;i<Nbe;i++)
	{
		(*s).ajout(D[i]);
	}
	
	for(int j=0;j<Nbe;j++)
	{
		(*s).ajout(G.D[j]);
	}
	
	return (s);
}

collection_string &collection_string::intersect(collection_string& G)
{
	collection_string *s=new collection_string(Nmax + G.Nmax);
	
	for(int i=0;i<Nbe;i++)
	{
		(*s).ajout(D[i]);
	}
	
	for(int j=0;j<Nbe;j++)
	{
		(*s).ajout(G.D[j]);
	}
	
	return (*s);
}
