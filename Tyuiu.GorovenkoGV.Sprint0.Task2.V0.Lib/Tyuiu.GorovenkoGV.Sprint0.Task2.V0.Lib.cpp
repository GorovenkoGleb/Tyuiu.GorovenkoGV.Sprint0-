// Tyuiu.GorovenkoGV.Sprint0.Task2.V0.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


// TODO: Это пример библиотечной функции.
class ServiceV0 :public ISprint0Task2V0
{

	// Inherited via ISprint0Task2V0
	virtual int Add(int a, int b) override
	{
		return a + b; //решение
	}



	// Inherited via ISprint0Task2V1

	//virtual

};
class ServiceV1 :public ISprint0Task2V1
{

	// Inherited via ISprint0Task2V0
	virtual int Summ(float a, int b, int c) override
	{
		return a + b + c; //решение
	}



	// Inherited via ISprint0Task2V1

	//virtual

};