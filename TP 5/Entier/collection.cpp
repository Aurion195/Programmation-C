#include "collection.h"
#include <iostream>

using namespace std ;

collection_entier::collection_entier(int n)
{
  cout << "Une collection de " << n << " point vients d'être créée." << endl ;
  Nmax=n ;
  nbe=0 ;
  D=new int[n] ;

  for (int i=0 ; i<n ; i++)
  {
    D[i]=0 ;
  }
}

collection_entier::collection_entier(const collection_entier& C)
{
  cout << "Une collection de " << C.Nmax << " point vients d'être créée." << endl ;
  Nmax=C.Nmax ;
  nbe=C.nbe ;
  D=new int[C.Nmax] ;

  for(int i=0 ; i<C.Nmax ; i++)
  {
    D[i]=C.D[i] ;
  }
}

collection_entier::~collection_entier()
{
  cout << "Le destructeur est passé " << endl ;
  delete [] D ;
}

void collection_entier::affichage()
{
  cout << "Voici le tableau d'entier : " << "\n" << endl ;
  cout << "[" ;
  for(int i=0 ; i<Nmax ; i++)
  {
    cout << D[i] << " " ;
  }
  cout << "]" ;
  cout << "\n" << endl ;
}

bool collection_entier::ajout(int ajout)
{
  if(nbe<Nmax) {D[nbe]=ajout ; nbe ++ ;return true ;}
  else {return false ;}
}

bool collection_entier::present(int present)
{
  for(int i=0 ; i<nbe ; i++)
  {
    if(D[i]==present) {return true ;}
  }

  return false ;
}

void collection_entier::ocurence(int occ)
{
  int j=0 ;
  for(int i=0 ; i<nbe ; i++)
  {
    if(D[i]!=occ) {D[j]=D[i] ; j++ ;}
  }
}

void collection_entier::valeur(double& moy, int& min, int& max)
{
  min=D[0] ;
  max=D[0] ;
  moy=0 ;
  int cpt=0 ;

  for(int i=0 ; i<nbe ; i++)
  {
    moy+=D[i] ;
    if(min>D[i]) {min=D[i] ;}
    if(max<D[i]) {max=D[i] ;}
    cpt++ ;
  }

  moy/=cpt ;
}

collection_entier *collection_entier::intersection(collection_entier& P)
{

	collection_entier *s=new collection_entier(Nmax);

	for(int i=0;i<nbe;i++)
  {
    for(int j=0 ; j<P.nbe ; j++)
    {
      if(D[i]==P.D[j]) {(*s).ajout(D[i]) ; break ;}
    }
  }

	return (s) ;
}

collection_entier &collection_entier::inter(collection_entier& P)
{
	collection_entier *s=new collection_entier(Nmax);

	for(int i=0;i<nbe;i++)
  {
    for(int j=0 ; j<P.nbe ; j++)
    {
      if(D[i]==P.D[j]) {(*s).ajout(D[i]); break ;} ;
    }
  }

	return (*s) ;
}

void collection_entier::trie()
{
  int imin,min,tmp ;

  for (int i=0 ; i<nbe-1 ; i++)
	{
		imin=i ;
		min=D[i] ;
		for (int j=i+1 ; j<nbe ; j++)
		{
			if (D[j]<min)
			{
				min=D[j] ;
				imin=j ;
			}
		}

	tmp=D[imin] ;
	D[imin]=D[i] ;
	D[i]=tmp ;

  }
}
