#include "class.h"
#include "studentfactory.h"

using namespace std;

void Class::addStudent(student *mate)
{
    classmate.push_back(mate);
}

void Class::setAlgoritm(algorithm *point)
{
    compute = point;
}

Con Class::getAlgorithmResult(int Max, int Min)
{
    if (compute)
        return compute->SpecialStudent(classmate.begin(), classmate.end(), Max, Min);
    else
        return Con();
}
