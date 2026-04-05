#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Введите количество баллов (0-100): ";
    cin >> score;
    
    if (score >= 0 && score <= 49) {
        cout << "Неудовлетворительно (2)" << endl;
    } else if (score >= 50 && score <= 69) {
        cout << "Удовлетворительно (3)" << endl;
    } else if (score >= 70 && score <= 89) {
        cout << "Хорошо (4)" << endl;
    } else if (score >= 90 && score <= 100) {
        cout << "Отлично (5)" << endl;
    } else {
        cout << "За пределами" << endl;
    }
    
    return 0;
}
