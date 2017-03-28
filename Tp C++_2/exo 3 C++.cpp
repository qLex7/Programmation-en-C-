#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;


void equation(double a, double b, double c)
{
	if(a==0)
	{ 
		if(b==0)
		{
			if(c==0)
			{
				cout<<"Alors une infinité de solutions";
		
			}
		else
		{	
		cout<<"Sinon aucune de solutions";
		}
		}
		
	else
	{	
	cout<<"S=-c/b";
	}
	}	
	else
	{
		cout<<"Delta=b²-4ac"<<endl;
		cout<<"Si (Delta>0) alors 2 solutions"<<endl;
		cout<<"Si (Delta<0) alors 0 solutions"<<endl;
		cout<<"Si (Delta=0) alors une solution"<<endl;
	}	
}


void resoudre(double a, double b, double c, double& r1, double& r2)
{
	double disc;
	disc=pow(b,2)-4*a*c;
	
	
	if(disc==0)
	{
		r1=-b/2*a;
		return;
	}
	
	else if (disc>0)
	{
		r1=(-b+sqrt(disc))/(2*a);
		r2=(-b-sqrt(disc))/(2*a);
		return;
	}
	
	if(disc<0)
	{
		return;
	}
		
		
	
}

void afficher(double a, double b, double c, double& r1, double& r2)
{
	cout<<r1<<endl;
	cout<<r2<<endl;
}


int main()
{
	
	double a;
	double b;
	double c;
	double g;
	double e;
	
	cout<<"Rentrez la valeur de a : ";
	cin>>a;
	
	cout<<"Rentrez la valeur de b : ";
	cin>>b;
	
	cout<<"Rentrez la valeur de c : ";
	cin>>c;
	
	equation(a,b,c);
	cout<<endl;
	resoudre(a,b,c,g,e);
	afficher(a,b,c,g,e);
	
}
