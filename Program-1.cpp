
#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;
    string op;

    void getInput() {
        cout << "Enter value of a: ";
        cin >> a;

        cout << "Enter value of b: ";
        cin >> b;

        cout << "Enter operation (add / sub / mul / div): ";
        cin >> op;
    }

    double compute() {
        if (op == "add") return a + b;
        else if (op == "sub") return a - b;
        else if (op == "mul") return a * b;
        else if (op == "div") {
            if (b == 0) {
                cout << "Error: Division by zero!\n";
                return 0;
            }
            return a / b;
        }
        else {
            cout << "Invalid operation!\n";
            return 0;
        }
    }
};

int main() {
    Calculator c;
    c.getInput();

    cout << "Result: " << c.compute() << endl;
    
    return 0;
}
