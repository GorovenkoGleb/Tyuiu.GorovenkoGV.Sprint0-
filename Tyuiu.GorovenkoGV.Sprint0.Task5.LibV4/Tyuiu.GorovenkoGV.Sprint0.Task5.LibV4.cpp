// Tyuiu.GorovenkoGV.Sprint0.Task5.LibV4.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ServiceV4 :public ISprint0Task5
{

	//Inherited via ISprint0Task5
	virtual float Zadacha(float a, float b, float c)
	{
		return (2 * a) * (b / 100) * c; //решение
	};
};
