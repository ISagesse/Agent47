#include <iostream>
#include <ctime>

using namespace std;

void PrintIntro(int Diffficulty)
{
	cout << " You are agent 47  \n";
	cout << " the best assassin the world has ever seen \n";
	cout << " Complete this level " << Diffficulty;
	cout << " challenges to view your first target  \n Good Luck Agent 47  \n";
}

bool PlayGame(int Difficulty)
{
	PrintIntro(Difficulty);

	cout << " \n Welcome Agent 47 This is your mission if you choose to accept \n" << endl;

	cout << " Please enter tthe right code to view the missons \n" << endl;

	//decleration
	const int CodeA = rand() % Difficulty + Difficulty;
	const int CodeB = rand() % Difficulty + Difficulty;
	const int CodeC = rand() % Difficulty + Difficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	//results of sum of product
	cout << " There are 3 numbers in the code" << endl;
	cout << " The code add-up to " << CodeSum << endl;
	cout << " The codes multiply to give " << CodeProduct << endl;

	//Store player guesses
	int GuessA, GuessB, GuessC;
	cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	//check if the player guess is correct
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		cout << "\n you win \n   next challenge \n\n\n";
		return true;
	}
	else
	{
		cout << "\n Wrong code, this device will self destruct in 10 sec \n  destroy!!!! please try again \n\n\n";
		return false;
	}

}

// this is the main function
int main()
{
	srand(time(NULL));

	int LevelDifficulty = 1;
	const int MaxDifficulty = 5;
	
	while (LevelDifficulty <= MaxDifficulty)
	{
		bool bCompletedLevel = PlayGame(LevelDifficulty);
		cin.clear(); //clear any errors
		cin.ignore(); //discard the buffers

		if (bCompletedLevel)
		{
			++LevelDifficulty;
		}
	}

	cout << "Your Target is ...... selfdesctruct";

  return 0;
}

