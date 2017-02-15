#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std ;

string melange(string mot)
{
	string melange ;
	int position=0 ;
	
	while (mot.size() != 0)
	{
		position = rand() % mot.size() ;
		melange+=mot[position] ;
		mot.erase(position, 1) ;
	}
	
	return melange ;
}

int main()
{
	string MotMystere, MotMelange, MotUtilisateur ; 
	
	cout << "Saisisez un mot : " ; cin >> MotMystere ;
	
	MotMelange = melange(MotMystere) ;
	
	do
	{
		cout << "\n" << "Quel est ce mot ? " << MotMelange << endl ;
		
		cout << "Entrer votre mot : " ; cin >> MotUtilisateur ;
		
		if (MotUtilisateur == MotMystere) { cout << "Tu as gagné " << endl ;}
		else { cout << "Ce n'est pas le mot" << endl ;}
	} while (MotMystere != MotUtilisateur) ;
	
	return 0 ;
}
