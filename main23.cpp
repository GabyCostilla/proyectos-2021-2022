#include<iostream>

using namespace std;

int main(){
	int saldo_inicial =1000,opc;
	float extra,saldo =0,retiro;
	
	
	cout<<"\t bienvenido a su cajero automatico"<<endl;
	cout<<"1. ingresar dinero en cuenta"<<endl;
	cout<<"2. retirar dinero"<<endl;
	cout<<"3. salir"<<endl;
	cout<<"elija una opcion: ";cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"cuanto dinero desea ingresar: ";cin>>extra;
			saldo= saldo_inicial + extra;
			cout<<"dinero en cuenta: "<<saldo;break;
			
		case 2:
			cout<<"digite la cantidad de dinero que desea retirar: ";cin>>retiro;
			if(retiro > saldo_inicial){
				cout<<"NO tienes esa cantidad de dinero";
			}
			else{
				saldo=saldo_inicial-retiro;
				cout<<"dinero en cuenta: "<<saldo;break;
				
				
			}
		case 3: break;
		
	
		
	
	}
	
	return 0;
}
