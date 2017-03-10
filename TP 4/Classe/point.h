#ifndef DEF_POINT_H_
#define DEF_POINT_H_

using namespace std ;

class Point
{
  private :
  double x ;
  double y ;

  public :
  Point (double,double) ;
  Point() ;
  void afficher() ;
  void saisi() ;
  double distance(Point& P) ;

} ;

class Cercle
{
  private :
  double rayon ;
  Point Centre() ;

  public :
  void affichage() ;
  void saisi_cercle() ;
} ;

  void afficher_tableau_Point(Point *T, int& n) ;
  void saisir_tableau_Point(Point *T, int taille, int& n) ;
  Point * saisir_tableau_2_Point(int& N) ;

#endif
