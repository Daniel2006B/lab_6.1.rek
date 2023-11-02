#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-6.2/PR-6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062it
{
	TEST_CLASS(UnitTest062rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
			int res;
			res = Count(a, 15);
			Assert::AreEqual(res, 8);
		}
	};
}
