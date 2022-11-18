/// @author Саранчин К.А.
/// Основная программа 
#include <iostream>
#include <string.h>
#include "Date.h"
#include <Windows.h>


using namespace std;

int main() 
{
	system("chcp 1251"); // проверка кодировки???
	try {

		
		/// Массивы задание 5.. 
		Date d1;
		d1.set_date(25, 11, 1);
		cout << d1.show_data() << endl;
		int x = d1.convert_date();
		cout << x << endl;


		Date d2;
		d2.set_date_in_day(449);
		d2.add_day(1);
		cout << d2.show_data() << endl;

		Date d3;
		d3.set_date(25, 2, 1);
		d3.add_day(1);

		cout << d3.show_data() << endl;

		d3.add_month(3);
		cout << d3.show_data() << endl;
		int x3 = d3.convert_date();
		cout << x3 << endl;

		d3.add_year(12);
		cout << d3.show_data() << endl;
		int x4 = d3.convert_date();
		cout << x4 << endl;

		d3.sub_year(1);
		cout << d3.show_data() << endl;

		Date d4;
		d4.set_date(10, 5, 11);
		d4.add_day(5);
		d4.add_month(4);
		d4.add_year(5);
		d4.convert_date();
		//int x5 = d4.convert_date();
		cout << d4.show_data() << endl;
	}
	catch (invalid_argument e)
	{
		cout << e.what();
	}
	return 0;
}



//Серьезность	Код	Описание	Проект	Файл	Строка	Состояние подавления
//Ошибка		Данный проект ссылается на пакеты NuGet, отсутствующие на этом компьютере.Используйте восстановление пакетов NuGet, чтобы скачать их.Дополнительную информацию см.по адресу : http://go.microsoft.com/fwlink/?LinkID=322105. Отсутствует следующий файл: ..\Класс\packages\Microsoft.googletest.v140.windesktop.msvcstl.static.rt-dyn.1.8.1.5\build\native\Microsoft.googletest.v140.windesktop.msvcstl.static.rt-dyn.targets.	Data_test	C:\Users\kosty\OneDrive\Рабочий стол\Учеба попытка №2\2 курс\ООП\Программы\Class popitka1\Class Date Test\Data_test\Data_test.vcxproj	121	
/// Проверка кодировки
/// Проверка UNICODE