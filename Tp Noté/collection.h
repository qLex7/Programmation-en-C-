#ifndef collection_h
#define collection_h

using namespace std;

class col_chaine
{
	private:
	
	char*T_chaine;
	char **T_index;
	int nbc;
	int nbi;
	int Tmax;
	int Timax;
	
	public:
		col_chaine(int mnbc, int mnbi);
		int occurrence(char*s);
		void change_size(int nTmax_nbc, int nTimax_nbi);
		bool ajout(char*s);
		bool ajout_bis(char*s);
		bool present(char*s);
		void afficher();
		~col_chaine();
		col_chaine(const col_chaine& s);
		bool operator==(col_chaine& s);
		col_chaine & operator = (const col_chaine& C) ;
	
	
	

};

#endif
