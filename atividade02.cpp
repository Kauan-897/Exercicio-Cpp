#include <iostream>
using namespace std;
int main(){
	char turno;
	cout << "Em qual turno voce estuda?(m/n)\n";
	cin >> turno;
	if(turno=='m'){
	cout << "Bom dia!"<<endl;
	}
	else{
	cout << "Boa noite!"<<endl;
	}
	return 0;
}
