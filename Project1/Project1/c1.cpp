
#include <stdio.h>
#include <time.h>
#include <random>

/*
	This file is for training your coding ability

	try to solve all the questions!

*/
int main()
{
	int a = 0;
	/* try to assign the value of a to 5 in the below lines*/




	/*******************************************************/
	int b = 0;
	/* try to assign the value of b to two times of a in the below lines*/





	/********************************************************************/
	/* try to print the value of a+b in the below lines*/





	/***************************************************/
	srand(time(0));
	int randomVaule = rand() % 3;
	/* try to print the value in the below lines, which need to satisfy these requirements:

		if [randomValue] is 1, print the value of (a+b)*1
		if [randomValue] is 2, print the value of (a-b)*2
		if [randomValue] is 3, print the value of a*b+randomValue and the value of [randomValue]
	*/








	/******************************************************************************************/
	int sum = 0;
	/* try to write a function that could return the sum of given params in the function area,
	   and call this function to sum a, b and randomValue, assign the result to variable sum in
	   the below lines
	*/






	/******************************************************************************************/
	/*	the codes below has some bugs and problems, remove the annotation and run the cpp file to see
		what problems will occur. try to solve these problems

		codes here:
	*/
	/*
		short list[5] = {
			1000     ,
			20000    ,
			400000   ,
			8000000  ,
			16000000 ,
		};
		for (int index = 0; index <= 5; index = index + 1)
		{
			printf("the no.%d number in the list is %d\n", index, list[index]);
		}
		return 0;
	*/
	/*
		the correct output should be:
		1000
		20000
		400000
		8000000
		16000000
	*************************************************************************************************/
	/* complete the tasks in N086_EPP2.pdf */








	/***************************************/
	return 0;
}

/*             function area            */
/*
	
	given a positive integer, return if it is a even number

	@param n the positive number
*/
bool isEven(int n)
{
	return 0;
}

/*
	return the value k that x^k <= y

	@param x the intenger number
	@param y the another intenger number
*/
int fakeLog(int x, int y)
{
	int index = 0;
	int res = x ^ index;
	while (res < y)
	{
		index++;
		res = x ^ index;
	}
	return index;
}

void test()
{

}




/****************************************/