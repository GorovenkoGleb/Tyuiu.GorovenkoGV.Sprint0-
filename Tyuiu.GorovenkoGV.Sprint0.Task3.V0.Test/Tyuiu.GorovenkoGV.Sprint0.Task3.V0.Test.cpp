#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task3.V0.Lib/Tyuiu.GorovenkoGV.Sprint0.Task3.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task3* data = new Service1();
			int a = 3;
			int b = 4;
			int c = -7;
			int d;

			// run
			d = data->SummV3(a, b, c);

			// Valid
			Assert::AreEqual(0, d);
		}
	};
}
