#include<iostream>
using namespace std;



int main()
{
int i;
double c;
double fact=1;
//ya lo habia hecho con la entrada de numero
cout<<"ingrese un numero"<<endl;
cin>>c;

for (i=1;i<=c;i++){
fact = fact*i;
	}
   
cout<<fact<<endl;

return 0;
}
