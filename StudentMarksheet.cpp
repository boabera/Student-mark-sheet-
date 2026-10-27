#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char names[3][20];
    int marks[3][3];
    int total[3];
    double average[3];

    int topStudent = 0;

    for (int i = 0; i < 3; i++) {

        cout << "\nEnter name of student " << i + 1 << ": ";
        cin.getline(names[i], 20);

        total[i] = 0;

        for (int j = 0; j < 3; j++) {

            cout << "Enter mark " << j + 1 << ": ";
            cin >> marks[i][j];

            total[i] += marks[i][j];
        }

        average[i] = total[i] / 3.0;

        cin.ignore();
    }

    for (int i = 1; i < 3; i++) {

        if (total[i] > total[topStudent]) {
            topStudent = i;
        }
    }

    cout << "\n      STUDENT MARK SHEET \n";

    cout << left << setw(20) << "Name";

    for (int j = 0; j < 3; j++) {

        if (j == 0) {
            cout << right << setw(8) << "M1";
        }
        else if (j == 1) {
            cout << right << setw(8) << "M2";
        }
        else {
            cout << right << setw(8) << "M3";
        }
    }

    cout << setw(10) << "Total"
         << setw(10) << "Average" << '\n';

    cout << fixed << setprecision(1);

    for (int i = 0; i < 3; i++) {

        cout << left << setw(20) << names[i];

        for (int j = 0; j < 3; j++) {
            cout << right << setw(8) << marks[i][j];
        }

        cout << right << setw(10) << total[i]
             << setw(10) << average[i] << '\n';
    }

    cout << "\nTop student: " << names[topStudent] << '\n';
    

    return 0;
}
