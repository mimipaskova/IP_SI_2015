#include <iostream>

using namespace std;

struct FMI
{
    int typeOfExam;
    double scoreExam;
    bool hasDiplom;
    double scoreDiplom;
    double score();
};

double FMI::score()
{
    return scoreDiplom + scoreExam;
}

int main()
{
    FMI first = {2, 5.80, true, 6.00};
    cout<<first.typeOfExam<<endl;
    cout<<first.scoreExam<<endl;
    cout<<first.hasDiplom<<endl;
    cout<<first.scoreDiplom<<endl;
    cout<<first.score()<<endl;
    if(first.typeOfExam == 2 && first.scoreExam > 5.36 && first.hasDiplom && first.scoreDiplom > 5.23) {
        cout<< "Congrats";
    } else
    cout<< "We are sorry, you won't study at FMI";
    return 0;
}
