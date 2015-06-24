#ifndef CLASS
#define CLASS

#include "student.h"
#include "algorithm.h"
#include <vector>
typedef Con::iterator Ite;
const int INF = 1 << 30;

class Class
{
public:
    void addStudent(student *mate);
    void setAlgoritm(algorithm *point);
    Con getAlgorithmResult(int Max = INF, int Min = 0);

private:
    algorithm *compute;
    Con classmate;
};


#endif // CLASS
