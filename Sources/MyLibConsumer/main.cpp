
#include <MyLib/function.h>
#include <MyLib/fixture.h>

int main(int, char**)
{
    mylib::function();
    mylib::MyFixture fixture;
    fixture.setUp();

    return 0;
}

