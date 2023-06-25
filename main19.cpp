#include <iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"digitame un caracter: ";cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"es una vocal minuscula";break;	
		default : cout<<"NO es una vocal minuscula";break;
		
	}
	
	return 0;
}
