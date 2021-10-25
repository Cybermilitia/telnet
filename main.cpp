#include "./main.hpp"



int main()
{
	string ip {"86.108.188.238"};
	int port{443};
	proxy *proxy1 = new proxy(ip,port);
	
	for(auto i:proxy1->get_workers())
			cout << endl <<"Alternative Servers: " << i << endl;

	delete proxy1;

	return 0;
	

}
