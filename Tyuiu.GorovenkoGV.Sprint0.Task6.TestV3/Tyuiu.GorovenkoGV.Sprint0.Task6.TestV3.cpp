#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task6.Lib/Tyuiu.GorovenkoGV.Sprint0.Task6.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest5V3
{
	TEST_CLASS(UnitTest5V3)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			// Init
			ISprint0Task6* serviceV3 = new ServiceV3();
			float a;
			int b;
			int c = 5;
			int d = 3;
			int i;


			// run
			i = serviceV3->Calculate(c, d);


		}
	};
}