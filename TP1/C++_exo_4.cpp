#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int n=0 ;
	
	do
	{
		cout << "Donnez la taille du carré ? " ; cin >> n ;
	} while (n<1) ;
	
	cout << "\n" << endl ;
	
	int i=0, j=0 ;
	
	for (i=1 ; i<=n ; i++)
	{
		for (j=1 ; j<=n ; j++)
		{
			cout << "*" << " " ;
		}
		
		cout << endl ; ;
	}
	
	return 0 ;
}
