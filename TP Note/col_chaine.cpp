#include "col_chaine.h"
#include <string.h>
#include <iostream>

using namespace std;

col_chaine::col_chaine(int mnbc, int mnbi)
{
	max_nbc=mnbc;
	max_nbi=mnbi;

	D=new char[mnbc];
	I=new char *[mnbi];

	nbc=0;
	nbi=0;
}

col_chaine::~col_chaine()				//Question 1
{
	delete [] D ;
	delete [] I ;

	cout << "Le destructeur est arrivée !!!! "<<endl;
}

bool col_chaine::ajout(char *s)
{
	int nbcr=max_nbc-nbc;
	int l=strlen(s)+1;

	if(l>nbcr || nbi==max_nbi)
	{
		return false;
	}
	I[nbi]=&D[nbc];
	strcpy(I[nbi],s);
	nbi++;
	nbc+=l;
	return true;
}

bool col_chaine::present(char *s)			//Question 2
{
	for(int i=0;i<nbi;i++)
	{
		if(strcmp(s,I[i])==0) return true;
	}
	return false;
}

void col_chaine::afficher()							//Question 3
{
	cout << "Debut affichage:" << max_nbc << " " << max_nbi  << "\n" << endl;

	for(int i=0;i<nbi;i++) {cout << I[i] << endl ;}

	cout << "Fin affichage" << endl;
}

int col_chaine::nb_occ(char* s) 			//Quesion 3
{
	int cpt=0 ;
	int nb=0 ;

	for(int i=0 ; i<nbi ; i++)
	{
		if(strcmp(s,I[i])==0) {cpt++ ;}
		if(strcmp(s,I[i])<0) {nb=0 ; return nb ;}
	}
	if(cpt==nbi) {return 0;}
	return cpt ;
}

bool col_chaine::ajout_bis(char* s) 	//Question 4
{
	int nb ;

	nb=(*this).nb_occ(s) ;
	if(nb==0) { (*this).ajout(s) ;}

	return true ;
}

void col_chaine::change_size(int new_max_nbc, int new_max_nbi)		//Question 5
{
	int cpt=0 ;

	if(new_max_nbc<max_nbc) {return ;}

	col_chaine *X=new col_chaine(new_max_nbc,new_max_nbi) ;
	max_nbc=new_max_nbc ;
	max_nbi=new_max_nbi ;

	for(int i=0 ; i<nbi ; i++) {(*X).ajout(I[i]) ;}

	delete [] D ;
	delete [] I ;

	D=(*X).D ;
	I=(*X).I ;
}

col_chaine::col_chaine(const col_chaine& C)				//Question 6
{
	D=new char[C.max_nbc] ;
	I=new char*[C.max_nbi] ;
	nbi=0 ;
	nbc=0 ;
	max_nbc=C.max_nbc ;
	max_nbi=C.max_nbi ;


	for(int i=0 ; i<C.nbi ; i++)
	{
		ajout(C.I[i]) ;
	}
}

bool col_chaine::operator==(col_chaine & C)				//Question 7
{
	if(nbi!=C.nbi) {return false ;}

	for(int i=0;i<C.nbi;i++)
	{
		if(!present(C.I[i]))
		{
			return false;
			break ;
		}
	}

	return true;
}

col_chaine& col_chaine::operator =(const col_chaine& C)			//Quesion 8
{
	delete [] D ;
	delete [] I ;
	D=new char[C.max_nbc] ;
	I=new char*[C.max_nbi] ;
	nbi=0 ;
	nbc=0 ;
	max_nbc=C.max_nbc ;
	max_nbi=C.max_nbi ;

	for(int i=0 ; i<C.nbi ; i++)
	{
		ajout(C.I[i]) ;
	}

	return (*this) ;
}
