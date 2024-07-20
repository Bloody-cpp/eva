#include <iostream>
#include <stdint.h>

using namespace std;

int main(int, char**){
    int64_t a, b;
    char operation;
    while(true) {
        int64_t result = 0;
        cin >> a >> b >> operation;
        switch (operation)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            cout << "error unknown operation" << endl;
            break;
        }
        cout << "Result: " << result << endl;
    }
}
