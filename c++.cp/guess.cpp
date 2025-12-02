#include<iostream>6
#include<ctime>
int main(){
    using namespace std;
    srand(time(NULL)); // Seed the random number generator
    int guess=0;
    int tries=0;
    int num;
    num=(rand()%100)+1; //random number between 1 and 100
    cout<<"Welcome to the Guessing Game!"<<endl;
    do{
        cout<<"Enter your guess (1-100): ";
        cin>>guess;
        tries++;
        if(guess<num){
            cout<<"Too low! Try again."<<endl;
        }else if(guess>num){
            cout<<"Too high! Try again."<<endl;
        }else{
            cout<<"Congratulations! You guessed the number "<<num<<" in "<<tries<<" tries."<<std::endl;
        }
     } while (guess!=num) ;
 
 return 0;  
}