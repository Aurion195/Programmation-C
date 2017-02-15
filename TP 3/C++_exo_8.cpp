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

int trouve_indice(int *T, int taille, int x, bool& trouve)
{
  int trouve_indice=100 ;

  if(taille==0) {return 0 ;}
  for(int i=0 ; i<taille ; i++)
  {
    if (T[i]==x) {trouve_indice=i ; trouve=true ; break ;}
  }

  return trouve_indice ;
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
  bool trouve ;

  cout << "\n" << "Entrer une valeur pour x : " ; cin >> x ;

  indice=trouve_indice(Tab,10,x,trouve) ;

  if (trouve)
  {
    cout << "La valeur se trouve dans le tableau à l'indice " << indice << endl ;

    cout << "Entrer une valeur pour y : " ; cin >> y ;
  }
  else {cout << "La valeur ne se trouve pas dans le tableau" << endl ;}

  decale(Tab,10,indice,y) ;

  cout << endl << "Voici votre tableau !" << endl ;

  aficher(Tab,10) ;

  return 0 ;
}
