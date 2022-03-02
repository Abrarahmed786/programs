#include <iostream>
using namespace std;

int main() {
  //Input as number
	int num;
  //Init
	int fact = 1;
	cin>>num;
  //If input is 0 it'll display factorial as 1
	while(num!=0){
	    fact = fact*num;
	    num = num-1;
	}
  //Output of the code
	cout <<"Factorial of this number is\n"<< fact;
	return 0;
}
