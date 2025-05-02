#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
 struct student
 {
    int roll,mark;
    string name,fname;
 };
 student st;
 void introduction()
    {
        cout<<"\n\n\n\n\n";
        for(int i=1;i<=60;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t ";
        for(int i=1;i<=59;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t ";
        for(int i=1;i<=58;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t\t QUIZ GAME \n\t\t\t Project In C++\n\n\t\t  ";
        for(int i=1;i<=58;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t ";
        for(int i=1;i<=59;i++)
        {
            cout<<"*";
        }
        cout<<"\n ";
        for(int i=1;i<=60;i++)
        {
            cout<<"*";
        }
        getch();
        system("cls");
        cout<<"\n\t ";
        for(int i=1;i<=52;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t ";
        for(int i=1;i<=35;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t\t ";
        for(int i=1;i<=20;i++)
        {
            cout<<"*";
        }
        cout<<"\n\n\t\t\tWELCOME TO MILANS QUESTION BANK";
        cout<<"\n\n\t\t\t";
        for(int i=1;i<=20;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t\t ";
        for(int i=1;i<=35;i++)
        {
            cout<<"*";
        }
        cout<<"\n\t ";
        for(int i=1;i<=52;i++)
        {
            cout<<"*";
        }
        getch();

    }
 void cplusplus()
 {
    st.mark=0;
    char option;

    cout<<"1-> C++ is a :- \n";
        cout<<" A) Programming Language \n";
            cout<<"B) English Language \n";
                cout<<"C)UrdU Language \n";
                    cout<<"D) None of these \n";
    option=getch();
    if(option=='a'||option=='A')
    {
        cout<<"Correct Answer Congratulationsa!\n";
        st.mark++;
    }
    else
    {
        cout<<"Incorrect Answer\n";
    }

    // SECOND QUESTION

    cout<<"\n\t\t\t\t2-> What is the purpose of the friend keyword in C++ ?  \n";
        cout<<"\t\t\t\t A) To declare a global variable \n";
            cout<<"\t\t\t\t B) To define a member function \n";
                cout<<"\t\t\t\t C) To allow a non-member function to access private members of a class \n";
                    cout<<"\t\t\t\t D)  To inherit a class \n";
    option=getch();
    if(option=='c'||option=='C')
    {
        cout<<"\t\t\t\tCorrect Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"\t\t\t\tIncorrect Answer\n\n\n";
    }

    //THIRD QUESTION

    cout<<"3-> Which of the following statements is true about C++ arrays?  \n";
        cout<<" A) Arrays can be resized dynamically \n";
            cout<<"B) Arrays are passed by reference to functions \n";
                cout<<"C) Arrays can be initialized with a variable size \n";
                    cout<<"D) Arrays are a type of pointer \n";
    option=getch();
    if(option=='b'||option=='B')
    {
        cout<<"Correct Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"Incorrect Answer\n\n\n";
    }

    // FOURTH QUESTION
    cout<<" \t\t\t\t 4-> Which of the following is a valid way to initialize a variable in C++?  \n";
        cout<<"\t\t\t\t A) int x; x = 5; \n";
            cout<<"\t\t\t\t B)  int x = 5;\n";
                cout<<"\t\t\t\t C)  int x(5); \n";
                    cout<<"\t\t\t\t D)  All of the above \n";
    option=getch();
    if(option=='d'||option=='D')
    {
        cout<<"\t\t\t\t Correct Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"\t\t\t\t Incorrect Answer\n\n\n";
    }

    //FIFTH QUESTION
    cout<<"5-> What is the output of the following code: int x = 5; cout << (x << 2);?  \n";
        cout<<" A) 10\n";
            cout<<"B) 20\n";
                cout<<"C) 25\n";
                    cout<<"D) 40\n";
    option=getch();
    if(option=='b'||option=='B')
    {
        cout<<"Correct Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"Incorrect Answer\n\n\n";
    }
    
}
void html()
{
    st.mark=0;
    char option;

    cout<<"1-> What does HTML stand for? \n";
        cout<<" A) Hyper Trainer Marking Language \n";
            cout<<"B) Hyper Text Marketing Language \n";
                cout<<"C) Hyper Text Markup Language  \n";
                    cout<<"D) Hyper Tool Multi Language \n";
    option=getch();
    if(option=='c'||option=='C')
    {
        cout<<"Correct Answer Congratulationsa!\n";
        st.mark++;
    }
    else
    {
        cout<<"Incorrect Answer\n";
    }

    // SECOND QUESTION

    cout<<"\n\t\t\t\t2-> Which HTML tag is used to create a hyperlink?  \n";
        cout<<"\t\t\t\t A) <link> \n";
            cout<<"\t\t\t\t B) <href> \n";
                cout<<"\t\t\t\t C) <a> \n";
                    cout<<"\t\t\t\t D) <hyperlink> \n";
    option=getch();
    if(option=='c'||option=='C')
    {
        cout<<"\t\t\t\tCorrect Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"\t\t\t\tIncorrect Answer\n\n\n";
    }

    //THIRD QUESTION

    cout<<"3-> What is the purpose of the <head> tag in HTML? \n";
        cout<<" A) To display the main heading \n";
            cout<<"B)To contain metadata and links to scripts/styles \n";
                cout<<"C) To hold navigation links \n";
                    cout<<"D) To display content on the page \n";
    option=getch();
    if(option=='b'||option=='B')
    {
        cout<<"Correct Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"Incorrect Answer\n\n\n";
    }

    // FOURTH QUESTION
    cout<<" \t\t\t\t 4->  Which tag is used to create a numbered list in HTML?  \n";
        cout<<"\t\t\t\t A) <ul> \n";
            cout<<"\t\t\t\t B) <ol>\n";
                cout<<"\t\t\t\t C) <li> \n";
                    cout<<"\t\t\t\t D) <list> \n";
    option=getch();
    if(option=='b'||option=='B')
    {
        cout<<"\t\t\t\t Correct Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"\t\t\t\t Incorrect Answer\n\n\n";
    }

    //FIFTH QUESTION
    cout<<"5->Which HTML element is used to define the largest heading?  \n";
        cout<<" A) <heading>\n";
            cout<<"B) <h6>\n";
                cout<<"C) <h1>\n";
                    cout<<"D) <head1>\n";
    option=getch();
    if(option=='c'||option=='C')
    {
        cout<<"Correct Answer Congratulationsa!\n\n\n";
        st.mark++;
    }
    else
    {
        cout<<"Incorrect Answer\n\n\n";
    }
}
 void result()
 {
    int percentage;
    cout<<"\nStudent Name:-\n"<< st.name<<endl;
    cout<<"Father Name:-\n"<< st.fname<<endl;
    cout<<"Student RollNo:-\n"<< st.roll<<endl;
    cout<<"Marks Obtained:-\n"<< st.mark<<endl;
    percentage=100*st.mark/5;
    cout<<"Percentage:-"<<percentage<<endl;
    if(percentage>=60)
    {
        cout<<"PASS GOOD BOY"<<endl;
    }
    else
    {
        cout<<"FAIL PLEASE KEEP ON PRACTICE"<<endl;
    }

 }
 int main()
 {
    introduction();
    char start,select;
    do{
        system("cls");
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t Random Quiz System \n\n\n";
    cout<<"Enter your name:-";
    cin>>st.name;
    cout<<"Enter your roll:-";
    cin>>st.roll;
    cout<<"Enter your fathers name:-";
    cin>>st.fname;
    cout<<"Select The Subject for the Quiz->\n";
    cout<<"1-> C++\n";
    cout<<"2-> HTML\n";
    select=getch();
    switch(select)
    {
        case '1':
            cout<<"\nC++ QUIZ START\n";
            cplusplus();
            system("cls");
            cout<<"\n\n\n\t\t\t\t RESULT OF YOUR QUIZ IS:-";
            result();
            break;
        case '2':
            cout<<"\nHTML QUIZ START\n";
            html();
            system("cls");
            cout<<"\n\n\n\t\t\t\t RESULT OF YOUR QUIZ IS:-";
            result();

            break;
        default:
            cout<<"Please select the correct option";
    }
    cout<<"Press S in order to start the Quiz OR any key for ending ! \n";
    start=getch();
    } while (start=='S'|| start=='s');

    
}
 

///                                  THANK YOU........................   