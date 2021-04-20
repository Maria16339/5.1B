#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.1B/5.1B/Point.h"
#include "C://Users/User/source/repos/5.1B/5.1B/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Point a(1, 1);
			int b = a.GetX();
			Assert::AreEqual(b, 1);
		}
	};
}