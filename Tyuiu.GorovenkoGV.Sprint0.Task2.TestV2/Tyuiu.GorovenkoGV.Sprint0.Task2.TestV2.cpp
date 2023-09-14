#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task2.V0.Lib/Tyuiu.GorovenkoGV.Sprint0.Task2.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			// Init
			ISprint0Task2V1* serviceV1 = new ServiceV1();
			int a = 6.5;
			int b = 4;
			int c = 7;
			int d;

			// run
			d = serviceV1->Summ(a, b, c);

			// Valid
			Assert::AreEqual(17, d);
		}
	};
}