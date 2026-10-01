#include <iostream>
#include <ctime>
#include <Windows.h> 
#pragma execution_character_set("utf-8")
using namespace std;

    void game() {
        int a = rand() % 101;
        int x;
        do {
            cout << "Угадай число: ";
            cin >> x;
        } while (x != a);
        cout << "Победа" << endl;
    }

    void table() {
        int t[9][9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                t[i][j] = (i + 1) * (j + 1);
            }
        }

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << t[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void divisors() {
        int n;
        cout << "Введите число: ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    int main() {
        SetConsoleCP(65001); // устанавливаем кодировку входящего потока данных на UTF-8 
        SetConsoleOutputCP(65001); // устанавливаем кодировку исходящего потока данных на UTF-8
        srand(time(0));
        int choice = -1;

        while (choice != 0) {
            cout << "\n1 - Угадай число\n2 - Таблица умножения\n3 - Делители числа\n0 - Выход\n";
            cin >> choice;

            if (choice == 1) game();
            if (choice == 2) table();
            if (choice == 3) divisors();
        }
        return 0;
    }


