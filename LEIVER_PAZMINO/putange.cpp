#include<iostream>
using namespace std;
int main ()
{
	float x,pm=0;
	int i=0,l;
	cout<<"ingrese l: ";
	cin>>l;
	do{
		cout<<"ingrese x: ";
		cin>>x;
		i=i+1;
		if(x>pm)
		{
			pm=x;
		}
	}while(i<l);
	cout<<"el promedio maximo de el curso fue : " <<pm<<endl;
	return 0;
}
