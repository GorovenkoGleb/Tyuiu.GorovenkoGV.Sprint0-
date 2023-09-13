#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.GorovenkoGV.Sprint0.Task5.LibV3/Tyuiu.GorovenkoGV.Sprint0.Task5.LibV3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5V3
{
	TEST_CLASS(UnitTest5V3)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			// Init
			ISprint0Task5* serviceV3 = new ServiceV3();
			float a = 5.45;
			float b = 2.5;
			float c = 3;
			float d;

			// run
			d = serviceV3->Zadacha(a, b, c);

			// Valid
			Assert::AreEqual(10.95f, d);
		};
	};
};