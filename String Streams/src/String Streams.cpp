#include <iostream>
#include <sstream>

using namespace std;

int main() {
	string name = "Pavel";
	int age = 23;
	stringstream ss;
	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;
	string info = ss.str();
	cout << info << endl; 
	//string info = "Name: " + name + "; Age: " + age;
	//cout << info << endl;
	return 0;
}
