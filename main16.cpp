#include <iostream>


using namespace std;


int main(){
	int numero;
	
	cout<<"digite un numero del 1 al 5: ";
	cin>>numero;
	
	
	switch(numero){
	case 1: cout<<"el numero es 1";break;
	case 2: cout<<"el numero es 2";break;
	case 3: cout<<"el numero es 3";break;
	case 4: cout<<"el numero es 4";break;	
	case 5: cout<<"el numero es 5";break;
	default: cout<<"no esta en el rango del 1-5";break;
	}
    	return 0;
}
