#include "collection.h"
#include "collection.cpp"
#include <iostream>

using namespace std ;

main()
 {
  collection_string C(5) ;
  collection_string B(3) ;

  C.ajout("La") ;
  C.ajout("Le") ;
  C.ajout("Le") ;
  C.ajout("La") ;
  C.ajout("Le") ;
  C.ajout("La") ;

  B.ajout("La") ;
  B.ajout("Ils") ;
  B.ajout("Le") ;

  if(C.present("Le")==true) {cout << "\n" << "Il est dedans le tableau" << "\n" << endl ;}
  else {cout << "\n" << "Il n'y est pas" << "\n" << endl ;}

  /*C.ocurence("La") ;*/

  collection_string *A=B.intersection(C) ;
  collection_string& D=B.inter(C) ;
  (*A).affichage() ;
  D.affichage() ;
  cout << "\n" << endl ;

  collection_string X(B) ;
  X.affichage() ;


  return 0 ;
}
