// Mathieu Thomas
// 06/02/2017
// Groupe 4

#include <iostream>
#include <string>

using namespace std ;

bool premier(int x)
{
	bool r ;
	int i=0 ;

	for (i=2 ; i<x ; i++)
	{
		if (x%i==0) {r=false ; break ;}
	}

	if(i==x) {r=true ;}

	return r ;
}


int main()
{
	int x=0 ;
	bool p ;

	cout << "Entrer une valeur pour x : " ; cin >> x ;

	p=premier(x) ;

	if (p) { cout << x << " est premier" << endl ;}
	else { cout << x << " n'est pas premier" << endl ;}

	return 0 ;
}
