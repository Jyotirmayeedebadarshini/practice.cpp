#include <iostream>
using namespace std;

int main() {
	int n,i,sum;
cout<<"enter n:";
cin>>n;
i=0; sum=0;
while (i<=n)
{
sum=sum+i;
i=i+1;
}
cout<<"sum of the numbers is:"<<sum;
	return 0;
}
