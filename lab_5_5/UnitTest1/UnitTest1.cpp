#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double bn;
			int d;
			double c = F(0, 0, 0, bn = 0, d = 0);
			Assert::AreEqual(c, 0.);
		}
	};
}
