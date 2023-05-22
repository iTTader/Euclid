#include <iostream>
#include <tchar.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
int x;
int y;
int m;
int n;
cin >> m;
cin >> n;
x = n;
	while ((m !=0) && (n != 0)){

		if (m > n) {
			m = m % n;
		}

		else{
			n = n % m;
		}
	}
y = x / (n + m);
cout << y;

system("pause");
}
