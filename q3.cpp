#include <iostream>
using namespace std;

void count(int values[]) {
	int par = 0, impar = 0, positivos = 0, negativos = 0;
	
	for(int i = 0; i < 5; i++){
		if(values[i] % 2 == 0) par++;
        else impar++;
		
		if (values[i] >= 0) positivos++;
		else if (values[i] < 0) negativos++;
	}
	
	cout << "Numeros pares: " << par << endl;
	cout << "Numeros impares: " << impar << endl;
	cout << "Numeros positivos: " << positivos << endl;
	cout << "Numeros negativos: " << negativos << endl;
}

int main() {
	
	int amount;
	cin >> amount;
	
	int values[5];
	for(int i = 0; i < amount; i++) {
		for(int j = 0; j < 5; j++){
			cin >> values[j];
		}
		count(values);
	}
	
	return 0;
}