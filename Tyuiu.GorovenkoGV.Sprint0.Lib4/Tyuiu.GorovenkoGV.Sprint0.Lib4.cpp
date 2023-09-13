// Tyuiu.GorovenkoGV.Sprint0.Lib4.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ServiceV0 :public ISprint0Task4
{

	//Inherited via ISprint0Task4
	virtual int Calculate(int a, int b, int c, int d)
	{
		return a * b + c * d; //решение
	};
};
class ServiceV1 :public ISprint0Task4
{

	//Inherited via ISprint0Task4
	virtual int Calculate(int a, int b, int c, int d)
	{
		return a - b / c * d; //решение
	};
};