#include <iostream>
#include <string>

using namespace std ;

int saisir(int *tab, int taille, int N)
{
  int i=0, cpt=0 ;

  if (taille>N) {taille=N ;}

  for (i=0 ; i<taille ; i++)
  {
    cout << "Valeur " << i << " : " ; cin >> tab[i] ;
    cpt++ ;
  }

  return cpt ;
}

int main()
{
  int const N=10 ;
  int tab[N], nb=0 ;

  nb=saisir(tab, 15, N) ;

  cout <<"\n" << "Il y a " << nb << " nombres qui ont été saisis !" << endl ;

  return 0;
}
