#include "studentfactory.h"
using namespace std;

studentFactory *studentFactory::Instance()
{
    if (_instance == 0)
        _instance = new studentFactory;

    return _instance;
}

studentFactory *studentFactory::_instance = 0;

student *studentFactory::studentFactory::makeStudent
    (const string &name, long long number, int chinese, int math, int english)
{
    return new student(name, number, chinese, math, english);
}
