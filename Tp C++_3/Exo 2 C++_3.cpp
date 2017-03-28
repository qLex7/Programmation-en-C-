//DEBORD GUILLAUME
//Exercice 2
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
	srand(time(NULL));
	int a(1);
	int b(20);
	
	
	int tableau[10], i;
	tableau[0]=rand()%(b-a)+a;
	tableau[1]=rand()%(b-a)+a;
	tableau[2]=rand()%(b-a)+a;
	tableau[3]=rand()%(b-a)+a;
	tableau[4]=rand()%(b-a)+a;
	tableau[5]=rand()%(b-a)+a;
	tableau[6]=rand()%(b-a)+a;
	tableau[7]=rand()%(b-a)+a;
	tableau[8]=rand()%(b-a)+a;
	tableau[9]=rand()%(b-a)+a;
	
	for (i = 0 ; i < 10 ; i++)
	{
		cout <<"--"<<tableau[i]<<"--" << endl;
	}

	

return 0;
}
