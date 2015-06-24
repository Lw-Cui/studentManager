#include <iostream>
#include <iomanip>
#include <fstream>
#include "class.h"
#include "algorithm.h"
#include "studentfactory.h"

using namespace std;

void printAnswer(Con &ans)
{
    for (Con::iterator ite = ans.begin(); ite != ans.end(); ite++) {
        cout << setw(13) << std::left << (*ite)->getStudentName()
             << setw(15) << std::left << (*ite)->getStudentNumber()
             << setw(8) << std::left << (*ite)->getChineseScore()
             << setw(8) << std::left << (*ite)->getMathScore()
             << setw(8) << std::left << (*ite)->getEnglishScore() << endl;
    }
}

int main()
{
    Class ClassOne;
    ifstream read("studentList");

    string name;
    long long number;
    int chinese, math, english;

    while (read >> name >> number >> chinese >> math >> english)
        ClassOne.addStudent(studentFactory::Instance()->makeStudent(name, number, chinese, math, english));

    cout << "=================STUDENT MANAGER================\n\n" << endl;

    ClassOne.setAlgoritm(new TotalScoreRank());
    Con ans = ClassOne.getAlgorithmResult();
    printAnswer(ans);

    return 0;
}
