#include <iostream>
#include <string>

using namespace std;

bool premier(int x)
{
	bool trouve = true;
	for(int i=2;i<x;i++)
	{
		if((x%i)==0)
		{
			trouve=false;
			break;
		}	
	}
	return trouve;
}

int main()
{
	int x;
	bool resultat;
	cout<<"Entrez la valeur de x : ";
	cin>>x;
	
	resultat=premier(x);
	
	if(resultat)
	{
		cout<<x<<" Est premier"<<endl;
	}
	
	else
	{
		cout<<x<<" N'est pas premier"<<endl;
		
		
	}
	return 0;
	
		
	
}
	
