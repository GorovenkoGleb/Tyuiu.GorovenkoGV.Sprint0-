#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task6.Lib/Tyuiu.GorovenkoGV.Sprint0.Task6.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5V1
{
	TEST_CLASS(UnitTest5V1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task6* serviceV1 = new ServiceV1();
			float a;
			int b;
			int c = 3;
			int d = 6;
			int i;
			

			// run
			i = serviceV1->Calculate(c, d);

			
		}
	};
}