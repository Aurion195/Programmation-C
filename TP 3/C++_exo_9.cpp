#include <iostream>
#include <string>

using namespace std ;

void intersection(int *A, int *B, int *C, int T_A, int T_B, int& cpt)
{
  cpt=0 ;
  for(int i=0 ; i<T_A ; i++)
  {
    int count=0 ;

    for(int j=0 ; j<T_B ; j++)
    {
      if(A[i]==B[j])
      {
        C[cpt]=A[i] ;
        cpt++ ;
      }
    }
  }
}

void afficher(int *C, int& cpt)
{
  cout << "Voici les point d'intersection des deux tableaux" << endl ;

  for(int i=0 ; i<cpt ; i++)
  {
    cout << "|    " << C[i] << "    |" << endl ;
  }
}

int main()
{
  int const T_A=10, T_B=12, T_C=2*T_A ;
  int A[T_A]={1,2,3,4,5,6,7,8,9,12}, B[T_B]={2,4,6,8,10,12,14,16,18,20}, C[T_C], cpt ;

  intersection(A,B,C,T_A,T_B,cpt) ;
  afficher(C,cpt) ;

  return 0 ;
}
