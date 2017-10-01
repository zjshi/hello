#include <chrono>
#include <iostream>

int say_hello(std::string);
int say_datetime(void);

int main(int argc, char** argv){
	std::string whomever = "";
	if (argc != 2) {
		std::cout << "to whom do you want to say hello: ";
		std::cin >> whomever;
	} else {
		whomever = std::string(argv[1]);
	}
	
	say_hello(whomever);
	say_datetime();
	return 0;
}

int say_hello(std::string whom){
	std::cout<<"hello "<<whom<<"!"<<std::endl;
	return 0;
}

int say_datetime(){
	std::chrono::time_point<std::chrono::system_clock> s_now;
	
	s_now = std::chrono::system_clock::now();
	std::time_t t_now = std::chrono::system_clock::to_time_t(s_now);

	std::cout<<"now is "<<std::ctime(&t_now)<<std::endl;

	return 0;	
}

