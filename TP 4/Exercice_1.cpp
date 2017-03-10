#include <iostream>
#include <cmath>

using namespace std ;


//Exercice 1 //
struct Point
{
  double x ;
  double y ;
} POINT ;

void affiche_Point(Point& P)
{
  cout << "Les coordonées du point sont : (" << P.x << " ; " << P.y << ")" << endl ;
}

void saisir_Point(Point& P)
{
  cout << "Coordonées x : " ; cin >> P.x ;
  cout << "Coordonées y : " ; cin >> P.y ;
}

double distance_Point(Point& P, Point& A)
{
  double somme=0 ;

  somme=sqrt((A.x-P.x)*(A.x-P.x)+(A.y-P.y)*(A.y-P.y)) ;

  return somme ;
}

void afficher_tableau_Point(Point *T, int n)
{


  for(int i=0 ; i<n ; i++)
  {
    affiche_Point(T[i]) ;
  }
}

void saisir_tableau_Point(Point *T, int taille, int& n)
{
  if (n>taille) {n=taille ;}

  for(int i=0 ; i<n ; i++)
  {
    saisir_Point(T[i]) ;
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


//Exercice 2 //
struct Cercle
{
  Point centre ;
  double rayon ;
};

void afficher_Cercle(Cercle& C)
{
  affiche_Point(C.centre) ;
  cout << "r = " << C.rayon << endl ;
}

void afficher_tableau_cercle(Cercle *A, int N)
{
  for(int i=0 ; i<N ; i++)
  {
    afficher_Cercle(A[i]) ;
  }
}

Cercle * saisir_T_cercles(int& N)
{
  cout << "Valeur pour N : " ; cin >> N ;
  Cercle *Cbis ;
  Cbis= new Cercle[N] ;

  for(int i=0 ; i<N ; i++)
  {
    int x=0 ;
    saisir_Point(Cbis[i].centre) ;
    cout << "Entrer rayon : " ; cin >> x ;
    Cbis[i].rayon=x ;
  }

  return Cbis ;
}

Point * dans_cercle_Point(Point *T , int n, Cercle& C, int& interieur, int& nb)
{
  int cpt=0 ;

  for(int i=0 ; i<n ;i++)
  {
    if (distance_Point(C.centre,T[i])<interieur) {cpt++ ;}
  }

  Point *T2 ;
  T2 = new Point[cpt] ;

  nb=0 ;

  for(int i=0 ; i<cpt ; i++)
  {
    if(distance_Point(C.centre,T[i])<interieur) {T2[nb]=T[i] ; nb++ ;}
  }

  return T2 ;
}

int main()
{
  int nb;

  Point P ;
  P.x=5 ;
  P.y=5 ;

  Cercle C ;
  C.centre=P ;
  C.rayon=3 ;

  int interieur=0 ;
  interieur=C.rayon ;

  int n ;
  cout << "N : " ; cin >> n ;

  Point T[50] ;
  saisir_tableau_Point(T,50,n) ;

  Point *Tend ;
  Tend=dans_cercle_Point(T,50,C,interieur,nb) ;
  afficher_tableau_Point(Tend,nb) ;

  return 0;

}
