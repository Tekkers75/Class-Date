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


		const int size = 10;
		Date* arrDay = new Date[size];
		Date* arrMonth = new Date[size];
		Date* arrYear = new Date[size];
		int m = 1;
		int y = 1;
		int mm1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		
		//for (int d = 1; d < size; d++) {
		//	arrDay[d].set_day(d);
		//	for (int y = 1; y < size; y++) {

		//			arrYear[y].set_year(y);
		//	}
		//	//arrF[d].set_date(d, m, y);
		//	
		//	//y++;
		//}
		//
		//for (int d = 1; d < size; d++){
		//	arrDay[d].set_day(d);
		//	for (int y = 1; y < size; y++)
		//	{
		//		arrYear[m].set_year(y);
		//	}
		//	arrYear[y].convert_date();
		//	arrDay[d].convert_date();
		//	
		//	cout << "date mass: " << arrYear[y].show_data() << arrDay[d].show_data() << endl;
		//	//cout << "date mass: " << arrDay[d].show_data() << endl;

		//}

		Date* arrD = new Date[size];
		for (int d = 1; d < size; d++) {
			arrD[d].set_date_in_day(d);
			
		}

		for (int d = 1; d < size; d++)
		{
			cout << "Day mass: " << arrD[d].convert_date() << endl;
			//cout <<  arrD[d].show_data() << endl;

		}
		
		cout << endl << "Day[" << 3 << "]: " << arrD[3].get_day() << endl;

		//int d_sum = arrD[3].add_day(5);
		//cout << arrD[1].add_day(5);




		/*/// Массив из объектов
		const int size = 5;
		Fraction* arrF = new Fraction[size];
		int j = 2;

		for (int i = 1; i < size; i++) { /// Задание значений объектов
			arrF[i].initF(i, j);
			j++;
		}

		for (int i = 1; i < size; i++) { /// Вывод объектов
			cout << "fr[" << i << "] = " << arrF[i].stringFraction() << endl;
		}

		/// Вывод чистилеля 3-й дроби
		cout << endl << "fr[" << 3 << "].numerator = " << arrF[3].getNumeratorF() << endl;
		/// Сумма дробей
		Fraction f_sum = arrF[3].addF(arrF[4]);
		cout << endl << "f_sum = fr[" << 3 << "] + fr[" << 4 << "] = " + f_sum.stringFraction(); /// Вывод суммы дробей

		delete[]arrF;/// Освобождение памяти



		/// Массив из указателей на объекты
		Fraction* aF[size];

		for (int i = 1; i < size; i++) { /// Присваивание массиву aF указателей на массив arrF
			aF[i] = &arrF[i];
		}

		for (int i = 1; i < size; i++) { /// Вывод числителей объектов через указатели
			cout << endl << "aF[" << i << "].numerator = " << aF[i]->getNumeratorF() << endl;
		}
*/


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