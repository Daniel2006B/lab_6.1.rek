#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-06.3.2/PR-06.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0632
{
	TEST_CLASS(UnitTest0632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 8;
			int S;
			int a[n];
			S = Sum (a, 8, 2);
			Assert::AreEqual(S, -858993464);
		}
	};
}
