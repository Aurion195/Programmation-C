#include <iostream>
#include <string>

using namespace std ;

int const N=10 ;


int Zero(int *T, int taille)          // Permet de connaître le nombre de chiffre au-dessus de 0 pour créer un nouveau tableau
{
  int cpt=0 ;

  for(int i=0 ; i<taille ; i++)
  {
    if(T[i]!=0) {cpt++ ;}
  }

  return cpt ;
}

void supprime(int *new_tab, int *T, int taille)   //Créer un nouveau tableau à partir
{
  int count=0 ;

  for(int i=0 ; i<taille ; i++)
  {
    if(T[i]!=0) {new_tab[i-count]=T[i] ;}
    else {count++ ;}
  }
}

int main()
{
  int T[N]={1,0,2,0,3,0,4,0,0,6}, nb=0 ;

  nb=Zero(T,10) ;

  cout <<"Il y a " << nb << " qui ne sont pas des 0" << endl ;

  int new_tab[nb] ;

  supprime(new_tab,T,10) ;

  for(int i=0 ; i<nb ; i++)
  {
    cout << "|    " << new_tab[i] << "    |" << endl ;
  }


  return 0 ;
}
