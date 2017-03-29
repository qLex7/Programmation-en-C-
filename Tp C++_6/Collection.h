#ifndef Collection_c
#define Collection_c

class col_chaine
{
	int Dmax, Imax, nbi, nbc;
	char *T_chaine;
	char **T_index;
	
	
	public:
		col_chaine(int,int);
		~col_chaine();
		bool present(const char*);		
		bool ajout(const char*);
		void afficher();
		void etendre(int);

};

#endif
