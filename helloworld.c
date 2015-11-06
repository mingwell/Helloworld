#include <stdio.h>
#include <iostream>
using namespace std;
void print()
{
	cout << "this is print function" << endl;
	return;
}
int add( int a, int b)
{
	return a+b;

}
int sub(int a, int b)
{
	return a-b;
}
int multiply(int a, int b)
{
	return a*b;
}
bool big(int a, int b)
{
	return a>b;
}
bool samll(int a, int b)
{	
	return a < b;
}
int main(int argc, char *argv[])
{
	int i = 0;
	printf("it is a long time no see\n");
	for ( i = 0; i < 10; ++i)
	{
		printf("helllo git\n");
	}
	return 0;
}
