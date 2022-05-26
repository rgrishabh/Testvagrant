#include<iostream>
using namespace std;

int score = 0, cnt = 0;

struct team{
	string name;
	int points;
	int history[5];
};

//function to check weather team had two consecutive losses
int checkconsecutiveloss(int team[]){
	int count=0;
	for(int i=0;i<5;i++){
		if(team[i]==0 && team[i+1]==0){
			count+=1;			
		}	
	}	
	return count;
}

//function to print n consecutive losses and wins
int conswinloss(int team[]){
	int countwin=1, countloss=1;
	for(int i=0;i<5;i++){
		if(team[i]==0 && team[i+1]==0){
			countloss+=1;
										
		}
		if(team[i]==1 && team[i+1]==1){
			countwin+=1;
	   	}			
	}
	if(countloss>1){
		cout<<"\nConsecutive win = "<<countwin<<endl;
		cout<<"Consecutive loss = "<<countloss<<endl;
	}	
	return 0;
}

//Function to calculate total number of points from the teams which have atleast two consecutive losses
int totalpoints(int team[], int points){
	for(int i=0;i<5;i++){
		if(team[i]==0 && team[i+1]==0){
			score+=points;						
		}	
	}	
	return score;
}

//Function to calculate total number teams which have atleast two consecutive losses
int numofteams(int team[]){
	for(int i=0;i<5;i++){
		if(team[i]==0 && team[i+1]==0){
			cnt++;						
		}	
	}	
	return cnt;
}

int main(){	
	//Initializing team data
	struct team GT   = {"GT",   20 , {1,1,0,0,1}};
	struct team LSG  = {"LSG",  18 , {1,0,0,1,1}};
	struct team RR   = {"RR",   16 , {1,0,1,0,0}};
	struct team DC   = {"DC",   14 , {1,1,0,1,0}};
	struct team RCB  = {"RCB",  14 , {0,1,1,0,0}};
	struct team KKR  = {"KKR",  12 , {0,1,1,0,1}};
	struct team PBKS = {"PBKS", 12 , {0,1,0,1,0}};
	struct team SRH  = {"SRH",  12 , {1,0,0,0,0}};
	struct team CSK  = {"CSK",  8  , {0,0,1,0,1}};
	struct team MI   = {"MI",   6  , {0,1,0,1,1}};
	
	//Display all the teams with two consecutive losses
	cout<<"Teams that have two consecutive losses"<<endl;

	if(checkconsecutiveloss(GT.history)>=1){
		cout<<"\nGT";
	}
	if(checkconsecutiveloss(LSG.history)>=1){
		cout<<"\nLSG";
	}
	if(checkconsecutiveloss(RR.history)>=1){
		cout<<"\nRR";
	}
	if(checkconsecutiveloss(DC.history)>=1){
		cout<<"\nDC";
	}
	if(checkconsecutiveloss(RCB.history)>=1){
		cout<<"\nRCB";
	}
	if(checkconsecutiveloss(KKR.history)>=1){
		cout<<"\nKKR";
	}
	if(checkconsecutiveloss(PBKS.history)>=1){
		cout<<"\nPBKS";
	}
	if(checkconsecutiveloss(SRH.history)>=1){
		cout<<"\nSRH";
	}
	if(checkconsecutiveloss(CSK.history)>=1){
		cout<<"\nCSK";
	}
	if(checkconsecutiveloss(MI.history)>=1){
		cout<<"\nMI";
	}
	
	
	cout<<"\n______________________________________________________________________\n";
	
	//Print n consecutive wins and losses from team which have atleast 2 consecutive loss
	cout<<"\nGT";
	conswinloss(GT.history);
	
	cout<<"\nLSG";
	conswinloss(LSG.history);
	
	cout<<"\nRR";
	conswinloss(RR.history);
	
	cout<<"\nRCB";
	conswinloss(RCB.history);
	
	cout<<"\nSRH";
	conswinloss(SRH.history);
	
	cout<<"\nCSK";
	conswinloss(CSK.history);
	
	cout<<"\n______________________________________________________________________\n";
	
	//Sum of points from teams which have two consecutive losses
	totalpoints(GT.history,GT.points);
	totalpoints(LSG.history,LSG.points);
	totalpoints(RR.history,RR.points);
	totalpoints(DC.history,DC.points);
	totalpoints(RCB.history,RCB.points);
	totalpoints(SRH.history,SRH.points);
	totalpoints(KKR.history,KKR.points);
	totalpoints(PBKS.history,PBKS.points);
	totalpoints(CSK.history,CSK.points);
	totalpoints(MI.history,MI.points);
	
	//num of teams which have two consecutive losses
	numofteams(GT.history);
	numofteams(LSG.history);
	numofteams(RR.history);
	numofteams(DC.history);
	numofteams(RCB.history);
	numofteams(SRH.history);
	numofteams(KKR.history);
	numofteams(PBKS.history);
	numofteams(CSK.history);
	numofteams(MI.history);

	cout<<"Average points of teams which have two consecutive losses = "<<score/cnt;
}