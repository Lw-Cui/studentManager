#include "class.h"
#include "studentfactory.h"

using namespace std;

Class::Class()
{
}

void Class::addStudent(student *mate)
{
    classmate.push_back(mate);
}

void Class::setAlgoritm(strategy *point)
{
    compute = point;
}

Con Class::getAlgorithmResult()
{
    if (compute)
        return compute->SpecialStudent(classmate.begin(), classmate.end());
    else
        return Con();
}
