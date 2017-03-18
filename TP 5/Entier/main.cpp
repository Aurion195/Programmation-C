#include "collection.h"
#include "collection.cpp"
#include <iostream>

using namespace std ;

main()
 {
  int max, min ;
  double moy ;
  collection_entier C(5) ;
  collection_entier B(3) ;

  C.ajout(3) ;
  C.ajout(2) ;
  C.ajout(1) ;
  C.ajout(3) ;
  C.ajout(3) ;

  B.ajout(1) ;
  B.ajout(3) ;
  B.ajout(2) ;



  if(C.present(3))
  {
    cout << "L'entier appartien a la collection de point" << endl ;
  }
  else
  {
    cout << "L'entier n'appartient pas a la collection de point" << endl ;
  }

  C.ocurence(3) ;
  C.affichage() ;

  C.valeur(moy,min,max) ;

  cout << "La moyenne est de " << moy << endl ;
  cout << "La plus petite valeur est de " << min << endl ;
  cout << "La plus grande valeur est de " << max << endl ;
  cout << "\n" << endl ;

  collection_entier *A=B.intersection(C) ;
  collection_entier& D=B.inter(C) ;
  (*A).affichage() ;
  D.affichage() ;
  cout << "\n" << endl ;

  collection_entier X(B) ;
  X.affichage() ;

  C.trie() ;
  C.affichage() ;

  return 0 ;
}
