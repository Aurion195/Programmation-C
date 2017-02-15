#include <iostream>
#include <string>

using namespace std ;

bool trouve(int *t, int n, int y)
{
  bool guest ;

  for (int i=0 ; i<n ; i++)
  {
    if (t[i]==y)
    {
      guest=true ;
    }
  }

  return guest ;
}

int main()
{
  int y=0 ;
  bool find ;

  int T[10]={15,20,65,45,87,15} ;

  cout << "Choissisez une valeur : " ; cin >> y ;

  find=trouve(T,6,y) ;

  for (int i=0 ;i<10 ; i++)
  {
    cout << "|  " << T[i] << "  |" << endl ;
  }

  if (find==true) {cout << "\n" << "La valeur se trouve dans le tableau !" << endl ;}
  else {cout << "\n" << "La valeur ne se trouve pas dans le tableau !" << endl ;}

  return 0 ;
}
