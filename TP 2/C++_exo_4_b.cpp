// Mathieu Thomas
// 06/02/2017
// Groupe 4

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std ;

void retourne(int an, int& ns, int& as)
{
	ns=an/100 ;
	as=an-ns*100 ;
}


void jour(int j, int m, int an,int& ns, int& as)
{
	int m1, aprime ;

	if (m>=3) {m1=m-2 ; aprime=an ;}
	if (m<3) {m1=m+10 ; aprime=an-1 ;}

	retourne(aprime, ns, as) ;

	int f ;

	f=(j+as+(as/4)-(2*ns)+(ns/4)+(((26*m1)-2)/10))%7 ;

	switch (f)
	{
		case (0) :
			cout << "Dimanche" << endl ; break ;
		case (1) :
			cout << "Lundi" << endl ; break ;
		case (2) :
			cout << "Mardi" << endl ; break ;
		case (3) :
			cout << "Mercredi" << endl ; break ;
		case (4) :
			cout << "Jeudi" << endl ; break ;
		case (5) :
			cout << "Vendredi" << endl ; break ;
		case (6) :
			cout << "Samedi" << endl ; break ;
	}
}

int main()
{
	int j, m, an, ns, as, cpt, choix, n ;

	cout << "Bienvenue dans l'âge des dates !!! " << "\n" << endl ;
	cpt=1 ;

	do
	{
		cout << "Entrer un jour = " ; cin >> j ;
		do
		{
			cout << "Choissisez le mois = " ; cin >> m ;
			if (m > 12) { cout << "Il y a 12 mois dans l'année " << endl ;}
		} while (m>12) ;

		do
		{
			cout << "L'annee = " ; cin >> an ;
			n=(log10(an)+1) ;
			if (n!=4) {cout << "Erreur : Une année prend 4 chiffres" << endl ;}
		} while (n!=4) ;

		jour(j,m,an, ns, as) ;

		cout << "\n" << "Voullez-vous une autre date ? (0/1) : " ; cin >> choix ;
		cout << endl ;

		if (choix==1) {cpt=0 ;}
	} while (cpt==1) ;

	cout << "----------------------- A la prochaine -----------------------" << endl ;

	return 0 ;
}
