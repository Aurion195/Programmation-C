#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int nb=0, i=0 ,j=0;
	
	do
	{
		cout << "Donnez un nombre supérieur à 1 : " ; cin >> nb ;
	} while (nb<1) ;
	
	for (i=2 ; i<nb+1 ; i++)
	{
		int cpt=0;
		for(j=1; j<=i; j++)
		{
			if (i%j==0)
			{
				cpt++ ;
			}
		}
		
		if (cpt==2) { cout << i <<" est premier" << endl ; }
		else {cout << i << " n'est pas premier" << endl ;}
		
       }
	
	return 0 ;
}
