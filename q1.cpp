#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int amount;
    cin >> amount;

    float result;
    if(amount >= 12) {
        result = amount * 0.65;
    } else {
        result = amount * 0.80;
    }

	cout << fixed << setprecision(2);
    cout << result << endl;

    return 0;
}