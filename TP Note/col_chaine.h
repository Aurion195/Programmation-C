#ifndef Collection_c
#define Collection_c

class col_chaine
{
	char *D;
	char **I;
	int nbc;
	int nbi;
	int max_nbc;
	int max_nbi;

	public:
		col_chaine(int mnbc, int mnbi);
		~col_chaine() ;
		col_chaine(const col_chaine& C) ;
		bool operator ==(col_chaine & C);
		col_chaine & operator = (const col_chaine& C) ;
		bool ajout(char* s);
		bool ajout_bis(char* s) ;
		bool present(char* s) ;
		int nb_occ(char* s) ;
		void afficher();
		void change_size(int new_max_nbc, int new_max_nbi) ;

};
#endif
