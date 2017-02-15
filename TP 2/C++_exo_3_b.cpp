// Mathieu Thomas
// 06/02/2017
// Groupe 4


#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

double deltaC(double a, double b, double c)
{
	return pow(b,2)-4*a*c ;
}

void retourne(double a, double b, double c, double delta, double& x1, double& x2) //& récupère la variable plutôt que la référence
{
	x1=0 ; x2=0 ;

	if (delta<0)
	{
		return ;
	}
	if (delta==0)
	{
		x1=(-b)/(2*a) ;
		return ;
	}

	x1=((-b)-sqrt(delta))/(2*a) ;
	x2=((-b)+sqrt(delta))/(2*a) ;
}

void affiche(double delta, double x1, double x2)
{
	if (delta<0) {cout << "Il n'y a pas de solution" << endl ;}
	if (delta>0) {cout << "Il y a deux solution : " << x1 << " et " << x2 << endl ;}
	if (delta==0) {cout << "Il y a une solution : " << "\n" << "x1 = " << x1 << endl ;}
}

int main()
{
	int a, b, c ;
	double delta, x1, x2 ;

	cout << "Valeur pour a : " ; cin >> a ;
	cout << "Valeur pour b : " ; cin >> b ;
	cout << "Valeur pour c : " ; cin >> c ;


	delta=deltaC(a,b,c) ;

	retourne(a,b,c,delta,x1,x2) ;

	affiche(delta,x1,x2) ;


	return 0 ;
}
