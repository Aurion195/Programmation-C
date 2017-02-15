// Mathieu Thomas
// 06/02/2017
// Groupe 4

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std ;

void retourne(int an, int& ns, int& as)
{
	ns=an/100 ;
	as=an-ns*100 ;
}

int main()
{
	int an=0, ns=0, as=0 ;

	cout << "Valeur : " ; cin >> an ;

	retourne(an,ns,as) ;

	cout << ns << endl << as << endl ;

	return 0 ;
}
