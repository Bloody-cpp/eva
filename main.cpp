#include <iostream>
#include <stdint.h>
#include <random>

using namespace std;

int main(int, char**){
    mt19937_64 gen(time(0));
    uint64_t a = gen() % 200;
    while(true) {
        uint64_t choise; 
        cin >> choise;
        if (a == choise) { 
            cout << "Ты угадал!" << endl;
            a = gen() % 200;
            continue;
        }
        if (a < choise) {
            cout << "Загаданное число меньше" << endl;
        }
        if (a > choise) {
            cout << "Загаданное число больше" << endl;
        }
    }
}
