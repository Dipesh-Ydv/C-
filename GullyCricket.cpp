#include <iostream>
#include <string>
#include <random>
using namespace std;

class Team {
    string teamName;
    string players[3];
    int score;

    public:
    Team () {
        this->score = 0;
    }
    
    void setNames (string teamName, string player1, string player2, string player3) {
        this->teamName = teamName;
        this->players[0]= player1;
        this->players[1] = player2;
        this->players[2] = player3;
    }

    void setScore (int run) {
        this->score += run;
    }

    void displayTeamInfo () {
        cout <<  "<----INFORMATION OF TEAM---->" << endl;
        cout << "TEAM NAME : " << this->teamName << endl;
        cout << "<----PLAYERS NAME---->" << "\n"
        << "PLAYER 1 : " << this->players[0] << "\n" 
        << "PLAYER 2 : " << this->players[1] << "\n"
        << "PLAYER 3 : " << this->players[2] << endl << endl;
    }

    int getScore () {
        return this->score;
    } 

    string selectPlayer () {
        random_device rd;
        uniform_int_distribution <int> dist(0,2);
    
        return this->players[dist(rd)];
    }

};

int overStarts () {
    int runs = 0;
    random_device rd;
    uniform_int_distribution <int> dist(0,6);
    
    for (int i = 0; i < 6; i++) {
        int rn = dist(rd);
        runs += rn;
        cout << "Ball : " << i+1 << "\tRuns : " << rn << endl;
    }
    return runs;
}

void greet () {
    cout << "\n\nWelcome to our Gully Cricket Game :)" << endl << endl;
}

void inning (Team &teamA, Team &teamB) {

    cout << "Team A Batting:" << endl;
    string playerA = teamA.selectPlayer();
    cout << playerA << " comes to Bat" << endl << endl;
    cout << "Team B Bowling:" << endl;
    string playerB = teamB.selectPlayer();
    cout << playerB << " comes to Bowl\n" << endl;

    int teamAruns = overStarts();
    teamA.setScore(teamAruns);

    cout << "\nTeam B Batting:" << endl;
    playerB = teamB.selectPlayer();
    cout << playerB << " comes to Bat" << endl << endl;
    cout << "Team A Bowling:" << endl;
    playerA = teamA.selectPlayer();
    cout << playerA << " comes to Bowl\n" << endl;

    int teamBruns = overStarts();
    teamB.setScore(teamBruns);

    cout << "\n<----Score of Inning----> \nTeam A : " << teamAruns 
    << "\t Team B : " << teamBruns << endl << endl;
    
}

void winner (Team &teamA, Team &teamB) {
    cout << "\n<----TOTAL SCORE----> \nTeam A : " << teamA.getScore()
    << "\tTeam B : " << teamB.getScore() << endl;
    if (teamA.getScore() > teamB.getScore()) {
        cout << "\nWINNER Is Team A :)";
    } else {
        cout << "\nWINNER Is Team B :)";
    }
}

int main ()
{
    greet();
    Team teamA, teamB;
    teamA.setNames("Team A", "Dipesh Yadav", "Sourabh Yadav", "Varshank Saini");
    teamA.displayTeamInfo();
    teamB.setNames("Team B", "Ayush Mudgil", "Jimmy Yadav", "Vishal Saini");
    teamB.displayTeamInfo();

    cout << "<----FIRST INNING---->" << endl << endl;
    inning(teamA, teamB);
    
    cout << "<----SECOND INNING---->" << endl << endl;
    inning(teamA, teamB);

    winner(teamA, teamB);

    return 0;
}