#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std ;

int main()
{
  const int N=10 ;
  int T[N], x=0, y=0;
  bool trouve ;
  srand(time(NULL)) ;

  for (int i=0 ; i<N ; i++)
  {
    x=rand()%20 + 1 ;

    T[i]=x ;
  }

  cout << "Entrer une valeur y comprise entre 0 et 20 : " ; cin >> y ;
  cout << "\n" << "Voici votre tableau ! " << endl ;

  for (int j=0 ; j<N ; j++)
  {
    cout << "|  " << T[j] << "  |   " << j  << endl ;
  }

  for (int u=0 ; u<N ; u++)
  {
    if (T[u]==y) {trouve=true ; break ;}
    else {trouve=false ;}
  }

  if (trouve) {cout << "\n" << "La valeur y appartient au tableau !" << endl ;}
  else {cout << "\n"<< "La valeur y n'appartient pas au tableau !" << endl ;}

  return 0 ;
}
