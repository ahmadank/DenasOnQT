#ifndef PROGRAMS_H
#define PROGRAMS_H
#include <vector>
#include <string>

using namespace std;


class Programs
{
public:
    Programs();
    string getProgram(int);
private:
    static vector<string> programsCollection;
};

#endif // PROGRAMS_H
