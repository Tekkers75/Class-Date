/// @author �������� �.�.
/// ����������� ���� ������ Date

/// ����� ����
class Date
{
private:
	int day;		/// ����
	int month;		/// �����
	int year;		/// ���
	static int mm[12]; /// ������ ���� � ������


public:
	/// �����������
	Date(int d, int m, int y);
	Date();
	/// ������ ���� � ����
	void set_day(int d);
	/// ������ ���� � �������
	void set_month(int m);
	/// ������ ���� � �����
	void set_year(int y);
	/// ������� ������� � ��� 
	int convert_date();
	/// ������������� ��� � ���� 
	void set_date(int d, int m, int y);
	/// ������������� ���� � ��� 
	void set_date_in_day(int dd);

	/// �������� ���
	void add_day(int d);

	/// �������� �����
	void add_month(int m);

	/// �������� ����
	void add_year(int y);

	/// ������� ���
	void sub_day(int d);

	/// ������� �����
	void sub_month(int m);

	/// ������� ���
	void sub_year(int y);

	/// �������� ���
	int get_day() const;
	/// �������� �����
	int get_month() const;
	/// �������� ���
	int get_year() const;


	/// ������� ���� � ������� ��.��.����
	std::string show_data();

};

//void foo(const Date& d) {
//	d.
//}

