#include <iostream>
#include "collection.cpp"

#include "collection.h"


using namespace std;

int main()
{
  
  collection_string C(7);
  C.ajout("Ga");
  C.ajout("Ge");
  C.ajout("Gi");
  C.ajout("Gb");
  C.ajout("Ga");
  C.ajout("Gc");
  C.ajout("Ge");
  C.afficher();


  

 


  collection_string B(3);
  B.ajout("le");
  B.ajout("la");
  B.ajout("lo");
  B.afficher();

  

  if(C.present("Ga"))
  {
    cout<<"Oui Ga appartient.... \n"<<endl;
  }
  else
  {
    cout<<"Non Ga n'appartient pas...";
  }

  C.occurence("Ga");
  C.afficher();
  cout<<"\n"<<endl;

  
  
  collection_string *A=B.intersection(C);
  collection_string& D=B.intersect(C);
  (*A).afficher();
  D.afficher();
  cout<<"\n"<<endl;
  
  collection_string X(B);
  X.afficher();
  
  
  
 return 0;



}
