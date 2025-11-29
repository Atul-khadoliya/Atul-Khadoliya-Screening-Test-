#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    string op;

    Calculator(double x, double y, string type) {
        a = x;
        b = y;
        op = type;
    }

    double calculate() {
        if (op == "add") return a + b;
        else if (op == "sub") return a - b;
        else if (op == "mul") return a * b;
        else if (op == "div") {
            if (b == 0) {
                cout << "Error: division by zero!\n";
                return 0;
            }
            return a / b;
        }
        else {
            cout << "Invalid operation!";
            return 0;
        }
    }
};

int main() {
    Calculator c(10.5, 5.5, "add");
    cout << "Result: " << c.calculate();
    return 0;
}

