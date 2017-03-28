#ifndef _COLLECTION_H_
#define _COLLECTION_H_
#include <iostream>
#include <string>

class collection_entiers
{
  private:
    int*D;
    int Nmax;// Nmax est la taille du tableau
    int Nbe;//Nbe est le nombre d'éléments dans le tableau, au début nbe=0

  public:
    collection_entiers(int Nmax);
    ~collection_entiers();
    collection_entiers(const collection_entiers& C);
    void afficher();
    bool ajout(int a);
    bool present(int b);
    void occurence(int occ);
    void valeur(double& moy, int& min, int& max);
    collection_entiers *intersection(collection_entiers& G);
    collection_entiers &intersect(collection_entiers& G); 
    
    
    void trie();
};

#endif
