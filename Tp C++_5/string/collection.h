#ifndef collection_h
#define collection_h

#include <string>

class collection_string
{
  std::string *D ;
  int Nmax ;
  int Nbe ;

  public :
  collection_string(int Nmax) ;
  ~collection_string() ;
  collection_string(const collection_string& C) ;
  void afficher() ;
  bool ajout(std::string ajout) ;
  bool present(std::string pres) ;
  void occurence(std::string occ) ;
  collection_string *intersection(collection_string& G) ;
  collection_string &intersect(collection_string& G) ;
  
} ;
#endif
