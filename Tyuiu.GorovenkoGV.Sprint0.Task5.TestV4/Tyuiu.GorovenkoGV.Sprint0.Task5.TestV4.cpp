#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task5.LibV4/Tyuiu.GorovenkoGV.Sprint0.Task5.LibV4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5V4
{
	TEST_CLASS(UnitTest5V4)
	{
	public:

		TEST_METHOD(TestMethod4)
		{
			// Init
			ISprint0Task5* serviceV4 = new ServiceV4();
			float a = 67;
			float b = 8.5;
			float c = 6.5;
			float d;

			// run
			d = serviceV4->Zadacha(a, b, c);

			// Valid
			Assert::AreEqual(74.035f, d);
		}
	};
}