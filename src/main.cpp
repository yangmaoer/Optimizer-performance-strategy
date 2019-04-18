#include <iostream>

using namespace std;

namespace testing{

class Object
{
	public:
		Object();
		~Object();
	
	private:
		int mType;
		int mId;
};

};

int main(int argc, char *argv[])
{
	std::cout<<"Hello World!"<<std::endl;
	
	return 0;
}