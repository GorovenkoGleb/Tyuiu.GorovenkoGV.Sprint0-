#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task7.Lib/Tyuiu.GorovenkoGV.Sprint0.Task7.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7V4
{
	TEST_CLASS(UnitTest7V4)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task7* serviceV4 = new ServiceV4();
			int chislo = 0;
			int n = 0;
			int p;


			// run
			p = serviceV4->Rezalt(n, chislo);


		}
	};
}