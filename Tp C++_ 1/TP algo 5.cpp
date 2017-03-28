#include <iostream>

using namespace std;

int main()
{
	int taille;
	cout<<"Donnez la taille du carré ?:";
	cin>>taille;
	while (taille<0)
	{
		cout<<"Désolé "<<taille<<" seulement des valeurs positives\n";
		cout<<"Donnez la taille du carré ?:";
		cin>>taille;
	}
	int i;
	int j;
	for (i=0;i<taille;i++)
	{
		for (j=0;j<taille;j++)
		{
			if(i==0 or i==taille-1 or j==0 or j==taille-1)
			{
				cout<<" *";
			}
		
			else   
			{
				cout<<"  ";
			}
			
		}
		cout<<"\n";
	}	
}
