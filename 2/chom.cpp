#include <iostream>
#include <string>
using namespace std;

int main() {
	char stop;
	string str;
	scanf("%[^\n]s", &stop);
	getline(cin,str);
	cout << stop << '+' << str;
	return 0;
}