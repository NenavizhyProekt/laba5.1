#include "Header.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int array_size;
    int members = 0;
    string user_str;
    cout << "Введите кол-во студентов: ";
    do {
        getline(cin, user_str);
    } while (!isInt(user_str));
    int userNumber = stoi(user_str);


    array_size = userNumber;

    infoAboutStudent* allStudents = new infoAboutStudent[array_size];

    while (array_size > 0) {
        cout << "Нужно добавить ещё " << array_size << " студентов" << endl;

        allStudents[members] = fillStruct();
        members++;
        array_size--;
    }

    cout << "Кол-во отличников по первой дисциплине: " << getStudentInfo(allStudents, 1, userNumber) << endl;
    for (int i = 0; i < userNumber; i++) {
        if (allStudents[i].firstMark == 5)
            cout << allStudents[i].fullName << endl;
    }

    cout << "Кол-во отличников по второй дисциплине: " << getStudentInfo(allStudents, 2, userNumber) << endl;
    for (int i = 0; i < userNumber; i++) {
        if (allStudents[i].secondMark == 5)
            cout << allStudents[i].fullName << endl;
    }

    cout << "Кол-во отличников по третьей дисциплине: " << getStudentInfo(allStudents, 3, userNumber) << endl;
    for (int i = 0; i < userNumber; i++) {
        if (allStudents[i].thirdMark == 5)
            cout << allStudents[i].fullName << endl;
    }
	
}