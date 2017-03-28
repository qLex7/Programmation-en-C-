#include <iostream>

using namespace std;

int main()
{
		while(true)
		{ int n;
			cout<<"Entrez un nombre supérieur à 1:";
			cin>>n;
			
		while(n<1)
		{
			cout<<"Je vous ai demande un nombre entier supérieur à 1 \n";
			cout<<"Entrez un nombre supérieur à 1 :";
			cin>>n;
		}
		
		int i;		
		for (i=2;i<n;i++)
		
		{ 
			if ((n%i)==0)break;
		}
		
		if (i==n)
		{
			cout<<n<<" est premier"<<endl;
		}
		else
		{
			cout<<n<<" n'est pas premier"<<endl;
		}
}
}
