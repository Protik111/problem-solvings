#include <iostream>
using namespace std;
int main()
{
    int i,T, faced_balls, current_run, opositeTotalRun, rest_ball, rest_runToWin;
    double f_ballToOver, current_run_rate, rest_over, required_runRate;
    cin>> T;
    for(i=1; i<=T; i++){
        cin >> opositeTotalRun >> current_run >> rest_ball;
        faced_balls = (double(300 - rest_ball));
        cout<< faced_balls << "\n";
        f_ballToOver = faced_balls / 6;
        current_run_rate = (current_run*1.0) / f_ballToOver;
        rest_runToWin = ((opositeTotalRun - current_run + 1)*1.0);
        rest_over = 50 - f_ballToOver;
        required_runRate = rest_runToWin /rest_over;
        cout << current_run_rate << " " << required_runRate << "\n";
    }
    return 0;
}
