#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

bool Guess(int number){static int target = -1;

srand(time(NULL));
if(target==-1){
	target=rand()%100+1;
}
if(number == target)
	return truc;
	return false;
}

int main()
{
	int guess;
	do{
		std::cin >> guess;
	}while(!Guess(guess));
	return 0;
}