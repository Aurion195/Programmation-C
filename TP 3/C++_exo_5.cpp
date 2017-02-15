#include <iostream>
#include <string>

using namespace std ;

void afficher(int *T, int taille)
{
  cout << "Voici votre tableau" << "\n" << endl ;

  for (int i=0 ; i<taille ; i++)
  {
    cout << "| " << T[i] << " |" << endl ;
  }
}

int main()
{

  int T[10]={10,5,6,8,7,9,7,2,4,6} ;

  afficher(T,5) ;

  return 0 ;
}
