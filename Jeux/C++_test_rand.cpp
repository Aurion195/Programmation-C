#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std ;

int nbaleatoire(int x=rand())
{
	srand(time(NULL)) ;					//*Permet de mettre le temps à 0, et de ne pas avoir le même nombre*//
		x=rand()%100+1 ;
	
	return x ;
}

int main()
{
	int y=0, cpt=5, nb=0, n=0 ;
	
	do
	{
		y=nbaleatoire() ;
	
		cout << "Bonjour est bienvenue au jeu ! trouve le bon chiffres et tu gagnes, attention tu as " << cpt << " tentative." << "\n" << endl ;

		for (int i=1 ; i<cpt+1 ; i++)
		{
			cout << "Ceci est ta " << i << " tentative : Entrer une valeur : " ; cin >> nb ;
		
			if (nb<y) {cout << "Le numéro gagnant est plus grand :( " << "\n" << endl ;}
			else if (nb!=y && i==cpt) {cout << "Tu as perdu .... :'( " << "\n" << endl ;}
			else if (nb>y) {cout << "Le numéro gagnant est plus petit :( " << "\n" << endl ;}
			else { cout << "Bien joué tu as gagné !!!! :)" << endl ; break ;}
		}
		
		cout << "Voulez-vous rejouez ? (0/1) : " ; cin >> n ;
		
	}	while (n==0) ;
	
	return 0 ;
 }
