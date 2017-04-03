#include "col_chaine.h"
#include "col_chaine.cpp"
#include <iostream>

using namespace std;

int main()
{
	int nb_occ ;
	col_chaine C(400,50);

	char s[10]="toto";
	char s1[10]="tata" ;
	C.ajout(s);
	C.ajout(s);
	C.ajout(s1) ;
	//C.afficher();

	//Test de la question 2
	//cout << "\n" << endl ;
	//if(C.present(s)) {cout << "Le mot est présent !" << endl ;}
	//else {cout << "Le mot n'est pas présent !" << endl ;}

	//Test de la question 3
	//nb_occ=C.nb_occ(s) ;
	//if(nb_occ==0) {cout << "Les deux chaines sont identiques" << endl ;}
	//else {cout << "la chaine de caractère apparait : " << nb_occ << " fois dans la collection" << endl ;}

	//Test de la question 4
	//char s2[10]="coucou" ;
	//C.ajout_bis(s) ;
	//C.ajout_bis(s2) ;
	//C.afficher() ;

	//Test de la question 5
	C.change_size(500,100) ;
	C.afficher() ;

	//Test de la question 6
	//col_chaine Y(C) ;
	//Y.afficher() ;

	//Test de la question 7
	//if(Y==C) {cout << "Les collections sont les mêmes !" << endl ;}
	//else {cout << "Les collections sont différentes !" << endl ;}

	//Test de la question 8
	//col_chaine A=C ;
	//A.afficher() ;



	return 0 ;
}
