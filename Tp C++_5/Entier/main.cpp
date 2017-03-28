#include <iostream>
#include "entiers.h"
#include "entiers.cpp"

using namespace std;

main()
{
  int max, min;
  double moy;

  collection_entiers C(3);
  C.ajout(3);
  C.ajout(10);
  C.ajout(5);
  C.afficher();


  //permet de créer une collection pouvant stocker 5 entiers

  collection_entiers C1(0);
  {
    collection_entiers C2(0);
  }


  collection_entiers B(7);
  B.ajout(3);//permet de rajouter 3 à la collection_entiers
  B.ajout(10);//rajoute 10 à la collection
  B.ajout(3);
  B.ajout(3);
  B.ajout(7);
  B.ajout(8);
  B.ajout(2);

  B.afficher();

  if(B.present(3))
  {
    cout<<"Oui 3 appartient.... \n"<<endl;
  }
  else
  {
    cout<<"Non 3 n'appartient pas...";
  }

  B.occurence(3);
  B.afficher();
  cout<<"\n"<<endl;

  B.valeur(moy,min,max);

  cout<<"La moyenne est de " <<moy<<endl;
  cout<<"La plus petite valeur est de " <<min<<endl;
  cout<<"La plus grande valeur est de " <<max<<endl;
  cout<<"\n"<<endl;
  
  collection_entiers *E=B.intersection(C);
  collection_entiers& D=B.intersect(C);
  (*E).afficher();
  D.afficher();
  cout<<"\n"<<endl;
  
  collection_entiers Y(B);
  Y.afficher();
  


  B.trie();
  B.afficher();



}
