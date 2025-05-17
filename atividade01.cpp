#include <iostream>
using namespace std;
int main(){
	int n1, n2;
	cout << "Qual o primeiro valor?\n";
	cin >> n1;
	cout << "Qual o segundo valor?\n";
	cin >> n2;
	if(n1>n2){
	cout << "O valor " <<n1<< " e maior que "<<n2<<endl;
	}
	else{
	cout << "O valor "<<n1<< " e menor que "<<n2<<endl;
	}
	return 0;
}
