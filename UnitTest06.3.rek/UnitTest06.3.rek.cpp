#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-06.3.2/PR-06.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest063rek
{
	TEST_CLASS(UnitTest063rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 8;
			int S;
			int a[n] = { 1,2,3,4,5,6,7,8 };
			S = Sum(a, 4, 0);
			Assert::AreEqual(S, 10);

		}
	};
}
