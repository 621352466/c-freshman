#include<iostream>
using namespace std;
int main() {
	//水仙花数是指一个3位数  他的每个位上的数字的三次幂之和等于它本身 例如153
	//利用do..while求出所有水仙花数	
	//1.print all 3
	int num = 100;

	do
	{
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a * a * a + b * b * b + c * c * c == num)

		{
			cout << num << endl;
		}
		
		
		num++;
		

	} while (num < 1000);





	system("pause");

	return 0;
}