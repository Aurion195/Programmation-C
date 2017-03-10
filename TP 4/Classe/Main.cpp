
#include "point.h"
#include "point.cpp"

using namespace std ;

main()
{
  Point P(3.0,8.5) ;
  P.afficher() ;

  Point A ;
  A.saisi() ;
  A.afficher() ;

  double som=0 ;

  som = A.distance(P) ;
  cout << "La distance entre deux point est de : " << som << "\n" << endl ;

  int n ;
  cout << "N : " ; cin >> n ;

  Point T[100] ;

  saisir_tableau_Point(T,100,n);
  afficher_tableau_Point(T,n) ;

  Point *tab=saisir_tableau_2_Point(n) ;
  afficher_tableau_Point(tab,n) ;

  delete tab ;

  afficher_tableau_Point(tab,n) ;

  return 0 ;
}
