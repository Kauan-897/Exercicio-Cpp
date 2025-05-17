#include <iostream>
using namespace std;
int main(){
	int n1, n2, n3;
	cout << "Qual o primeiro valor?\n";
	cin >> n1;
	cout << "Qual o segundo valor?\n";
	cin >> n2;
	cout << "Qual o terceiro valor?\n";
	cin >> n3;
	if(n1>=n2 && n1>=n3){
	cout << "O valor "<<n1<<" e o maior"<<endl;
	}
	else if(n2>=n1 && n2>=n3){
	cout << "O valor "<<n2<<" e o maior"<<endl;
	}
	else{
	cout << "O valor "<<n3<<" e o maior"<<endl;
	}
	return 0;
}

//&& é o operador lógico E/AND
