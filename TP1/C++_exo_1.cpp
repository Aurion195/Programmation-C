#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int nb=0, i=0 ;
	
	do
	{
		cout << "Donnez un nombre supérieur à 1 : " ; cin >> nb ;
	} while (nb<1) ;
	
	
	for (i=2 ; i<nb ; i++)
	{
		if (nb%i==0) {cout << nb << " n'est pas premier" << endl ; break ;}
	}
	
	if(i==nb) {cout << nb << " est premier" << endl ;}
	
	return 0 ;
}
