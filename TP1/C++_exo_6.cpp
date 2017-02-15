#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int n=0 ;
	
	do
	{
		cout << "Donnez la taille (positif et impairs) ? " ; cin >> n ;
		if (n%2==0 or n<1) {cout << "Désolé, seulement des valeurs positives et impaires" << endl ;}
	} while (n<1 or n%2==0) ;
	
	cout << "\n" << endl ;
	
	int i=0, j=0 ;
	
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<n ; j++)
		{
			if(i==j or i==n-j-1)
			{
				cout << "*" ;
			}
			else 
			{
				cout << " " ;
			}
		}
		
		cout << endl ; ;
	}
	
	return 0 ;
}
