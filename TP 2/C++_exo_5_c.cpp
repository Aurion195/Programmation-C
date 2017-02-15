#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

int nombre(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8)
{
  int cpt=0 ;

  if (n1==1) {cpt+=pow(2,7) ;}
  if (n2==1) {cpt+=pow(2,6) ;}
  if (n3==1) {cpt+=pow(2,5) ;}
  if (n4==1) {cpt+=pow(2,4) ;}
  if (n5==1) {cpt+=pow(2,3) ;}
  if (n6==1) {cpt+=pow(2,2) ;}
  if (n7==1) {cpt+=pow(2,1) ;}
  if (n8==1) {cpt+=pow(2,0) ;}

  return cpt ;
}


int main()
{
  int n, y, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0 ;

  cout << "le langage binaire ne prend qu'un des 1 et des 0" << endl ;
  cout << "|  " << "Valeur : " << endl ;
  cout << "|  " << "n1 = " ; cin >> n1 ;
  cout << "|  " << "n2 = " ; cin >> n2 ;
  cout << "|  " << "n3 = " ; cin >> n3 ;
  cout << "|  " << "n4 = " ; cin >> n4 ;
  cout << "|  " << "n5 = " ; cin >> n5 ;
  cout << "|  " << "n6 = " ; cin >> n6 ;
  cout << "|  " << "n7 = " ; cin >> n7 ;
  cout << "|  " << "n8 = " ; cin >> n8 ;

  y=nombre(n1, n2, n3, n4, n5, n6, n7, n8) ;

  cout << "La valeur est de " << y << endl ;

  return 0 ;
}
