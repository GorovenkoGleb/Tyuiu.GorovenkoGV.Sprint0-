#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task5.LibV5/Tyuiu.GorovenkoGV.Sprint0.Task5.LibV5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5V5
{
	TEST_CLASS(UnitTest5V5)
	{
	public:

		TEST_METHOD(TestMethod5)
		{
			// Init
			ISprint0Task5* serviceV5 = new ServiceV5();
			float a = 4;
			float b = 5;
			float c = 6;
			int d;

			// run
			d = serviceV5->Zadacha(a, b, c);

			// Valid
			Assert::AreEqual(25, d);
		}
	};
}