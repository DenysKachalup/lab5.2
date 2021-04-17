#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/Perev.h"
#include "../lab5.2/Perev.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Perev a(3, 4);
			Assert::AreEqual(a.Radius(), 5.0);
		}
	};
}
