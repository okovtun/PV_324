#include<iostream>
using namespace std;

#define delimiter "\n------------------------------\n"

//��������-��������������� ���������������� �� ����� C++
//Object-Oriented Programming

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	//				Constructors:
	Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}
	Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "1ArgConstroctor:\t" << this << endl;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyConstructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//				Operators:
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssignment:\t\t" << this << endl;
		return *this;
	}

	//				Methods:
	void print()const
	{
		cout << "X = " << x << ",\tY = " << y << ";\n";
	}
};

//#define STRUCT_POINT
//#define CONSTRUCTORS_CHECK
//#define ASSIGNMENT_CHECK

void main()
{
	setlocale(LC_ALL, "");

#ifdef STRUCT_POINT
	//type name;
	int a;		//���������� ���������� 'a' ���� 'int'
	Point A;	//���������� ���������� 'A' ���� 'Point'
				//���������� ������� 'A' ��������� 'Point'
				//�������� ���������� 'A' ��������� 'Point'
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

#ifdef CONSTRUCTORS_CHECK
	Point A;		//Default constructor
/*A.set_x(2);
A.set_y(3);*/
	cout << A.get_x() << "\t" << A.get_y() << endl;
	A.print();

	Point B = 5;	//Signle-argument constructor
	B.print();

	Point C(2, 3);	//Constructor
	C.print();

	Point D = C;	//Copy constructor
	D.print();

	Point E;
	E = D;
	E.print();
#endif // CONSTRUCTORS_CHECK

#ifdef ASSIGNMENT_CHECK
	int a, b, c;

	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

	Point A, B, C;
	cout << delimiter << endl;
	A = B = C = Point(2, 3);
	cout << delimiter << endl;
	cout << sizeof(A) << endl;
#endif // ASSIGNMENT_CHECK

	int a = 2;
	int b = 3;
	int c = a + b;
	cout << c << endl;

	Point A(2, 3);
	Point B(4, 5);
	Point C = A + B;
}

/*
-------------------------------------
1. Encapsulation
	private:
	public:
	protected:

	get/set-������
	get (�����, ��������) - ��������� ����� � ��������� ����� �� ������
	set (������, ����������) - ��������� ������ � ���������� ������ �� ������,
							   ����� ����, set-������ ������������ ���������� ������.

2. Inheritance
3. Polymorphism
-------------------------------------
*/

/*
-------------------------------------
Constructor;
	-� �����������;
	-��� ����������;
	-�� ��������� - ��� �����������, ������� ����� ���� ������ ��� ����������;
	-����������� ����������� - ��� �����������, ������� �������� ������, � ������,
							   ����������� ������ ������ ������ ������ ������������� �������;
	-����������� ��������;
~Destructor;
Assignment operator;
-------------------------------------
*/

/*
-------------------------------------
	type operator@(parameters)
	{
		.........;
		//group-of-statements;
		.........;
	}

1. ����������� ����� ������ ������������ ���������:
	+  �������������;
	++ �������������;
	%  �������������;
	%% �� �������������;

2. �� ��� ������������ ��������� ����� �����������.
   �� �������������:
	?: - ��������� �������� (Conditional ternary operator);
	:: - �������� ���������� ��������� (Scope operator);
	.  - �������� ������ ������� (Point operator);
	.* - Pointer to member selection;
	#  - Preprocessor directive;
	## - Preprecessor concatenation; "Hello" + "World" = "HelloWorld"

3. ������������� ��������� ��������� ���������;
4. �������������� ��������� �������� ��� ����������� ������ ����������;
-------------------------------------
*/