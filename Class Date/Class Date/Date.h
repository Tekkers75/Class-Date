/// @author Саранчин К.А.
/// Заголовчный файл класса Date

/// Класс даты
class Date
{
private:
	int day;		/// День
	int month;		/// Месяц
	int year;		/// Год
	static int mm[12]; /// Массив дней в месяце


public:
	/// Конструктор
	Date(int d, int m, int y);
	Date();
	/// Задать дату в днях
	void set_day(int d);
	/// Задать дату в месяцах
	void set_month(int m);
	/// Задать дату в годах
	void set_year(int y);
	/// Перевод времени в дни 
	int convert_date();
	/// Преобразовать дни в дату 
	void set_date(int d, int m, int y);
	/// Преобразовать дату в дни 
	void set_date_in_day(int dd);

	/// Добавить дни
	void add_day(int d);

	/// Добавить месяц
	void add_month(int m);

	/// Добавить года
	void add_year(int y);

	/// Удалить дни
	void sub_day(int d);

	/// Удалить месяц
	void sub_month(int m);

	/// Удалить год
	void sub_year(int y);

	/// Получить дни
	int get_day() const;
	/// Получить месяц
	int get_month() const;
	/// Получить год
	int get_year() const;


	/// Вывести дату в формате дд.мм.гггг
	std::string show_data();

};

//void foo(const Date& d) {
//	d.
//}

/// Проверка кодировки