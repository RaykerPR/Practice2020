/*
* ‘ункци€ дл€ проверки корректности даты
*
* @param day принимает день, который ввел пользователь
* @param month принимает мес€ц, который ввел пользователь
* @return возвращает 0, если дата некорректна€ и 1, если дата корректна€
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
