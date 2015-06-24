#include "algorithm.h"
#include "student.h"
#include <utility>
using namespace std;

algorithm::algorithm()
{

}

void algorithm::sort(Ite beg, Ite end)
{
    if (beg >= end)
        return;

    Ite p = beg;
    for (Ite i = beg + 1; i != end; i++)
        if ((*i)->getTotalScore() < (*p)->getTotalScore()) {
            swap(*i, *p);
            p++;
        }

    swap(*p, *beg);
    sort(beg, p);
    sort(p + 1, end);
}

Con TotalScoreRank::SpecialStudent(Ite beg, Ite end, int, int)
{
    Con result(beg, end);
    sort(result.begin(), result.end());
    return result;
}
