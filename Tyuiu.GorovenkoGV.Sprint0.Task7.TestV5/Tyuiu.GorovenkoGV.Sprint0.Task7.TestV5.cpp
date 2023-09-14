#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task7.Lib/Tyuiu.GorovenkoGV.Sprint0.Task7.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7V5
{
	TEST_CLASS(UnitTest7V5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task7* serviceV5 = new ServiceV5();
			int chislo = 0;
			int n = 0;
			int z;


			// run
			z = serviceV5->Rezalt(n, chislo);


		}
	};
}