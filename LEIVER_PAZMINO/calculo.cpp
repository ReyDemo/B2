#include<iostream>
using namespace std;
int main()
{
	float x,s=0;
	int i=0,l;
	cout<<"ingrese cantidad de egresos (l) : ";
	cin>>l;
	cout<<"ingrese saldo inicial (s) : " ;
       cin>>s;
       do 
       {
	       cout<<"ingreso egreso(x) : ";
	       cin>>x;
	       i=i+l;
	       s=s+x;
       }
       while(i<l);
       cout<<"el saldo final es : " <<s<<endl;
       return 0;


	           


}
