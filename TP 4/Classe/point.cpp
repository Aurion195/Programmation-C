#include "point.h"
#include <iostream>
#include <cmath>

using namespace std ;

Point::Point(double absi, double ord)
{
  x=absi ;
  y=ord ;
}

Point::Point()
{
  x=0 ;
  y=0 ;
}

void Point::afficher()
{
  cout << "Les coordonées du point sont : (" << x << " ; " << y << ")" << endl ;
}

void Point::saisi()
{
  {
    cout << "Coordonées x : " ; cin >> x ;
    cout << "Coordonées y : " ; cin >> y ;
  }
}

double Point::distance(Point& A)
{
  double somme=0 ;

  somme=sqrt((A.x-x)*(A.x-x)+(A.y-y)*(A.y-y)) ;

  return somme ;
}

void saisir_tableau_Point(Point *T, int taille, int& n)
{
  if (n>taille) {n=taille ;}

  for(int i=0 ; i<n ; i++)
  {
    T[i].saisi() ;
  }
}

Point * saisir_tableau_2_Point(int& N)
{
  cout << "Valeur n : " ; cin >> N ;
  Point *Tbis ;
  Tbis= new Point[N] ;
  int taille=N ;

  saisir_tableau_Point(Tbis,taille,N) ;

  return Tbis ;
}


void afficher_tableau_Point(Point *T, int& n)
{
  for(int i=0 ; i<n ; i++)
  {
    T[i].afficher() ;
  }
}
