#ifndef CLASS
#define CLASS

#include "student.h"
#include "strategy.h"
#include <vector>
typedef Con::iterator Ite;
const int INF = 1 << 30;

class Class
{
public:
    Class();
    void addStudent(student *mate);
    void setAlgoritm(strategy *point);
    Con getAlgorithmResult();

private:
    strategy *compute;
    Con classmate;
};


#endif // CLASS
