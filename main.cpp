#include <iostream>
#include <string>
using namespace std;

void strings();
void variables();
void casting();
void pointers();

int main()
{
	
	// variables();
	// casting();
	// pointers();
	// strings();

}

void numbers() {
	
}
void strings() {	
	string greeting = "Hello";
	//      indexes:   01234
	cout << greeting.length();
	cout << greeting[0] << endl;
	cout << greeting.find("llo") << endl;
	cout << greeting.substr(2) << endl;
	cout << greeting.substr(1, 3) << endl;
}

void pointers() {

	int num = 10;
	// cout << &num << endl;

	// int *pNum = &num;
	// cout << pNum << endl;
	// cout << *pNum << endl;
	printf("%i \n", num);
}

void casting() {
	cout <<  (int)3.14 << endl;
	cout << (double)3 / 2 << endl;
	cout << (double)6 / 3 << endl;
}

void printing() {
	cout << "Hello" << endl;
	cout << "World";
	cout << "!" << endl;
}

void variables() {
	string name = "Mike";    // string of characters, not primitive
	char testGrade = 'A';    // single 8-bit character.

	// you can make them unsigned by adding "unsigned" prefix
	short age0 = 10;         // must be at least 16-bit signed integer
	int age1 = 20;           // must be at least 16-bit signed integer
	long age2 = 30;          // must be at least 32-bit signed integer
	long long age3 = 40;     // must be at least 64-bit signed integer

	float gpa0 = 2.5f;       // single precision floating point
	double gpa1 = 3.5;       // double precision floating point
	long double gpa2 = 3.5;  // extended precision floating point

	bool isTall;             // 1 bit -> true/false
	isTall = true;

	name = "John";

	cout << "Your name is " << name << endl;	
}