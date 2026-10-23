#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double calculate(const string& op, double a, double b) {
    if (op == "add") return a + b;
    if (op =="sub") return a - b;
    if (op == "mul") return a * b;
    if (op == "div"){
    	if (b == 0) {
    		cout << "Error" << endl;
    		return 0;
		}
		return a / b;
	}
	if (op == "pow"){
		return pow(a, b);
	}
	if (op == "sqrt"){
		if (a < 0){
			cout << "Error (negative number!)" <<endl;
			return 0;
		}
		return sqrt(a);
	}
	
	cout << "invalid" << endl;
    // OPERATIONS-END
    return 0;
}

int main() {
    string op;
    long long a, b;
    cin >> op >> a >> b;
    cout << calculate(op, a, b) << endl;
    system("pause");
    return 0;
}