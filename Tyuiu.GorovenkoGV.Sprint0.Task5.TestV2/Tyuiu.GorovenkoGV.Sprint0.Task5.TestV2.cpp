#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task5.LibV2/Tyuiu.GorovenkoGV.Sprint0.Task5.LibV2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5V2
{
	TEST_CLASS(UnitTest5V2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			// Init
			ISprint0Task5* serviceV2 = new ServiceV2();
			float a = 2.75;
			float b = 0.5;
			float c = 7;
			float d;

			// run
			d = serviceV2->Zadacha(a, b, c);

			// Valid
			Assert::AreEqual(22.75f, d);
		}
	};
}
