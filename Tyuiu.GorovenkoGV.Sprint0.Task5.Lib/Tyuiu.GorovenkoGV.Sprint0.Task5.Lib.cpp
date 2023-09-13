// Tyuiu.GorovenkoGV.Sprint0.Task5.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ServiceV1 :public ISprint0Task5
{

	//Inherited via ISprint0Task5
	virtual float Zadacha(float a, float b, float c) override
	{
		return a * b * c; //решение
	};
};