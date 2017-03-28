#include <iostream>

using namespace std;

int main()
{
	int taille;
	cout<<"Donnez la taille (positif et impaire) ? ";
	cin>>taille;
	while ((taille%2)==0)
	{
		cout<<"Désolé,seulement des valeurs positives et impaires\n";
		cout<<"Donnez la longueur ? ";
		cin>>taille;
		
	}
	int i;
	int j;
	for (i=0;i<taille;i++)
	{
		for(j=0;j<taille;j++)
		{
			if(i==j or j==taille-1-i)
			{
				cout<<" *";
			}
									
			else
			{
				cout<<"  ";
			}
			
		} cout<<"\n";	
	}	
		
		
}
	
