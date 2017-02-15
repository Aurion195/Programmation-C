#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std ;

int nbaleatoire(int x=rand() )
{
	srand(time(NULL)) ;
	x=rand()%100+1 ;
	
	return x ;
}

int main()
{
	int nb_utilisateur=0, nb_mystere=0 ,cpt=10;
	
	nb_mystere=nbaleatoire() ;
	
	cout << "Bienvenue dans le jeu " << "\n" << endl ;
	
	for (int i=1 ; i<cpt+1 ; i++)
	{
		cout << "\n" << "Ceci est votre " << i << " tentative" << endl ;
		cout << "Entrer un nombre : " ; cin >> nb_utilisateur ;
		
		if (nb_utilisateur==nb_mystere) { cout << "Bien joué tu as gagné :)" << endl ; break ;}
		else if (nb_utilisateur>nb_mystere && i!=cpt) { cout << "Le nombre est plus petit" << endl ;}
		else if (nb_utilisateur<nb_mystere && i!=cpt) { cout << "Le nombre est plus grand" << endl ;}
		else if (i==cpt && nb_utilisateur!=nb_mystere) { cout << "Tu as perdu .. " << endl ;}
	}
	
	return 0 ;
}
