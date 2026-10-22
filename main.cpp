#include <iostream>
#include <string>
using namespace std;

long long calculate(const string& op, long long a, long long b) {
    if (op == "add") return a + b;
    // OPERATIONS-END
    return 0;
}

int main() {
    string op;
    long long a, b;
    cin >> op >> a >> b;
    cout << calculate(op, a, b) << endl;
    return 0;
}