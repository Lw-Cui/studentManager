#ifndef ALGORITHM
#define ALGORITHM

#include "student.h"
#include <vector>
typedef std::vector<student *> Con;
typedef Con::iterator Ite;

class algorithm
{
public:
    virtual Con SpecialStudent(Ite beg, Ite end,int Max, int Min) = 0;

protected:
    algorithm();
    void sort(Ite beg, Ite end);
};

class TotalScoreRank : public algorithm
{
public:
    Con SpecialStudent(Ite beg, Ite end, int, int);
};

class NoPassList : public algorithm
{
public:
    Con SpecialStudent(Ite beg, Ite end,int Max, int Min);
};

class upAverageList : public algorithm
{
public:
    Con SpecialStudent(Ite beg, Ite end,int Max, int Min);
};

class segmentList : public algorithm
{
public:
    Con SpecialStudent(Ite beg, Ite end,int Max, int Min);
};

#endif // ALGORITHM

