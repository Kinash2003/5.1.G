#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.G/Date.cpp"
#include "../5.1.G/Date.h"
#include "../5.1.G/Triad.cpp"
#include "../5.1.G/Triad.h"
#include "../5.1.G/Object.cpp"
#include "../5.1.G/Object.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51G
{
	TEST_CLASS(UnitTest51G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date a(9, 9), b(1, 1);
			Assert::AreEqual(a > b, true);

		}
	};
}
