#ifndef DEF_COLLECTION_H_
#define DEF_COLLECTION_H_

#include <string>

class collection_string
{
  std::string *D ;
  int Nmax ;
  int nbe ;

  public :
  collection_string(int Nmax) ;
  ~collection_string() ;
  collection_string(const collection_string& C) ;
  void affichage() ;
  bool ajout(std::string ajout) ;
  bool present(std::string pres) ;
  void ocurence(std::string occ) ;
  collection_string *intersection(collection_string& P) ;
  collection_string &inter(collection_string& P) ;
  void trie() ;
} ;
#endif
