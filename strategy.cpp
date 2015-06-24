#include <utility>
#include "strategy.h"
#include "student.h"
using namespace std;

strategy::strategy()
{

}

void strategy::sort(Ite beg, Ite end)
{
    if (beg >= end)
        return;

    Ite p = beg;
    for (Ite i = beg + 1; i < end; i++)
        if ((*i)->getTotalScore() > (*beg)->getTotalScore()) {
            swap(*i, *++p);
        }

    swap(*p, *beg);
    sort(beg, p);
    sort(p + 1, end);
}

Con TotalScoreRank::SpecialStudent(Ite beg, Ite end)
{
    Con result(beg, end);
    sort(result.begin(), result.end());
    return result;
}


NoPassList::NoPassList(int line)
    :passLine(line)
{

}

Con NoPassList::SpecialStudent(Ite beg, Ite end)
{
    Con result;
    for (Ite i = beg; i != end; i++)
        if ((*i)->getChineseScore() < passLine || (*i)->getMathScore() <passLine ||
                (*i)->getEnglishScore() < passLine)
            result.push_back(*i);

    sort(result.begin(), result.end());
    return result;
}


upAverageList::upAverageList(double score)
    :average(score)
{

}

Con upAverageList::SpecialStudent(Ite beg, Ite end)
{
    Con result;

    for (Ite i = beg; i != end; i++)
        if ((*i)->getAverageScore() >= average)
            result.push_back(*i);

    sort(result.begin(), result.end());
    return result;
}
