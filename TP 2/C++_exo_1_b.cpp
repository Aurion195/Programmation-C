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
	int min=0, max=0 ;
	bool nb_premier ;

	cout << "Minimun : " ; cin >> min ;
	cout << "Maximun : " ; cin >> max ;

	for (int i=min ; i<max ; i++)
	{
		nb_premier=premier(i) ;
		if (nb_premier) {cout << i << " est premier !" << endl ;}
		else {cout << i << " n'est pas premier !" << endl ;}
	}

	return 0 ;
}
