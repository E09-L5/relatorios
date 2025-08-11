#include <iostream>
using namespace std;

int main(){
	
	int number;
	cin >> number;
	
	for(int i = number - 1; i > 0; i--) {
		int result = number%i;
		
		cout << "Resto da divisão por: " << i << ": " << result << endl;
	}
	
	return 0;
}