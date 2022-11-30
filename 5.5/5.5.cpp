#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.05/Lab5.05.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My55
{
	TEST_CLASS(My55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			int depth = 0;
			a = Function(1, 6, 1, depth);
			Assert::AreEqual(a, 2);
		}
	};
}
