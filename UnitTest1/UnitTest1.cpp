#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>

extern "C" {
#include "..//Assignment 4/library.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Player1Wins_RockVsScissors)
		{
			const char* result = determine_winner("Rock", "Scissors");
			Assert::AreEqual("Player1", result);
		}
		TEST_METHOD(Player2Wins_ScissorsVsRock)
		{
			const char* result = determine_winner("Scissors", "Rock");
			Assert::AreEqual("Player2", result);
		}
		TEST_METHOD(Draw_RockVsScissors)
		{
			const char* result = determine_winner("Rock", "Rock");
			Assert::AreEqual("Draw", result);
		}
		TEST_METHOD(Invalid_Input)
		{
			const char* result = determine_winner("Rock", "MKBHD");
			Assert::AreEqual("Invalid", result);
		}
	
	};
}
