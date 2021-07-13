#include <iostream>
#include <string>
// add to github
using namespace std;

struct Question
{
    string question;
    string options [6];
    int answer;
};

void printQuestion(Question question, int optionSize)
{

    cout << question.question << endl<<endl; // print the questions

    // print each option
    for(int i=0; i<optionSize; i++)
    {
        cout << i+1 << ". "<< question.options[i]<<endl<<endl;
    }
    cout << "Choose from 1-3"<<endl;
}

void checkAnswer(Question question)
{
    int current_answer=-1; // set current answer to a value that cannot be the index of an array
    cin >> current_answer;
    if(current_answer == question.answer)
    {
        cout << "Correct!"<<endl;
    }
    else
    {
        cout << "Wrong!"<<endl;
    }

}

void askQuestion(string question,  string options [],int option_length, int answer ){
Question question1;

question1.question= question;

// assign the options to question1.options
for(int i=0; i<option_length; i++){
    question1.options[i]=options[i];
}

question1.answer=answer;

// print the question
printQuestion(question1, option_length);

// check answer
checkAnswer(question1);

}
int main()
{

// Question 1
string options1 []={"Muhammad Buhari","Lamido Sanusi","Alvan Ikokwu"};
askQuestion(
            "What is the name of Nigeria's President?", // questions
            options1, //options
            3, // length of your option
            1 // answer to question, number 1 is the first option, number 2 second option etc
            );

// Question 2
string options2 []={"Elephant","Girrafe","Blue Whale","Shark"};
askQuestion(
            "Which of the following is the largest animal in the world", // questions
            options2, //options
            4, // length of your option
            3 // answer to question, number 1 is the first option, number 2 second option etc
            );



    // cout << question1.options[1] << endl;
    return 0;
}
