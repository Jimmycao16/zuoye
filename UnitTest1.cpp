#include "pch.h"
#include "CppUnitTest.h"
#include"../pch.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int nums[5] = { 1,-8,3,-2,7 };
			int Sums = 8;
			Assert::AreEqual(Sums, Maxarr(n, nums));
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 4;
			int nums[4] = { 7,-1,-6,-4 };
			int Sums = 7;
			Assert::AreEqual(Sums, Maxarr(n, nums));
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 8;
			int nums[8] = { 1, -5, 4, -8, -3, 1, 6, -3 };
			int Sums = 7;
			Assert::AreEqual(Sums, Maxarr(n, nums));
		}
		TEST_METHOD(TestMethod4)
		{
			int n = 3;
			int nums[3] = { 1, -1, 6 };
			int Sums = 6;
			Assert::AreEqual(Sums, Maxarr(n, nums));
		}
	};
}