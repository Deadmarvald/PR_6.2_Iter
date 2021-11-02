#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2Iter/Lab_06_2_Iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT62Iter
{
	TEST_CLASS(UT62Iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 2;
			int a[k] = { 1, 2 };
			t = Max(a, k);
			Assert::AreEqual(2, t);
		}
	};
}
