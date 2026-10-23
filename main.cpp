#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double calculate(const string& op, double a, double b) {
	
    if (op == "add") return a + b; // plus adding operation code +  (num1 + num2)
    
    if (op =="sub") return a - b; // subtract operation code - (num1 - num2)
    
    if (op == "mul") return a * b; // multply operation code * (num1 * num2)
    
    if (op == "div"){ // divide operation code / (num1 / num2) 
    	
    	if (b == 0) {
    		cout << "Error" << endl; // a/0 its false and program send error 
    		return 0;
		}
		return a / b;
	}
	
	if (op == "pow"){ // power operation code ** (num1 ** n)
		return pow(a, b);
	}
	if (op == "sqrt"){ // square root operation 
		if (a < 0){
			cout << "Error (negative number!)" <<endl; // if first num was 0 < 0 send error
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
    cout << " Welcome to Calculator !! " << endl;
    cout << "+ - * /" << endl;
    cout << "For adding operation type this : add num1 num2" << endl;
    cout << "For subtract operation type this : sub num1 num2" << endl;
    cout << "For multiply operation type this : mul num1 num2" << endl;
    cout << "For division operation type this : div num1 num2" << endl;
    cout << "For power operation type this : pow num1 num2" << endl;
    cout << "For square root operation type this : sqrt num1 num2" << endl;
    cout << "Please Enter your operation and Numbers !" << endl;
    cin >> op >> a >> b;
    cout << calculate(op, a, b) << endl;
    system("pause");
    return 0;
}