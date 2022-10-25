#include<iostream>
using namespace std;
int main()
{
	float x,s=0,sl=0,s5=0;
	int i=0,l,il=0,i5=0;
	cout<<"ingrese l :";
	cin>>l;
	do{
		cout<<"ingrese x :";
		cin>>x;
	i=i+1;
        s=s+x;
	{
        if(x==1)
	il=il+1;
	sl=sl+x;
	}
	else{
	i5=i5+1;
	s5=s5+x;
	}
	{
	
	
		while(i<l)
		cout<<"la cantidad de monedas fue :"<<i<<endl;
		cout<<"el valor fue :"<<s<<endl;

		cout<<"la cantidad de monedas fue $1  :"<<il<<endl;
		cout<<"el valor fue :"<<sl<<endl;
		cout<<"la cantidad de monedas fue $50  :"<<i5<<endl;
		cout<<"el valor fue :"<<s5<<endl;
	
	}
	}
}

