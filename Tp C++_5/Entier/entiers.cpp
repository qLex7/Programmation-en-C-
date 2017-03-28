#include "entiers.h"
#include <iostream>

using namespace std;

collection_entiers::collection_entiers(int Nbe)
{
  cout << "Une collection de " << Nbe << " entiers vient d'être créée." << endl ;
  Nmax=Nbe;
  D=new int[Nbe];
  for(int i=0;i<Nbe;i++) D[i]=0;
}

collection_entiers::collection_entiers(const collection_entiers& C)
{
	cout<<"Collection de "<<C.Nmax<<" point vient d'être créée."<<endl;
	Nmax=C.Nmax;
	Nbe=C.Nbe;
	D=new int[C.Nmax];
	
	for(int i=0; i<C.Nmax; i++)
	{
		D[i]=C.D[i];
	}
}

collection_entiers::~collection_entiers()
{
  cout<<"Le destructeur est passé \n"<<endl;
  delete [] D;
}

void collection_entiers::afficher()
{
  cout<<"Voici le tableau de collection : \n"<<endl;
    cout<<"[";
    for(int i=0;i<Nmax;i++)
    {
      cout<<D[i]<<" ";

    } cout<<"]"<<endl;
}

bool collection_entiers::ajout(int a)
{
 if(Nbe<Nmax)
 {
   D[Nbe]=a;
   Nbe++;
   return true;
 }
 else
 {
   return false;
 }

}

bool collection_entiers::present(int b)
{
  for(int i=0;i<Nbe;i++)
  {
    if(D[i]==b)
    {
      return true;
    }
  }
  return false;
}

void collection_entiers::occurence(int occ)
{
  int j=0;
  for(int i=0;i<Nbe;i++)
  {
    if(D[i]!=occ)
    {
      D[j]=D[i];
      j++;
    }
  }
}


void collection_entiers::valeur(double& moy, int& min, int& max)
{
  min=D[0];
  max=D[0];
  moy=0;
	int cpt=0;
  
	for (int i=0;i<Nbe;i++)
	{
		moy+=D[i];
		if(D[i]<min)
		{
			min=D[i];
		}
		else if (D[i]>max)
		{
			max=D[i];
		}
    cpt++;
	}
	moy/=cpt;
}

collection_entiers *collection_entiers::intersection(collection_entiers& G)
{
	collection_entiers *s=new collection_entiers(Nmax);
	for(int i=0;i<Nbe;i++)
	{
		for(int j=0;j<G.Nbe;j++)
		{
			if(D[i]==G.D[j])
			{
				(*s).ajout(D[i]);
				break;
			}
		}
	}
	return (s);
}

collection_entiers &collection_entiers::intersect(collection_entiers& G)
{
	collection_entiers *s=new collection_entiers(Nmax);
	
	for(int i=0;i<Nbe;i++)
	{
		for(int j=0; j<G.Nbe;j++)
		{
			if(D[i]==G.D[j])
			{
				(*s).ajout(D[i]);
				break;
			}
		}
	}
	return (*s);
}
	

void collection_entiers::trie()
{
	int imin,min,tmp;
	
	for(int i=0; i<Nbe-1;i++)
	{
		imin=i;
		min=D[i];
		for (int j=i+1; j<Nbe;j++)
		{
			if (D[j]<min)
			{
				min=D[j];
				imin=j;
			}
		}
	tmp=D[imin];
	D[imin]=D[i];
	D[i]=tmp;
	}
}
