#include<iostream>
using namespace std;
int main()
{
	char n;
	cout << "Enter your score : " << endl;
	cin >> n ;
	cout << endl;
	if(n <= 100)
		cout << n <<" A ";
	else if(n <= 89)
		cout << n <<" B ";
	else if(n <= 79)
		cout << n <<" C ";
	else if(n <= 69)
		cout << n <<" D ";
	else cout << n <<" F ";
	cout << endl;
	return(0);
}