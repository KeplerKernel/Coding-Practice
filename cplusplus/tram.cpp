/*find the lowest cost between 2 points in a circular array*/

#include<bits/stdc++.h>
using namespace std;


long solve(int N, int start, int finish, vector<int>& Ticket_cost) {

    // Start and finish always are from 1 to N but indices should be 0 to n-1
    long clockwise = 0, anti_clockwise = 0;

    // Calculate cost of travelling clockwise
    for(int i = start -1; i != finish-1; i = (i + 1) % N) {
        clockwise += Ticket_cost[i];
    }

    // Calculate cost of travelling anti-clockwise
     for(int i = finish - 1; i != start -1; i = (i +1) % N) {
        anti_clockwise += Ticket_cost[i];
        
    } 
    return min(clockwise, anti_clockwise);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    cout <<"Number_of_elements="<< N << "\t" <<"start ="<< start <<"\t" <<"finish ="<< finish <<endl;

    vector<int> Ticket_cost(N);
    for(int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
    	cin >> Ticket_cost[i_Ticket_cost];
    }

    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}