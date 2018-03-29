#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	int message;
	char i;
	string line;
	int count=0;

	cout << "Please enter a message:"<< endl;
	getline(cin, line);

	for (i=0; i < line.length(); i++){
		if (line[i] == 'b' || line[i] == 'B'){
			count++;
			if (count % 2==0){
				cout << "Stand";
				}
			
			else{
				cout << "Sit";
			}
		}
		else cout << line[i];
	}
			


	
	
	
	

	

	
	





	return 0;
}
