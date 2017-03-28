//DEBORD GUILLAUME
//Exercice 9

#include <iostream>
#include <string>

using namespace std ;

void intersection(int *a, int *b, int *c, int t_a, int t_b, int& cpt)
{
  cpt=0 ;
  for(int i=0 ; i<t_a ; i++)
  {
    

    for(int e=0 ; e<t_b ; e++)
    {
      if(a[i]==b[e])
      {
        c[cpt]=a[i] ;
        cpt++ ;
      }
    }
  }
}

void aff(int *c, int& cpt)
{
  cout << "Voici les point d'intersection des deux tableaux" << endl ;

  for(int i=0 ; i<cpt ; i++)
  {
    cout << "--" << c[i] << "--" << endl ;
  }
}

int main()
{
  int const t_a=10, t_b=12, t_c=2*t_a ;
  int a[t_a]={1,2,3,4,5,6,7,8,9,10}, b[t_b]={1,3,4,8,10,12,15,17,19,22}, c[t_c], cpt ;

  intersection(a,b,c,t_a,t_b,cpt) ;
  aff(c,cpt) ;

  return 0 ;
}
