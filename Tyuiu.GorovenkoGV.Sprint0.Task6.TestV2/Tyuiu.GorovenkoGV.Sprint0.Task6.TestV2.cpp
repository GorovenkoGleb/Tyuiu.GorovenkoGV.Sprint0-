#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task6.Lib/Tyuiu.GorovenkoGV.Sprint0.Task6.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5V2
{
	TEST_CLASS(UnitTest5V2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			// Init
			ISprint0Task6* serviceV2 = new ServiceV2();
			float a;
			int b;
			int c = 5;
			int d = 6;
			int i;


			// run
			i = serviceV2->Calculate(c, d);

		}
	};
}
