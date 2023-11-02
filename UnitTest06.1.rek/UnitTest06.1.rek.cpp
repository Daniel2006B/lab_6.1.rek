#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-06.1.rek/PR-06.1.rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest061rek
{
	TEST_CLASS(UnitTest061rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 2, 3, 4, 5 };
			int res;
			res = Sum(a, 5, 0);
			Assert::AreEqual(res, 9);
		}
	};
}
