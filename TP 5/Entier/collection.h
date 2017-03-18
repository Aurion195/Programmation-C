#ifndef DEF_COLLECTION_H_
#define DEF_COLLECTION_H_

class collection_entier
{
  int *D ;
  int Nmax ;
  int nbe ;

  public :
  collection_entier(int Nmax) ;
  ~collection_entier() ;
  collection_entier(const collection_entier& C) ;
  void affichage() ;
  bool ajout(int ajout) ;
  bool present(int present) ;
  void ocurence(int occ) ;
  void valeur(double& moy, int& min, int& max) ;
  collection_entier *intersection(collection_entier& P) ;
  collection_entier &inter(collection_entier& P) ;
  void trie() ;
} ;
#endif
