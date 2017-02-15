#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std ;

int main()
{
  const int N=10 ;
  int tab[N], x=0 ;
  srand(time(NULL)) ;

  for (int i=0 ; i<N ; i++)
  {
    x=rand()%20 + 1 ;

    tab[i]=x ;
  }

  cout << "Voici votre tableau ! " << endl ;

  for (int j=0 ; j<N ; j++)
  {
    cout << "|  " << tab[j] << "  |" << endl ;
  }

  return 0 ;
}
