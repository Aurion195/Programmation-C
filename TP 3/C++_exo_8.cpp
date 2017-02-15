#include <iostream>
#include <string>

using namespace std ;

const int N=10 ;

void aficher(int *T, int taille)
{
  for(int i=0 ; i<taille ; i++)
  {
    cout << "|  " << T[i] << "  |" << endl ;
  }
}

int trouve_indice(int *T, int taille, int x)
{
  int trouve=-1 ;

  for(int i=0 ; i<taille ; i++)
  {
    if (T[i]==x) {trouve=i ;}
  }

  return trouve ;
}

void decale(int *T, int taille, int indice, int y)
{
  for(int i=N-1 ; i>indice ; i--)
  {
    T[i]=T[i-1] ;
  }
  T[indice]=y ;
}

int main()
{
  int Tab[N]={1,2,3,4,5,6,7,8,9,10}, x=0, indice=0, y=0 ;

  cout << "\n" << "Entrer une valeur pour x : " ; cin >> x ;

  indice=trouve_indice(Tab,10,x) ;

  if (indice>0) {cout << "La valeur se trouve à l'indice : " << x << endl ;}
  else {cout << "" << endl ;}

  cout << "Entrer une valeur pour y : " ; cin >> y ;

  decale(Tab,10,indice,y) ;

  cout << endl << "Voici votre tableau !" << endl ;

  aficher(Tab,10) ;

  return 0 ;

}
