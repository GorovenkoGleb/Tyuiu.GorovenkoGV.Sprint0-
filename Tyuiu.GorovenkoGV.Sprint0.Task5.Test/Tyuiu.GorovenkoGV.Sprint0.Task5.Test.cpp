#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task5.Lib/Tyuiu.GorovenkoGV.Sprint0.Task5.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5V1
{
	TEST_CLASS(UnitTest5V1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint0Task5* serviceV1 = new ServiceV1();
			float a = 9;
			float b = 7.5;
			float c = 5;	
			float d;

			// run
			d = serviceV1->Zadacha(a, b, c);

			// Valid
			Assert::AreEqual(337.5f, d);
		}
	};
}