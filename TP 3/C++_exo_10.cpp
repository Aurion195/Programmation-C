#include <iostream>
#include <string>
using namespace std;

const int A=5, B=10, C=A+B ;

void fusion(int *T_a, int *T_b, int *T_c)
{
  int i=0, j=0, k=0 ;

  while(i<A && j<B)
  {
    if(T_a[i]<T_b[j]) {T_c[k]=T_a[i] ; k++ ; i++ ;}
    else {T_c[k]=T_b[j] ; k++ ; j++ ;}
  }

  while(k<C)
  {
    if(A<B) {T_c[k]=T_b[j] ; k++ ; j++ ;}
    else {T_c[k]=T_a[i] ; k++ ; i++ ;}
  }
}


int main()
{
	int T_a[A]={1,2,3,4,5}, T_b[B]={11,12,13,14,15,16,17,18,19,20}, T_c[C] ;

	cout <<"--------------------------" << "\n" << "Voici le tableau final" << endl ;

  fusion(T_a,T_b,T_c) ;

	for (int u=0 ; u<C ; u++)
	{
		cout << "|		" << T_c[u] << "		|" << endl ;
	}

	return 0 ;
}
