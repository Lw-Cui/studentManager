#ifndef ALGORITHM
#define ALGORITHM

#include "student.h"
#include <vector>
typedef std::vector<student *> Con;
typedef Con::iterator Ite;

class strategy
{
public:
    virtual Con SpecialStudent(Ite beg, Ite end) = 0;

protected:
    strategy();
    void sort(Ite beg, Ite end);
};

class TotalScoreRank : public strategy
{
public:
    Con SpecialStudent(Ite beg, Ite end);
};

class NoPassList : public strategy
{
public:
    NoPassList(int line);
    Con SpecialStudent(Ite beg, Ite end);

protected:
    int passLine;
};

class upAverageList : public strategy
{
public:
    upAverageList(double score);
    Con SpecialStudent(Ite beg, Ite end);

protected:
    double average;
};

class segmentList : public strategy
{
public:
    Con SpecialStudent(Ite beg, Ite end);
};

#endif // ALGORITHM
