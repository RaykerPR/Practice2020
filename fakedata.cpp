/*
* ������� ��� �������� ������������ ����
*
* @param day ��������� ����, ������� ���� ������������
* @param month ��������� �����, ������� ���� ������������
* @return ���������� 0, ���� ���� ������������ � 1, ���� ���� ����������
*/

#include "fakedata.h"

int fakedata(int day, int month)
{
    if (month == 2 && day > 29)
        return 0;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
            return 0;
    }
    if (day > 31 || day < 1 || month < 1 || month > 12)
        return 0;
    else
        return 1;
}
