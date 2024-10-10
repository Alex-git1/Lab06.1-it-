#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06.1/Lab06.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p[] = { -2, 5, -1, 6, 0, 8, -3, 14, 10, -9, 4, -10, 7, -2, 13, -4, 12, -5, 2, 8, -8, 6, 0, 14 };
			const int size = 24;
			int count_element = 0;

			int sum = Sum(p, size, count_element);

			int expected_sum = 95; 
			int expected_count = 19;

			Assert::AreEqual(expected_sum, sum);
			Assert::AreEqual(expected_count, count_element);

		}
	};
}
