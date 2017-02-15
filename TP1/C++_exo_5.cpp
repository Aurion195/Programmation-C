#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int h=0, l=0, i=0, j=0 ;
	
	do
	{
		cout << "Donnez la hauteur ? " ; cin >> h ;
		if (h<1) { cout << "Désolé seulement les valeurs positives." << endl ;}
	} while (h<1) ;
	
	do
	{
		cout << "Donnez la longueur ? " ; cin >> l ;
		if (l<1) { cout << "Désolé seulement les valeurs positives." << endl ;}
	} while (l<1) ;
	
	
	for (i=1 ; i<=h ; i++)
	{
		for (j=1 ; j<=l ; j++)
		{
			if (i==1 or i==h or j==1 or j==l)
			{	
				cout << "*" ;
			}
			else 
			{
				cout << " " ;
			}
		}
		
		cout << endl ;
		
	}
	
	return 0 ;
}
