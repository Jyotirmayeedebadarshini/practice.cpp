#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cout<<"enter a decimal:";
	cin>>n;
	int binary = 0;
	int rem, i = 1;
	
	 while (n!=0)
	 {
	 	rem = n%2;
	 	n = n/2;
	 	binary = binary+(rem*i);
	 	i = i*10;
	 }
	 cout<<"the corresponding binary number is:"<<binary;
	return 0;
}
