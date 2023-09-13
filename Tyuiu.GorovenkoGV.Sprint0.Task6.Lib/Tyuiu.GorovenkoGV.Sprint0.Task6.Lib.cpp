// Tyuiu.GorovenkoGV.Sprint0.Task6.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ServiceV1 :public ISprint0Task6
{

	//Inherited via ISprint0Task5
	virtual int Calculate(float a, int b) override
	{
		return a/3/b+6; //решение
	}
};
class ServiceV2 :public ISprint0Task6
{

	//Inherited via ISprint0Task5
	virtual int Calculate(float a, int b) override
	{
		return a * b / (5 + a) + 6; //решение
	}
};
class ServiceV3 :public ISprint0Task6
{

	//Inherited via ISprint0Task5
	virtual int Calculate(float a, int b) override
	{
		return (5 + (a * b / 3)); //решение
	}
};
class ServiceV4 :public ISprint0Task6
{

	//Inherited via ISprint0Task5
	virtual int Calculate(float a, int b) override
	{
		return (5 * a) / (7 + b); //решение
	}
};
class ServiceV5 :public ISprint0Task6
{

	//Inherited via ISprint0Task5
	virtual int Calculate(float a, int b) override
	{
		return (a * 8) / b * 2; //решение
	}
};