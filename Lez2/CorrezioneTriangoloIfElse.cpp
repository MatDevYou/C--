/*
Dati in input il raggio di un triangolo
calcolare il perimetro, l'area e tipo(Equilatero / isoscele / scaleno)

visualizzare i risultati

per calcolcare area triangolo conoscendo 3 lati bisogna usare la formula di Erone
Test:
input: 3.24, 2.51
output:

Circoferenza:
Area:
Diametro:
l1 != l2 && l2 != l3 && l1 != l3
cout<<"triangolo scaleno";

if(a + b > = c && b + c >= a && c + a>= b)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {

	double l1,l2,l3;

	cout<<"inserisci lato del triangolo : ";
	cin>>l1;

	cout<<"inserisci lato del triangolo : ";
	cin>>l2;

	cout<<"inserisci lato del triangolo : ";
	cin>>l3;

	

	if (l1 + l2 >= l3 && l2 + l3 >= l1 && l3 + l1 >= l2){
		double perimetro = l1 + l2 + l3;
		cout<<"Perimetro: "<<perimetro<<endl;
		
		double sp = perimetro / 2;
		double area = sqrt(sp *(sp - l1)*(sp - l2)*(sp - l3));
		cout<<"Area: "<<area<<endl;
		
		if(l1 == l2 && l1 == l3)
		cout<<"Tipo : equilatero";
		else if (l1 == l2 || l1 == l3 || l2 == l3)
			cout<<"Tipo : isoscele";
				else cout<<"Tipo : scaleno";
	} else {
		cout<<"impossibile costruire il triangolo";
	}
	
	
	
}


