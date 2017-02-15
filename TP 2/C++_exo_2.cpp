// Mathieu Thomas
// 06/02/2017
// Groupe 4

#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

float entier(int n)
{
	float y=0 ;

	y=log10(n)+1 ;

	return y ;
}

int main()
{
	int x=0, cpt=0;

	cout << "Entrer un  nombre pour x : " ; cin >> x ;

	cpt=entier(x) ;

	cout << "\n" << "Il y a " << cpt << " chiffres qui composent le nombre " << x << endl ;

	return 0 ;
}
