﻿// Tyuiu.GorovenkoGV.Sprint0.Task5V3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.GorovenkoGV.Sprint0.Task5.LibV3/Tyuiu.GorovenkoGV.Sprint0.Task5.LibV3.cpp"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ISprint0Task5* serviceV3 = new ServiceV3();
	cout << "Горовенко\t" << "Глеб\t" << "Васильевич\n";
	cout << endl;
	cout << "Task5.V3\n";
	cout << "Вычисляем стоимость всей покупки, если Иван купил конфеты  и печенье, а его сестра только конфеты\n";
	cout << "Укажите Цену конфет(Иван)\n";
	string a;
	cin >> a;
	cout << "Укажите Цену кофет(Сестра)\n";
	string b;
	cin >> b;
	cout << "Укажите Цену печенья\n";
	string c;
	cin >> c;
	cout << "Результат = " << serviceV3->Zadacha(5.45, 2.5, 3);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
