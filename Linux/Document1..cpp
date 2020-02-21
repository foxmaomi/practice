ls
cd ocde
cd 20winter
mkdir test20
cd test2
sudo yum install gcc-c++
touch test.cc
ls > Makefile
vim Makefile
test:test.cc
	g++ -o $@ $^
.PHONY:clean
clean:
	rm -f test
vim test.cc
#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	pid_t id = fork();
	if(id == 0){//child
		int i = 0;
		while(i < 5){
			cout << "child running, pid:   " << getpid() << endl;
			sleep(1);
			i++;
		}
		exit(1);
	}
	else if(id > 0){//father
	int status = 0;
	while(1){
		
		pid_t ret = waitpid(id, &status, WNOHANG);
		if(ret == 0){
			cout << "father do other thing...  " <<endl;
			sleep(1);
			contiue;
		}
		else{
			break;
		}
		if(ret > 0){
			if(WIFEXITED(status)){
				cout<<"child exit normal, exit code is: "<<WEXITSTATUS(status)<<endl;
			}else{
				cout<<"child error !"<<endl;
			}
		}
		else{
			cout<< "waitpid error ! \n"<<endl;
		}
	}
	else{
		
	}
}



