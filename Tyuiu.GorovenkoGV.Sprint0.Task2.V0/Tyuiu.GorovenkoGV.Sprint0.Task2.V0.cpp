// Tyuiu.GorovenkoGV.Sprint0.Task2.V0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "../Tyuiu.GorovenkoGV.Sprint0.Task2.V0.Lib/Tyuiu.GorovenkoGV.Sprint0.Task2.V0.Lib.cpp"
using namespace std;
int main()
{
	ISprint0Task2V0* serviceV0 = new ServiceV0();
	setlocale(LC_ALL, "Russian");
	cout << "Горовенко\t" << "Глеб\t" << "Васильевич\n";
	cout << endl;
	cout << "Task2.V0\n";
	cout << "Summ = a + b\n";
	cout << "Rezult = " << serviceV0->Add(3, 4);
	cout << endl;

	cout << endl;
	cout << endl;

	ISprint0Task2V1* serviceV1 = new ServiceV1();
	setlocale(LC_ALL, "Russian");
	cout << "Горовенко\t" << "Глеб\t" << "Васильевич\n";
	cout << endl;
	cout << "Task2.V1\n";
	cout << "Summ = a + b + c\n";
	cout << "Rezult = " << serviceV1->Summ(6.5, 4, 7);
	cout << endl;

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
