#include "student.h"

using namespace std;

student::student(const string &name, long long number, int chinese, int math, int english)
    :studentName(name), studentNumber(number),
      ChineseScore(chinese), MathScore(math), EnglishScore(english)
{
    totalScore = ChineseScore + MathScore + EnglishScore;
    averageScore = (double)totalScore / 3;
}

double student::getAverageScore() const
{
    return averageScore;
}

int student::getTotalScore() const
{
    return totalScore;
}

int student::getChineseScore() const
{
    return ChineseScore;
}

std::string student::getStudentName() const
{
    return studentName;
}

long long student::getStudentNumber() const
{
    return studentNumber;
}

int student::getMathScore() const
{
    return MathScore;
}

int student::getEnglishScore() const
{
    return EnglishScore;
}
