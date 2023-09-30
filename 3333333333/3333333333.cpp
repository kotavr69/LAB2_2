/*
* Дано трёхзначное число. Получить двухзначное число,
которое содержит вначале его последнюю цифру,
а затем – его среднюю цифру(пример: 123 -> 32).
*/
/*
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592653589793;

int main() {
	setlocale(LC_ALL, "ru");

	int r1;
	int r2;
	cout << "Введите радиус круга 1: ";
	cin >> r1;
	cout << "Введите радиус круга 2: ";
	cin >> r2;
	double s1, s2, s3;
	s1 = PI * pow(r1, 2);
	s2 = PI * pow(r2, 2);
	s3 = s1 - s2;
	cout << "Площадь первого круга = " << s1 << endl;
	cout << "Площадь второго круга = " << s2 << endl;
	cout << "Площадь кольца = " << s3 << endl;
}
*/





/*
*1.	Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2).
Найти площадь этих кругов S1 и S2, а также площадь S3 кольца,
образованного этими концентрическими окружностями. S = ПR^2.
*/
/*
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int number;
	cout << "Введите трёхзначное число: ";
	cin >> number;
	int number2;
	int d1, d2;
	d1 = number % 10;
	d2 = (number / 10) % 10;
	number2 = d1 * 10 + d2;
	cout << "Получено двухзначное число: " << number2 << endl;
}
*/
