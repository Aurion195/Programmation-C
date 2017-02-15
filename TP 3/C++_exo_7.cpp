#include <iostream>
#include <string>

using namespace std ;

void retourne(int *t, int n, int a, int b, int& cpt_a, int& cpt_b, int& cpt)
{
  cpt_a=0 ; cpt_b=0 ; cpt=0 ;

  for (int i=0 ; i<n ; i++)
  {
    if (t[i]<a) {cpt_a++ ;}
    else if (t[i]>b) {cpt_b++ ;}
    else {cpt++ ;}
  }
}

int main()
{
  int a, b, cpt_a, cpt_b, cpt ;

  int T[10]={0,1,2,3,4,5,6,7,8,9} ;

  cout << "Valeur pour a = " ; cin >> a ;
  cout << "Valeur pour b = " ; cin >> b ;

  retourne(T,10,a,b,cpt_a,cpt_b,cpt) ;

  cout << "Il y a " << cpt_a << " valeur qui sont en-dessous de " << a << endl ;
  cout << "Il y a " << cpt_b << " valeur qui sont au-dessus de " << b << endl ;
  cout << "Il y a " << cpt << " valeur qui sont comprisent entre " << a << " et " << b << endl ;

  return 0;
}
