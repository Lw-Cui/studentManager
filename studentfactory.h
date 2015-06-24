#ifndef STUDENTFACTORY
#define STUDENTFACTORY

#include "student.h"
#include <string>

class studentFactory
{
public:
    static studentFactory *Instance();
    student *makeStudent(const std::string &name, long long number, int chinese, int math, int english);

private:
    static studentFactory *_instance;
};

#endif // STUDENTFACTORY

