#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n,fd,ld,newnum,p,digit=0;
    cout<<"enter a number:";
cin>>n;
int num=n;
while (n>0)
{
n=n/10;
digit++;
}
p=pow(10 , (digit-1));
fd=num/p;
ld=num%10;
num=num-(fd*p);
num=num/10;
newnum=ld*p+num*10+fd;
cout<<"the new number is:"<<newnum;
	return 0;
}
