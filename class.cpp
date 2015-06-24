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

double Class::getAverageScore()
{
    int total = 0;
    for (Ite i = classmate.begin(); i != classmate.end(); i++)
        total += (*i)->getTotalScore();

    return (double)total / classmate.size() / 3;
}
