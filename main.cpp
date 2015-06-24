#include <iostream>
#include <iomanip>
#include <fstream>
#include "class.h"
#include "strategy.h"
#include "studentfactory.h"

using namespace std;

void printAnswer(Con &ans)
{
    for (Con::iterator ite = ans.begin(); ite != ans.end(); ite++) {
        cout << setw(13) << std::left << (*ite)->getStudentName()
             << setw(15) << std::left << (*ite)->getStudentNumber()
             << setw(8) << std::left << (*ite)->getChineseScore()
             << setw(8) << std::left << (*ite)->getMathScore()
             << setw(8) << std::left << (*ite)->getEnglishScore()
             << setw(8) << std::left << (*ite)->getTotalScore()
             << setw(8) << setprecision(1) << fixed
             << std::left << (*ite)->getAverageScore() << endl;
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

    cout << "=================STUDENT MANAGER================\n" << endl;

    ClassOne.setAlgoritm(new TotalScoreRank());
    Con ans = ClassOne.getAlgorithmResult();
    printAnswer(ans);

    cout << endl << "---------------No pass students--------------------" << endl;
    ans.clear();

    ClassOne.setAlgoritm(new NoPassList(90));
    ans = ClassOne.getAlgorithmResult();
    printAnswer(ans);

    cout << endl << "---------------Up average score students--------------------" << endl;
    ans.clear();

    ClassOne.setAlgoritm(new upAverageList(ClassOne.getAverageScore()));
    ans = ClassOne.getAlgorithmResult();
    printAnswer(ans);

    cout << endl;
    return 0;
}
