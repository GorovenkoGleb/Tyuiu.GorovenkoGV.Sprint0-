#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Lib4/Tyuiu.GorovenkoGV.Sprint0.Lib4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4V0
{
	TEST_CLASS(UnitTest4V0)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task4* service = new ServiceV0();
			int a = 2;
			int b = 3;
			int c = 7;
			int d = 4;
			int i;

			// run
			i = service->Calculate(a, b, c, d);

			// Valid
			Assert::AreEqual(34, i);
		}
	};
}
namespace UnitTest4V1
{
	TEST_CLASS(UnitTest4V1)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			// Init
			ISprint0Task4* serviceV1 = new ServiceV1();
			int a = 25;
			int b = 8;
			int c = 4;
			int d = 9;
			int i;

			// run
			i = serviceV1->Calculate(a, b, c, d);

			// Valid
			Assert::AreEqual(7, i);
		}
	};
}