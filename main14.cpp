#include<iostream>
#include<math.h>

using namespace std;


int main(){
	float x,y,resultado =0;
	
	cout<<"digitame x: ";cin>>x;
	cout<<"digitame y: ";cin>>y;
	
	resultado= (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}
