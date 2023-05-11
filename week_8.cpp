#include <iostream>

using namespace std;


	
bool isPrime(int num) {
	if (num == 0 || num == 1) return 0;
	for (int i = 2; i < num;i++) if (num % i == 0) return 0;
	return 1;
}
//task 2
void increment(int& main) {
	main++;
}

void increment(int& main, int up) {
	main += up;
}

//task 1

//int main(void) {
//	int arg;
//	bool check;
//	cout << "Enter number: ";
//	cin >> arg;
//	check = isPrime(arg);
//	cout<<arg << (check ? " - its Prime number":" - isnt Prime number")<<endl;
//	
//}

//	task 2
//int main(void) {
//	for (int i = 0; i <= 21; i++)
//		if (isPrime(i))
//			cout << i << " ";
//	cout << endl;
//	return 0;
//}

//task 3


int main() {
	int var = 0;
	for (int i = 0; i < 10; i++)
		if (i % 2)
			increment(var);
		else
			increment(var, i);
	cout << var << endl;
	return 0;
}
