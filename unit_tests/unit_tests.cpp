#include "pch.h"
#include "CppUnitTest.h"
#include "../coding_platform_cpp/AddString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittests
{
	TEST_CLASS(unittests)
	{
	public:
		
		TEST_METHOD(concatString)
		{
			AddStrings myObj;
			string value = myObj.concatString("Hello", "World");
			string testval = "HelloWorld";
			Assert::AreEqual(testval, value);
		}
	};
}
