#include <iostream>

int say_hello(std::string);

int main(int argc, char** argv){
	std::string whomever = "";
	if (argc != 2) {
		std::cout << "to whom do you want to say hello: ";
		std::cin >> whomever;
	} else {
		whomever = std::string(argv[1]);
	}

	say_hello(whomever);
	return 0;
}

int say_hello(std::string whom){
	std::cout<<"hello "<<whom<<"!"<<std::endl;
	return 0;
}
