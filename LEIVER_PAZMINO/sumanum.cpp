#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
        float x,s=0.0;
        int i=0,l;
	cout<< "ingrese el valor de l:";
	cin>>l;
	do {
		cout <<"ingrese el valor de x:";
		cin>>x;
		i=i+1;
		s=s+x;
	} while (i<l);

cout<<"la suma de los numero fue:"<<s<<endl;
return 0;
}
