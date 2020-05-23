#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab5_OOP\Repository.h"
#include <assert.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab5Test
{
	TEST_CLASS(Lab5Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto repo = new Repository();
			repo->add_film("Spider-Man", "action", 2001, 10, "https://www.youtube.com");
			assert(repo->exists_film("Spider-Man", 2001) == true);
			repo->delete_film("Spider-Man", 2001);
			assert(repo->exists_film("Spider-Man", 2001) == false);
		}
	};
}
