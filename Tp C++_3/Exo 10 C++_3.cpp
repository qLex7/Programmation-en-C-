//DEBORD GUILLAUME
//Exercice 10

#include <iostream>
#include <string>
using namespace std;

const int a=5, b=10, c=a+b ;

void fusion(int *t_a, int *t_b, int *t_c)
{
  int i=0, j=0, k=0 ;

  while(i<a && j<b)
  {
    if(t_a[i]<t_b[j]) 
    {
		t_c[k]=t_a[i] ; 
		k++ ;
		i++ ;
	}
    else 
    {
		t_c[k]=t_b[j] ;
		k++ ;
		j++ ;
	}
  }

  while(k<c)
  {
    if(a<b) 
    {
		t_c[k]=t_b[j] ;
		k++ ;
		j++ ;
	}
    else 
    {
		t_c[k]=t_a[i] ;
		k++ ;
		i++ ;
	}
  }
}


int main()
{
	int t_a[a]={1,2,3,4,5}, t_b[b]={11,12,13,14,15,16,17,18,19,20}, t_c[c] ;

	cout<< "Voici le tableau final:" << endl ;

  fusion(t_a,t_b,t_c) ;

	for (int u=0 ; u<c ; u++)
	{
		cout << "--" << t_c[u] << "--" << endl ;
	}

	return 0 ;
}
