#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t, opponent_run, current_run, target_run, ball;
    double current_run_rate, requer_run_rate, played_over,  remain_over;

    cin>>t;
    while(t--){
        cin>>opponent_run>>current_run>>ball;
        played_over = (300 - ball) / 6.00;
        target_run = (opponent_run - current_run) + 1;
        current_run_rate = current_run / played_over;

        printf("%.2lf ", current_run_rate);
        remain_over = ball / 6.00;

        if((opponent_run - current_run) <=0)
            target_run = 0.0;

        requer_run_rate = target_run / remain_over;
        printf("%.2lf\n", requer_run_rate);

    }
    return 0;
}

