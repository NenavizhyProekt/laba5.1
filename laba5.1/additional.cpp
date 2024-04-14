#include "Header.h"



bool isValidName(string name) {
	if (name[0] == ' ' || name[0] == '.')
		return false;
	for (int i = 1; i < name.length(); i++) {
		if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z' || name[i] >= '�' && name[i] <= '�' || name[i] >= '�' && name[i] <= '�' ||
			name[i] == ' ' || name[i] == '.')
			continue;
		else
			return false;
	}
	return true;
}


bool isInt(string user_num) {
    for (int i = 0; i < user_num.length(); i++)
        if (!isdigit(user_num[i])) {
            cout << "������� ������������ ������" << endl;
            return false;
            break;
        }
    return true;
}


infoAboutStudent fillStruct() {
	string fullName, studBook, numGroup, firstMark, secondMark, thirdMark;
	int stud_Book, num_Group, first_Mark, second_Mark, third_Mark;

	cout << "������� ���: ";
	do {
		getline(cin, fullName);
		if (isValidName(fullName))
			break;
		cout << "������� �������� ���, ���������� ��� ���: ";
	} while (true);

	cout << "������� ����� �������� ������: ";
	do {
		getline(cin, studBook);
		if (isInt(studBook))
			stud_Book = stoi(studBook);
		if (stud_Book > 0)
			break;
		else
			continue;
		cout << "������� �������� �����, ���������� ��� ���: ";
	} while (true);

	cout << "������� ����� ������: ";
	do {
		getline(cin, numGroup);
		if (isInt(numGroup)) {
			num_Group = stoi(numGroup);
			if (num_Group >= 11 && num_Group <= 14)
				break;
		}
		else
			continue;
		cout << "������� �������� �����, ���������� ��� ���: ";
	} while (true);

	cout << "������� ������ ������: ";
	do {
		getline(cin, firstMark);
		if (isInt(firstMark)) {
			first_Mark = stoi(firstMark);
			if (first_Mark >= 2 && first_Mark <= 5)
				break;
		}
		else
			continue;
		cout << "������� �������� �����, ���������� ��� ���: ";
	} while (true);

	cout << "������� ������ ������: ";
	do {
		getline(cin, secondMark);
		if (isInt(secondMark)) {
			second_Mark = stoi(secondMark);
			if (second_Mark >= 2 && second_Mark <= 5)
				break;
		}
		else
			continue;
		cout << "������� �������� �����, ���������� ��� ���: ";
	} while (true);

	cout << "������� ������ ������: ";
	do {
		getline(cin, thirdMark);
		if (isInt(thirdMark)) {
			third_Mark = stoi(thirdMark);
			if (third_Mark >= 2 && third_Mark <= 5)
				break;
		}
		else
			continue;
		cout << "������� �������� �����, ���������� ��� ���: ";
	} while (true);

	infoAboutStudent student = { fullName, stud_Book, num_Group, first_Mark, second_Mark, third_Mark };
	return student;
}


int getStudentInfo(infoAboutStudent *student, int discipline, int userNum) {
	int count = 0;
	if (discipline == 1)
	{
		for (struct infoAboutStudent* p = student; p <= student + userNum; p++) {
			if (p->firstMark == 5)
				count += 1;
		}
		return count;
	}
	if (discipline == 2)
	{
		for (struct infoAboutStudent* p = student; p <= student + userNum; p++) {
			if (p->secondMark == 5)
				count += 1;
		}
		return count;
	}
	if (discipline == 3)
	{
		for (struct infoAboutStudent* p = student; p <= student + userNum; p++) {
			if (p->thirdMark == 5)
				count += 1;
		}
		return count;
	}
}