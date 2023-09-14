// Tyuiu.GorovenkoGV.Sprint0.Task7.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class ServiceV4 :public ISprint0Task7
{

	//Inherited via ISprint0Task5
	virtual bool Rezalt(int num, int n) override
	{
		int a = num / 100000;
		int b = (num / 10000) % 10;
		int c = (num / 1000) % 10;
		int d = (num / 100) % 10;
		int e = (num / 10) % 10;
		int f = num / 10;
		
		return (a == n || b == n || c == n || d == n || e == n || f == n); //решение
	}
};
class ServiceV5 :public ISprint0Task7
{

	//Inherited via ISprint0Task5
	virtual bool Rezalt(int num, int n) override
	{
		int a = num / 1000000;
		int b = (num / 100000) % 10;
		int c = (num / 10000) % 10;
		int d = (num / 1000) % 10;
		int e = (num / 100) % 10;
		int f = (num / 10) % 10;
		int g = num / 10;

		return (a == n || b == n || c == n || d == n || e == n || f == n || g == n); //решение
	}
};