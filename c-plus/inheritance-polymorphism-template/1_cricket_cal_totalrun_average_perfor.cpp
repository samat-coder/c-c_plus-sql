#include <iostream>
using namespace std;
class cricketer
{
public:
    string name;
    int matches;

    void inputcricketerdata()
    {
        cout << "\n\tenter your name: ";
        cin >> name;
        cout << "\n\tenter your played matches: ";
        cin >> matches;
    }
    void printcricketerdata()
    {
        cout << "\n\t\tname: " << name << endl;
        cout << "\n\t\tplayed matches: " << matches << endl;
    }
};
class batsman : public cricketer
{

private:
    int totalrun;
    float averagerun;
    int bestperformance;

public:
    void getbatsmandata()
    {
        cout << "\n\tenter the runs: ";
        cin >> totalrun;
        cout << "\n\tenter best performances: ";
        cin >> bestperformance;
    }
    void cal_ave_run()
    {
        if (matches > 0)
        {
            averagerun = totalrun / matches;
        }
    }
    void displaydata()
    {
        cout << "\n\t\ttotal run: " << totalrun;
        cout << "\n\t\taverage run: " << averagerun;
        cout << "\n\t\tbest performance: " << bestperformance;
    }
};

int main()
{
    batsman b;
    b.inputcricketerdata();
    b.printcricketerdata();
    b.getbatsmandata();
    b.cal_ave_run();
    b.displaydata();
}