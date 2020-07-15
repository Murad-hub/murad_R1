#include <iostream>
#include<string>
#include<stdlib.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
/////////////////////////////////CLASS////////////////////////////////////////
class hangman
{
private:
    string store;
    int wrong_guess;
    int while_limit;
    char guess;
    char choose;
public:
    hangman();
    int GOGAME();
    int code();
    int demo(string x);
    int check();
    int check1();
    int check2();
    int check3();
    int game(string x);
    ~hangman();


};
//////////////////////////////SELECTION TABLE/////////////////////////////////
int selection()
{

    ///////////////////////////////OPTIONS ON THE SCREEN//////////////////////////
    char x;
    cout<<endl<<"\t     *******************************************************************************\n";
    cout<<"\t     *\tENTER A, B, C, D OR E FOR THE OPTIONS BELOW:                               *\n";
    cout<<"\t     *\t-->A: DEMO.                                                                *\n";
    cout<<"\t     *\t-->B: BEGINER.                                                             *\n";
    cout<<"\t     *\t-->C: MEDIUM                                                               *\n";
    cout<<"\t     *\t-->D:PROFESSIONAL.                                                         *\n";
    cout<<"\t     *\t-->E:EXIT.                                                                 *";
    cout<<endl<<"\t     *******************************************************************************\n";
    cout<<"\t     ENTER OPTION: ";
    cin>>x;
    if(x=='a'||x=='A')
    {
        system("CLS");
        cout<<"\n\t     ************************************";
        cout<<"\n\t       WELCOME TO THE DEMO. :)";
        cout<<"\n\t     ************************************\n";
        cout<<"\n\t     -->IN THE GAME YOU WILL BE GIVEN A WORD WITH A HINT.\n\n\t     -->WITH THE HELP OF THE HINT YOU HAVE TO GUESS THE WORD.\n";
        cout<<"\n\n\t     -->NOW SELECT A RANDOM WORD OF YOUR CHOICE.\n\n";

    }
    if(x=='b'||x=='B')
    {
        system("CLS");
        cout<<"\n\t     ************************************";
        cout<<"\n\t       WELCOME TO THE BEGNIER LEVEL. :)\n";
        cout<<"\n\t     ************************************\n";
    }
    if(x=='c'||x=='C')
    {
        system("CLS");
        cout<<"\n\t     ************************************";
        cout<<"\n\t       WELCOME TO THE MEDIUM LEVEL. :)\n";
        cout<<"\n\t     ************************************\n";
    }

    if(x=='d'||x=='D')
    {
        system("CLS");
        cout<<"\n\t     ******************************************";
        cout<<"\n\t       WELCOME TO THE PROFESSIONAL LEVEL. :)\n";
        cout<<"\n\t     ******************************************\n";
    }
    if(x=='e'||x=='E')
    {
        system("CLS");
        cout<<"\n\n\n\t\t     ************************************\n";
        cout<<"\t\t               GAME FINISHED\n";
        cout<<"\t\t               GOOD BYE.  :)\n";
        cout<<"\n\t\t     ************************************\n";
    }

    return x;
}
///////////////////////////PASSWORD CHECKER//////////////////////////////////////////////
int hangman::code()
{
    bool x=0;
    string c;
    int wrong_pass=2;
pass:
    cout<<"\n\n\t    *****************************************";
    cout<<"\n\t     ENTER THE CODE TO ACCESS THE GAME: \n";
    cout<<"\t    *****************************************\n";
    cout<<"\t   ENTER HERE: ";
    cin>>c;
    if(c=="mian" || c=="MIAN")
    {
        x=1;
    }
    else
    {
        if(wrong_pass>0)
        {
            system("CLS");
            cout<<"\n\n\tWRONG PASSWORD.\n";
            cout<<"\tREMAINING CHANCES:--> "<<wrong_pass<<endl;
            wrong_pass--;
        }

        else
        {
            system("CLS");
            cout<<"\n\n\t\t  *************************\n";
            cout<<"\n\t\t    ACCESS DENIED.!!\n";
            cout<<"\t\t    YOU ARE NOT THE USER.\n";
            cout<<"\n\t\t  *************************\n";
            return 0;
        }

        goto pass;
    }
}
////////////////////////////////////////MAIN///////////////////////////////////////////////
int main()
{
    hangman go;
    /////////////////////////////////DRIVER FUNCTION///////////////////////////
    go.GOGAME();
}
//////////////////////////////////////////MAIN ACCESSING FUNCTION/////////////////////////////////////////////////
int hangman::GOGAME()
{
    hangman check;

    if(check.code())///PASWORD CHECKER; BOOL DATATYPE USED;
    {
renter:
opt:
        char get=selection(),sel;
        hangman obj0,obj,obj2,obj3;
        //////////////////////////////DEMO DATABASE//////////////////////////////
        string d[6];
        d[0]="demo";
        d[1]="check";
        d[2]="run";
        d[3]="command";
        d[4]="working";
        d[5]="control";
      /*  for(int i=0; i<5; i++)
        {
            rand()%6;
        }*/
        ///////////////////////////BEGINER DATABASE/////////////////////////////////
        string words[6];
        words[0]="book";
        words[1]="hello";
        words[2]="hi";
        words[3]="frog";
        words[4]="laptop";
        words[5]="key";
       /* for(int i=0; i<5; i++)
        {
            rand()%6;
        }*/
        /////////////////////////////MEDIUM DATABASE///////////////////////////////
        string med[6];
        med[0]="school";
        med[1]="college";
        med[2]="business";
        med[3]="pocket";
        med[4]="macbook";
        med[5]="canteen";
       /* for(int i=0; i<5; i++)
        {
            rand()%6;
        }*/
        /////////////////////////PROFESSIONAL DATABASE/////////////////////////
        string pro[6];
        pro[0]="expert";
        pro[1]="genius";
        pro[2]="programming";
        pro[3]="summayya";
        pro[4]="asif";
        pro[5]="systems";
       /* for(int i=0; i<5; i++)
        {
            rand()%6;
        }*/
        ///store the return option;
        ////////////////////////////RETURN PROCESS////////////////////////////
        if(get=='a'|| get=='A')
        {
            int ret;
            //int bonus=0;
            ret=obj0.check();
            obj0.demo(d[ret]); ///obj0.demo(d[0]);
            void demo(int x);
            //bonus+=4;
            //cout<<"\n\t\t\t\t\tYOUR BONUS IS: "<<bonus<<endl;
            cout<<"\nYOU WANT TO PLAY OR EXIT?\n";
y_n:
            cout<<"P=PLAY\nE=EXIT\nENTER HERE: ";
            cin>>sel;
            if(sel=='P'|| sel=='p')
            {
                system("CLS");
                goto opt;
            }
            else if(sel=='E'|| sel=='e')
            {
                cout<<"GAME FINISHED.\n ";
                return 0;
            }
            else
            {
                cout<<"NO SUCH OPTION.";
                goto y_n;
            }
        }
        else if(get=='b'|| get=='B')
        {
            int ret;
            int bonus=0;
            ret=obj.check1();
            obj.game(words[ret]);
            bonus+=4;
            // cout<<"\n\t\t\t\t\tYOUR BONUS IS: "<<bonus<<endl;
            cout<<"\nYOU WANT TO PLAY OR EXIT?\n";
y_y:
            cout<<"P=PLAY\nE=EXIT\nENTER HERE: ";
            cin>>sel;
            if(sel=='P'|| sel=='p')
            {
                system("CLS");
                goto opt;
            }
            else if(sel=='E'|| sel=='e')
            {
                cout<<"GAME FINISHED.\n ";
                return 0;
            }
            else
            {
                cout<<"NO SUCH OPTION.";
                goto y_y;
            }
        }
        ///store the return option;
        else if(get=='c'|| get=='C')
        {
            int ret;
            int bonus=0;
            ret=obj2.check2();
            obj2.game(med[ret]);
            bonus+=4;
            //cout<<"\n\t\t\t\t\tYOUR BONUS IS: "<<bonus<<endl;
            cout<<"\nYOU WANT TO PLAY OR EXIT?\n";
y_p:
            cout<<"P=PLAY\nE=EXIT\nENTER HERE: ";
            cin>>sel;
            if(sel=='P'|| sel=='p')
            {
                system("CLS");
                goto opt;
            }
            else if(sel=='E'|| sel=='e')
            {
                cout<<"GAME FINISHED.\n ";
                return 0;
            }
            else
            {
                cout<<"NO SUCH OPTION.";
                goto y_p;
            }
        }
        else if(get=='d'|| get=='D')
        {
            int ret;
            int bonus=0;
            ret=obj3.check3();
            obj3.game(pro[ret]);
            bonus+=4;
            //cout<<"\n\t\t\t\t\tYOUR BONUS IS: "<<bonus<<endl;
            cout<<"\nYOU WANT TO PLAY OR EXIT?\n";
y_k:
            cout<<"P=PLAY\nE=EXIT\nENTER HERE: ";
            cin>>sel;
            if(sel=='P'|| sel=='p')
            {
                system("CLS");
                goto opt;
            }
            else if(sel=='E'|| sel=='e')
            {
                cout<<"GAME FINISHED.\n ";
                return 0;
            }
            else
            {
                cout<<"NO SUCH OPTION.";
                goto y_k;
            }
        }
        else if(get=='e'|| get=='E')
        {
            return 0;
        }
        else
        {
            cout<<"NO SUCH OPTION.";
            goto renter;
        }
        cout << endl;
        return 0;
    }
}
///////////////////////////////////////SEPERATE FUNCTION FOR DEMO///////////////////////////////////////////////
int hangman::demo(string x)
{
again:///for the again entry.
    while_limit=0;///the limit of the loop should be equal to the word length when it is correctly guessed.
    store=x;
    wrong_guess=0;
    int tries=7;
    for(int i=0; i<x.length(); i++)
    {
        store[i]='*';
    }
    while(while_limit<x.length())
    {

        ///cout<<"MISS: "<<wrong_guess;
        //////////////////////GAME STARTING////////////////////
        cout<<"\nSPACE FOR ENTRYING YOUR GUESS.";
        cout<<"\n*************************";
        cout<<"\nENTER A GUESS: ";
        cout<<store<<" : ";
        cin>>guess;
        bool correct=false;//checking the word in the you guessed in stored word.
        bool again=false;
        system("CLS");
        for(int j=0; j<x.size(); j++)
        {
            if(guess==x[j])
            {
                if(store[j]==x[j])
                {
                    cout<<"\""<<guess <<"\" IS ALREADY IN THE WORD.\n";
                    if(wrong_guess==0)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==1)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**     O\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==2)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**     O\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==3)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==4)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O/\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==5)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O/\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**     \\\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                    }
                    if(wrong_guess==6)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O/\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**    /\\\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                    }
                    if(wrong_guess==7)
                    {
                        //system("color 97");
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**     |  \n";
                        cout<<"\t\t\t\t\t**     |  \n";
                        cout<<"\t\t\t\t\t**     |,O\n";
                        cout<<"\t\t\t\t\t**    /|\\\n";
                        cout<<"\t\t\t\t\t**     /\\\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\tTHE MAN IS HANGED. :( \n";
                    }
                    //cout<<"\n\t\t\t\t\t\t\tREMAINING TRIES: "<<tries<<endl;
                    again=true;
                    continue;

                }
                else
                {
                    store[j]=x[j];
                    while_limit++;
                    correct=true;
                }
            }
        }
        if(again)
            continue;
        if(!correct)
        {
            wrong_guess++;
            cout<<"WRONG GUESS."<<endl;
        }


        if(wrong_guess==0)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==1)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**     O\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==2)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\tTRY TO GET LESS WRONG.\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**     O\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==3)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\tOOPS!!\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\tLETS TRY AGAIN\n";
            cout<<"\t\t\t\t\t**    \\O\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==4)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\tHAAAAA!!! EASY YOU ARE KILLING HIM.\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**    \\O/\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==5)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\tTHINK!! FOCUS.\a\a\n";
            cout<<"\t\t\t\t\t**    \\O/\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**     \\\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
        }
        if(wrong_guess==6)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\tLAST CHANCE!!! DO SOMETHING I AM DEAD.\n";
            cout<<"\t\t\t\t\t**    \\O/\a\a\a\n";
            cout<<"\t\t\t\t\t**     |\a\a\a\n";
            cout<<"\t\t\t\t\t**    /\\\a\a\a\a\a\a\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
        }
        if(wrong_guess==7)
        {
            //system("color 97");
            // system("color 4");
            cout<<"\a\a\a\a\a";
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\a\a\a\a\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\a\a\a\a\a\tKILLED.....\n";
            cout<<"\t\t\t\t\t**     |  \n";
            cout<<"\t\t\t\t\t**     |  \n";
            cout<<"\t\t\t\t\t**     |,O\n";
            cout<<"\t\t\t\t\t**    /|\\\n";
            cout<<"\t\t\t\t\t**     /\\\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\tTHE MAN IS HANGED. :( \a\a\n";
        }
        tries--;//////////////REMAINING TRIES/////////////////////////
        cout<<"\n\t\t\t\t\t\t\tREMAINING TRIES: "<<tries<<endl;
        if(wrong_guess==7)
        {
            cout<<"\nGAME OVER.\n";

            cout<<"YOU WANT TO PLAY AGAIN?\n";
dobara:

            cout<<"Y=YES, N=NO.\nENTER HERE: ";
            cin>>choose;
            if(choose=='y'||choose=='Y')
            {
                goto again;
            }
            else if(choose=='N'|| choose=='n')
            {
                cout<<"GAME FINISHED.\n ";
                return 0;

            }
            else
            {
                cout<<"NO SUCH OPTION.\n";
                goto dobara;
            }
        }
    }
    system("CLS");
    ///man saved code drawing.cout<<"\n\t\t\t\t\t OUTPUT:";
    cout<<"\n\t\t\t\t\t OUTPUT:\n";
    cout<<"\n\n\t\t\t\t\t**\"\"\"\"\"\"\n";
    cout<<"\t\t\t\t\t**\"\"\"\"\"|,\n";
    cout<<"\t\t\t\t\t**        \n";
    cout<<"\t\t\t\t\t**      \n";
    cout<<"\t\t\t\t\t**    \\O/   \n";
    cout<<"\t\t\t\t\t**     | \n";
    cout<<"\t\t\t\t\t**     /\\  HURRY!! SAVED. \n";
    cout<<"\t\t\t\t\tTTTTTTTTTTTTTTTT\n";
    cout<<endl<<"\n\t\t\t\t\tTHE MAN IS SAVED. :)";
    cout<<"\n\n\t\t\t\t\t-->YES! THE WORD WAS: "<<x<<endl;
    cout<<"\t\t\t\t\t-->YOU MISSED THE WORD: "<<x<<" : "<<wrong_guess<<" TIMES.\n";
    return wrong_guess;



}
////////////////////////////////////////////DEMO////////////////////////////////////////////////////
int hangman::check()
{

    int y;
use_again:
    cout<<"\t     SELECT A RANDOM WORD FROM DATABASE.\n\t     ENTER A NUMBER FROM 1-6: ";
    cin>>y;
    system("CLS");
    cout<<"\n\n -->HINT: ";
    if(y==1)
    {
        cout<<"SOMETHING FOR DEMONSTRATION.\nIN THIS CASE:-->WORD:demo\n ";
    }
    else if(y==2)
    {
        cout<<"SOMETHING FOR CHECKING.\nIN THIS CASE:-->WORD:check\n ";
    }
    else if(y==3)
    {
        cout<<"SOMETHING WE DO WHILE DOING EXERCISE.\nIN THIS CASE:-->WORD:run\n ";
    }
    else if(y==4)
    {
        cout<<"SOMETHING WE GIVE AS AN ORDER TO PEOPLE.\nIN THIS CASE:-->WORD:command\n ";
    }
    else if(y==5)
    {
        cout<<"SOMETHING THAT PEOPLE DO.\nIN THIS CASE:-->WORD:working\n ";
    }
    else if(y==6)
    {
        cout<<"SOMETHING THAT BECOME IN LIMITS.\nIN THIS CASE:-->WORD:control\n ";
    }
    else
    {
        cout<<"NO SUCH OPTION.\n";
        goto use_again;

    }
    cout<<"\nNOTICED THE HINT GIVEN?\n";
    cout<<"\n\t\t\t\t\t OUTPUT:";
    cout<<"\n\n\t\t\t\t\t**\"\"\"\"\"\"\t-->ON EVERY WRONG TRY THE PERSON BODYGET ATTACHED.\n";
    cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\t-->ON SEVEN(7) WRONG TRY YOU GET DISMISSED.\n";
    cout<<"\t\t\t\t\t**             \t-->TRY TO SAVE THE PERSON.\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    return y-1;
}
/////////////////////////////BEGINER////////////////////////////////////////////
int hangman::check1()
{

    int y;
use_again:
    cout<<"\t     SELECT A RANDOM WORD FROM DATABASE.\n\t     ENTER A NUMBER FROM 1-6: ";
    cin>>y;
    system("CLS");
    cout<<"\n\n HINT: ";
    if(y==1)
    {
        cout<<"SOMETHING THAT WE READ.\n ";
    }
    else if(y==2)
    {
        cout<<"SOMETHING THAT WE SAY WHEN PICKUP THE PHONE.\n ";
    }
    else if(y==3)
    {
        cout<<"SOMETHING THAT WE SAY WHEN WE MEET PEOPLE.\n ";
    }
    else if(y==4)
    {
        cout<<"SOMETHING THAT JUMPS WHILE WALKING.\n ";
    }
    else if(y==5)
    {
        cout<<"SOMETHING THAT WE USE TO DO SYSTEM ENGG.\n";
    }
    else if(y==6)
    {
        cout<<"SOMETHING THAT WE TO OPEN DOORS.\n ";
    }
    else
    {
        cout<<"NO SUCH OPTION.\n";
        goto use_again;

    }
    cout<<"\n\t\t\t\t\t OUTPUT:";
    cout<<"\n\n\t\t\t\t\t**\"\"\"\"\"\"\n";
    cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";

    return y-1;
}
////////////////////////////////////MEDIUM/////////////////////////////////////
int hangman::check2()
{
    int y;
use_again:
    cout<<"\t     SELECT A RANDOM WORD FROM DATABASE.\n\t     ENTER A NUMBER FROM 1-6: ";
    cin>>y;
    system("CLS");
    cout<<"\n\n HINT: ";
    if(y==1)
    {
        cout<<"CHILDHOOD TO MATURITY STUDYING PLACE.\n ";
    }
    else if(y==2)
    {
        cout<<"THE MASTER/SLAVE PLACE AFTER SCHOOL.\n ";
    }
    else if(y==3)
    {
        cout<<"SOMETHING THAT PEOPLE DO FOR THERE EARNINGS.\n ";
    }
    else if(y==4)
    {
        cout<<"SOMETHING EVERY SHIRT HAVE.\n ";
    }
    else if(y==5)
    {
        cout<<"SOMETHING THAT IS DESIGNED BY MACBOOK APPLE COMPANY.\n";
    }
    else if(y==6)
    {
        cout<<"THE LOVING PLACE OF EVERY UET STUDENT.\n ";
    }
    else
    {
        cout<<"NO SUCH OPTION.\n";
        goto use_again;

    }
    cout<<"\n\t\t\t\t\t OUTPUT:";
    cout<<"\n\n\t\t\t\t\t**\"\"\"\"\"\"\n";
    cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    return y-1;
}
////////////////////////////////PROFESSIONAL//////////////////////////////////////
int hangman::check3()
{

    int y;
use_again:
    cout<<"\t     SELECT A RANDOM WORD FROM DATABASE.\n\t     ENTER A NUMBER FROM 1-6: ";
    cin>>y;
    system("CLS");
    cout<<"\n\n HINT: ";
    if(y==1)
    {
        cout<<"WHEN A PERSON BECOME PROFESSIONAL HE IS CALLED? .\n ";
    }
    else if(y==2)
    {
        cout<<"SOMEONE WHO IS EXTRA INTELLIGENT.\n ";
    }
    else if(y==3)
    {
        cout<<"WHAT IS THE SECOND NAME OF CODING? .\n ";
    }
    else if(y==4)
    {
        cout<<"THE PERSON WHO TEACHES OOP? .\n ";
    }
    else if(y==5)
    {
        cout<<"LEGEND OF C++.\n";
    }
    else if(y==6)
    {
        cout<<"IF YOU GOT THIS YOU ARE FROM \"SYSTEMS\" DEPARTMENT.\n ";
    }
    else
    {
        cout<<"NO SUCH OPTION.\n";
        goto use_again;

    }
    cout<<"\n\t\t\t\t\t OUTPUT:";
    cout<<"\n\n\t\t\t\t\t**\"\"\"\"\"\"\n";
    cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    cout<<"\t\t\t\t\t**\n";
    return y-1;
}
/////////////////////////////////////CONSTRUCTOR///////////////////////////////////////
hangman::hangman()
{
///constructor
}
//////////////////////////////////////ACTUAL GAME//////////////////////////////////
int hangman::game(string x)
{

again:///for the again entry.
    while_limit=0;///the limit of the loop should be equal to the word length when it is correctly guessed.
    store=x;
    wrong_guess=0;
    int tries=7;
    for(int i=0; i<x.length(); i++)
    {
        store[i]='*';
    }
    while(while_limit<x.length())
    {

        ///cout<<"MISS: "<<wrong_guess;

        cout<<"\nENTER A GUESS: ";
        cout<<store<<" : ";
        cin>>guess;
        bool correct=false;//checking the word in the you guessed in stored word.
        bool again=false;
        system("CLS");
        for(int j=0; j<x.size(); j++)
        {
            if(guess==x[j])
            {
                if(store[j]==x[j])
                {
                    cout<<"\""<<guess <<"\" IS ALREADY IN THE WORD.\n";
                    if(wrong_guess==0)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==1)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**     O\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==2)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**     O\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==3)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==4)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O/\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**";
                    }
                    if(wrong_guess==5)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O/\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**     \\\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                    }
                    if(wrong_guess==6)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**    \\O/\n";
                        cout<<"\t\t\t\t\t**     |\n";
                        cout<<"\t\t\t\t\t**    /\\\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                    }
                    if(wrong_guess==7)
                    {
                        cout<<"\n\t\t\t\t\t OUTPUT:\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
                        cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
                        cout<<"\t\t\t\t\t**     |  \n";
                        cout<<"\t\t\t\t\t**     |  \n";
                        cout<<"\t\t\t\t\t**     |,O\n";
                        cout<<"\t\t\t\t\t**    /|\\\n";
                        cout<<"\t\t\t\t\t**     /\\\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\t**\n";
                        cout<<"\t\t\t\t\tTHE MAN IS HANGED. :( \n";
                    }
                    //cout<<"\n\t\t\t\t\t\t\tREMAINING TRIES: "<<tries<<endl;
                    again=true;
                    continue;

                }
                else
                {
                    store[j]=x[j];
                    while_limit++;
                    correct=true;
                }
            }
        }
        if(again)
            continue;
        if(!correct)
        {
            wrong_guess++;
            cout<<"WRONG GUESS."<<endl;
        }


        if(wrong_guess==0)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==1)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**     O\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==2)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\tTRY TO GET LESS WRONG.\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**     O\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==3)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\tOOPS!!\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\tLETS TRY AGAIN.\n";
            cout<<"\t\t\t\t\t**    \\O\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==4)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\tHAAAAA!!! EASY YOU ARE KILLING HIM.\a\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**    \\O/\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**";
        }
        if(wrong_guess==5)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\tTHINK!! FOCUS.\a\a\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**    \\O/\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**     \\\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
        }
        if(wrong_guess==6)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\t\aLAST CHANCE!!! DO SOMETHING I AM DEAD.\a\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**    \\O/\n";
            cout<<"\t\t\t\t\t**     |\n";
            cout<<"\t\t\t\t\t**    /\\\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
        }
        if(wrong_guess==7)
        {
            cout<<"\n\t\t\t\t\t OUTPUT:\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"\"\t\a\a\aKILLED.....\n";
            cout<<"\t\t\t\t\t**\"\"\"\"\"|\"\n";
            cout<<"\t\t\t\t\t**     |  \n";
            cout<<"\t\t\t\t\t**     |  \n";
            cout<<"\t\t\t\t\t**     |,O\n";
            cout<<"\t\t\t\t\t**    /|\\\n";
            cout<<"\t\t\t\t\t**     /\\\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\t**\n";
            cout<<"\t\t\t\t\tTHE MAN IS HANGED. :( \n";
        }
        cout<<"\n\t\t\t\t\t\t\tREMAINING TRIES: "<<tries<<endl;
        tries--;
        if(wrong_guess==7)
        {
            cout<<"\nGAME OVER.\n";
            cout<<"YOU WANT TO PLAY AGAIN?\n";
dobara:

            cout<<"Y=YES, N=NO.\nENTER HERE: ";
            cin>>choose;
            if(choose=='y'||choose=='Y')
            {
                goto again;
            }
            else if(choose=='N'|| choose=='n')
            {
                cout<<"GAME FINISHED.\n ";
                return 0;

            }
            else
            {
                cout<<"NO SUCH OPTION.\n";
                goto dobara;
            }
        }
    }
    system("CLS");
    ///man saved code drawing.cout<<"\n\t\t\t\t\t OUTPUT:";
    cout<<"\n\t\t\t\t\t OUTPUT:\n";
    cout<<"\n\n\t\t\t\t\t**\"\"\"\"\"\"\n";
    cout<<"\t\t\t\t\t**\"\"\"\"\"|,\n";
    cout<<"\t\t\t\t\t**        \n";
    cout<<"\t\t\t\t\t**      \n";
    cout<<"\t\t\t\t\t**    \\O/   \n";
    cout<<"\t\t\t\t\t**     | \n";
    cout<<"\t\t\t\t\t**     /\\  HURRY!! SAVED. \n";
    cout<<"\t\t\t\t\tTTTTTTTTTTTTTTTT\n";
    cout<<endl<<"\n\t\t\t\t\tTHE MAN IS SAVED. :)";
    cout<<"\n\n\t\t\t\t\t-->YES! THE WORD WAS: "<<x<<endl;
    cout<<"\t\t\t\t\t-->YOU MISSED THE WORD: "<<x<<" : "<<wrong_guess<<" TIMES.\n";
    return wrong_guess;
}
//////////////////////////DESTRUCTOR////////////////////////////////////
hangman::~hangman() {}
//////////////////////////////GAME FINISHED/////////////////////////////
