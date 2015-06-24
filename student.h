#ifndef STUDENT
#define STUDENT

#include <string>

class student
{
public:
    student(const std::string &name, long long number,
            int chinese, int math, int english);

    double getAverageScore() const;
    int getTotalScore() const;

    int getChineseScore() const;
    std::string getStudentName() const;
    long long getStudentNumber() const;
    int getMathScore() const;
    int getEnglishScore() const;

private:
    std::string studentName;
    long long studentNumber;

    int ChineseScore;
    int MathScore;
    int EnglishScore;

    double averageScore;
    int totalScore;
};


#endif // STUDENT

