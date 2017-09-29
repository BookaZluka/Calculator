$calc

#include "iostream"
#include "math.h"
#include <iomanip>

using namespace std;

bool x = 0; //контроль завершения

bool y(); //меню

void add(); //сложение двух целочисленных значений
void sub(); //вычитание одного целочисленного значения из другого
void mul(); //умножение двух целочисленных значений
void div(); //деление одного целочисленного значения на другое
/*void mod(); //вычитание их целочисленного значения по определенному модулю
void pow(); //возведение в целочисленного значения в определенную степень
void rol(); //побитовый циклический сдвиг влево
void ror(); //побитовый циклический сдвиг вправо
void not(); //логическое отрицание целочисленного значения
void and(); //побитовое ИЛИ двух целочисленных значений
void or();*/  //побитовое И двух целочисленных значений
void error(); //ошибка

int main()
{
	setlocale(LC_ALL, "Russian");
	while (!x)
	{
		x = y();
	}
	
	return 0;

}

bool y()
{
	int a; //интерфейс
	cout << "1. Cложение двух целочисленных значений.\n2. Вычитание одного целочисленного значения из другого.\n3. Умножение двух целочисленных значений.\n4. Деление одного целочисленного значения на другое.\n5. Вычитание их целочисленного значения по определенному модулю.\n6. Возведение в целочисленного значения в определенную степень.\n7. Побитовый циклический сдвиг влево.\n8. Побитовый циклический сдвиг вправо.\n9. Логическое отрицание целочисленного значения.\n10. Побитовое ИЛИ двух целочисленных значений.\n11. Побитовое И двух целочисленных значений.\n12. Выход.\n    " << endl;
	cin >> a;
	if (a == 1)
		add();
	else if (a == 2)
		sub();
	else if (a == 3)
		mul();
	else if (a == 4)
		div();
	/*else if (a == 5)
		mod();
	else if (a == 6)
		pow();
	else if (a == 7)
		rol();
	else if (a == 8)
		ror();
	else if (a == 9)
		not();
	else if (a == 10)
		and ();
	else if (a == 11)
		or ();*/
	else if (a == 12)
		return true;
	else
		error();

	return false;
}

void error()
{
	cout << "Ошибка!" << endl;
}

void add()
{
	int a, b, c;
		cout << "Введите первое слагаемое:" << endl;
		cin >> a;
		cout << "Введите второе слагаемое:" << endl;
		cin >> b;
		c = a + b;
		cout <<  c << endl;
}

void sub()
{
	int a, b, c;
	cout << "Введите уменьшаемое" << endl;
	cin >> a;
	cout << "Введите вычитаемое" << endl;
	cin >> b;
	c = a - b;
	cout << c << endl;
}

void mul()
{
	int a, b, c;
	cout << "Введите первый множитель" << endl;
	cin >> a;
	cout << "Введите второй множитель" << endl;
	cin >> b;
	c = a * b;
	cout << c;
}

void div()
{
	int a, b, c;
	cout << "Введите делимое" << endl;
	cin >> a;
	cout << "Введите делитель" << endl;
	cin >> b;
	c = a / b;
	cout << c;
}                          //Пока готовы только 4 функции. Остальные типы void взяты под комментарий

