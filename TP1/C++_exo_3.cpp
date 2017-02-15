#include <iostream>
#include <string>

using namespace std ;

int main()
{
	double max=0, min=100, n=0 , x=0 ;
	double moy=0 ;
	
	do
	{
		cout << "Donnez n ? " ; cin >> n ;
	} while (n<1) ;
	
	for (int i=1 ; i<=n ; i++)
	{
		cout << "Donnez la valeur " << i << " ? " ; cin >> x ;
		
		if (min>x) {min=x ;}
		if (max<x) {max=x ;}
		
		moy+=x ;
	}
	
	moy/=n ;
	
	cout << "\n" << "La valeur minimale est " << min << endl ;
	cout << "La valeur maximale est " << max << endl ;
	cout << "La moyenne est " << moy << endl ;
	cout << "Au revoir !" << endl ;
	
	return 0 ;
}
