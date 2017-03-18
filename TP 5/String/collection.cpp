#include "collection.h"

#include <iostream>
#include <string>

using namespace std ;

collection_string::collection_string(int n)
{
  cout << "Une collection de " << n << " string vients d'être créée." << endl ;
  Nmax=n ;
  nbe=0 ;
  D=new string[n] ;

  for (int i=0 ; i<n ; i++)
  {
    D[i]=" " ;
  }
}

collection_string::collection_string(const collection_string& C)
{
  cout << "Une collection de " << C.Nmax << " string vients d'être créée." << endl ;
  Nmax=C.Nmax ;
  nbe=C.nbe ;
  D=new string[C.Nmax] ;

  for(int i=0 ; i<C.Nmax ; i++)
  {
    D[i]=C.D[i] ;
  }
}

collection_string::~collection_string()
{
  cout << "Le destructeur est passé " << endl ;
  delete [] D ;
}

void collection_string::affichage()
{
  cout << "Voici le tableau de string : " << "\n" << endl ;
  cout << "[" ;
  for(int i=0 ; i<Nmax ; i++)
  {
    cout << D[i] << " " ;
  }
  cout << "]" ;
  cout << "\n" << endl ;
}

bool collection_string::ajout(string ajout)
{
  if(nbe<Nmax) {D[nbe]=ajout ; nbe ++ ;return true ;}
  else {return false ;}
}

bool collection_string::present(string pres)
{
  for(int i=0 ; i<nbe ; i++)
  {
    if(D[i]==pres) {return true ;}
  }

  return false ;
}

void collection_string::ocurence(string occ)
{
  int j=0 ;
  for(int i=0 ; i<nbe ; i++)
  {
    if(D[i]!=occ) {D[j]=D[i] ; j++ ;}
    if(D[i]==occ) {D[i]=D[j] ;}
  }
}

collection_string *collection_string::intersection(collection_string& P)
{

	collection_string *s=new collection_string(Nmax);

	for(int i=0;i<nbe;i++)
  {
    for(int j=0 ; j<P.nbe ; j++)
    {
      if(D[i]==P.D[j]) {(*s).ajout(D[i]) ; break ;}
    }
  }

	return (s) ;
}

collection_string &collection_string::inter(collection_string& P)
{
	collection_string *s=new collection_string(Nmax);

	for(int i=0;i<nbe;i++)
  {
    for(int j=0 ; j<P.nbe ; j++)
    {
      if(D[i]==P.D[j]) {(*s).ajout(D[i]); break ;} ;
    }
  }

	return (*s) ;
}
