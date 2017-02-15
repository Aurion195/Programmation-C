// Mathieu Thomas
// 06/02/2017
// Groupe 4

#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

void fonction(double a, double b, double c)
{
	int disc=0 ;
	double s=0 ;

	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
			{
				cout << "Infinité de solution !" << endl ;
			}
			else
			{
					cout << "Il n'y a pas de solution" << endl ;
			}
		}
		else
		{
			s=(-c/b) ;
			cout << "Résultat = " << s << endl ;
		}
	}
	else
	{
		disc=b*b-4*a*c ;
		if (disc<0) { cout << "Il y a 0 solution" << endl ;}
		else if (disc>0) {cout << "Il y a deux solution" << endl ;}
		else if (disc==0) {cout << "Il y a une solution" << endl ;}
	}
}

int main()
{
	double a=0, b=0, c=0 ;

	cout << "Entrer une valeur pour a : " ; cin >> a ;
	cout << "Entrer une valeur pour b : " ; cin >> b ;
	cout << "Entrer une valeur pour c : " ; cin >> c ;

	fonction(a,b,c) ;

	return 0 ;
}
