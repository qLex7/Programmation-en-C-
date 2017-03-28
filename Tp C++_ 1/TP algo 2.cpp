#include <iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Donnez n ?:";
	cin>>n;
	while(n<0)
	{
		cout<<"Désolé "<<n<<" est négatif !";
		cout<<"Donnez n ?:\n";
		cin>>n;
	}
	while(n<2)
	{
		cout<<"Désolé "<<n<<" est inférieur à 2 !\n";
		cout<<"Donnez n ?:";
		cin>>n;
	}
	cout<<"Calcul de primalité sur la plage de ]1,"<<n<<"]:\n";
	int i;
	int j;
	int compteur;
	for (i=2;i<=n;i++)
	{
		compteur=0;
		for (j=1;j<=n;j++)
		{
			if((i%j)==0)
			{
				compteur++;
			}
		}
		if (compteur==2)
		{
			cout<<i<<" est premier \n";
		}
			
		else
		{
			cout<<j<<" n'est pas premier \n";
		}
	}
	
}
		
