#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-6.3/PR-6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest063
{
	TEST_CLASS(UnitTest063)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 8;
			int S;
			int a[n] = {1,2,3,4,5};
			S = Sum(a, 2);
			Assert::AreEqual(S, 3);

		}
	};
}
