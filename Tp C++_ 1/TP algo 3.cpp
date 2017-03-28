#include <iostream>

using namespace std;

int main()
{
	int min=100;
    int max=0;
	int x=0;
	int moy=0;	
	
	int n;
	
	cout<<"Donnez n ?:";
	cin>>n;
	while(n<0)
	{
		cout<<"Désolé "<<n<<" est négatif !\n";
		cout<<"Donnez n ?:";
		cin>>n;
	}
	
	for(int i=1;i<n+1;i++)
	{
		cout<<"Donnez la valeur "<<i<<" ? ";
		cin>>x;
		
		moy+=x ;
		
		if(i<min)
		{
			min=x;
		}
		
		if(x>max)
		{
			max=x;
		}				
		
	}
	
	moy/=n;
	
	
	cout<<"La valeur minimale est " <<min<<endl;
	cout<<"La valeur maximale est "<<max<<endl;
	cout<<"La moyenne est "<<moy<<endl;
	cout<<"Au revoir !"<<endl;
	
}

