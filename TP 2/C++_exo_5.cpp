// Mathieu Thomas
// 06/02/2017
// Groupe 4


#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

void binaire(int n, int& n1, int& n2, int& n3, int& n4, int& n5, int& n6, int& n7, int& n8)
{
  int i=0, x=0, cpt=1;

  do
  {
      x=n%2 ;
      n/=2 ;

      if (cpt==1)  {n8=x ;}
      else if (cpt==2){n7=x ;}
      else if(cpt==3){n6=x ;}
      else if(cpt==4){n5=x ;}
      else if(cpt==5){n4=x ;}
      else if(cpt==6){n3=x ;}
      else if(cpt==7) {n2=x ;}
      else if(cpt==8) {n1=x ;}

      cpt++ ;

     } while (n!=0) ;
}

int main()
{
  int n, y;

  do
  {
    cout << "Entrer n : " ; cin >> n ;
    y=(pow(2,8)-1);
    if (n>y) {cout << "Erreur valeur trop grande" << endl ;}
  } while (n>y) ;

  int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0 ;

  binaire(n, n1, n2, n3, n4, n5, n6, n7, n8) ;

  cout << n1 << n2 << n3 << n4 << n5 << n6 << n7 << n8 << endl ;

  return 0 ;
}
