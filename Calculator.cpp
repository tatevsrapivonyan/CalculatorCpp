#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<char> s_nums = { '0','1','2','3','4','5','6','7','8','9' };
	string digit1;
	string digit2;
	int num1 = -1;
	int num2 = -1;
	char operation = ' ';
	while (true) {
		cout << "Enter spalled-out values:" << endl;
		cin >> digit1 >> digit2;
		for (char x : s_nums) {
			switch (x) {
			case('1'):
				if ((digit1 == "one" || digit1 == "1") && (digit2 == "one" || digit2 == "1")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "one" || digit1 == "1") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "one" || digit2 == "1") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('2'):
				if ((digit1 == "two" || digit1 == "2") && (digit2 == "two" || digit2 == "2")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "two" || digit1 == "2") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "two" || digit2 == "2") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('3'):
				if ((digit2 == "three" || digit2 == "3") && (digit1 == "three" || digit1 == "3")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "three" || digit1 == "3") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "three" || digit1 == "3") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('4'):
				if ((digit2 == "four" || digit2 == "4") && (digit1 == "four" || digit1 == "4")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "four" || digit1 == "4") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "four" || digit2 == "4") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('5'):
				if ((digit2 == "five" || digit2 == "5") && (digit1 == "five" || digit1 == "5")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "five" || digit1 == "5") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "five" || digit2 == "5") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('6'):
				if ((digit2 == "six" || digit2 == "6") && (digit1 == "six" || digit1 == "6")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "six" || digit1 == "6") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "six" || digit2 == "6") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('7'):
				if ((digit2 == "seven" || digit2 == "7") && (digit1 == "seven" || digit1 == "7")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "seven" || digit1 == "7") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "seven" || digit2 == "7") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('8'):
				if ((digit2 == "eight" || digit2 == "8") && (digit1 == "eight" || digit1 == "8")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "eight" || digit1 == "8") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "eight" || digit2 == "8") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('9'):
				if ((digit2 == "nine" || digit2 == "9") && (digit1 == "nine" || digit1 == "9")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "nine" || digit1 == "9") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "nine" || digit2 == "9") {
							num2 = x - '0';
						}
					}
				};
				break;
			case('0'):
				if ((digit2 == "zero" || digit2 == "0") && (digit1 == "zero" || digit1 == "0")) {
					num1 = x - '0';
					num2 = x - '0';
				}
				else {
					if (digit1 == "zero" || digit1 == "0") {
						num1 = x - '0';
					}
					else {
						if (digit2 == "zero" || digit2 == "0") {
							num2 = x - '0';
						}
					}
				};
				break;
			default:
				cout << "Wrong!" << endl;
				break;
			}
		}
		if (num1 > -1 && num2 > -1) {
			cout << "Please enter opereation" << endl;
			cin >> operation;
			if (operation == '+') {
				cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			}
			if (operation == '-') {
				cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			}
			if (operation == '*') {
				cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			}
			if (operation == '/') {
				cout << num1 << " / " << num2 << " = " << double(num1) / double(num2) << endl;
			}
			num1 = -1;
			num2 = -1;
		}
		else {
			cout << "Probably you enter not a number!" << endl;
			break;
		}
	}
}