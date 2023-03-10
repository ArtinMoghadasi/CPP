//Length Converter
//By Artin Moghadasi
//@Artin.Projects

//Heade files(for libraries)
#include <iostream>
#include <string>
using namespace std;

//Global variables
float length;
int equievalent;

//Prototypes
void km(void);
void m(void);
void dm(void);
void cm(void);
void mm(void);

//Main function
int main(void)
{
    string unit,preferenceToConvert,choiceToContinue;
    int round=1;
//While loop
    while(1)
    {
        if(round==1)
        cout<<"Welcome to Ritchie length converter!"<<endl;
        else
        cout<<"Welcome back to Ritchie length converter!"<<endl;
        //Converter starts
        cout<<"Round: "<<round<<endl;
        cout<<"Enter your length: ";
        cin>>length;
        cout<<"In which unit your length is?(mm,cm,dm,m,km): ";
        cin>>unit;
        cout<<"Which unit do you prefer to convert?(mm,cm,dm,m,km): ";
        cin>>preferenceToConvert;
        if(preferenceToConvert=="mm")
            equievalent=1;
        else if(preferenceToConvert=="cm")
            equievalent=2;
        else if(preferenceToConvert=="dm")
            equievalent=3;
        else if(preferenceToConvert=="m")
            equievalent=4;
        else if(preferenceToConvert=="km")
            equievalent=5;
        else
        {
        cout<<"Please select valid choice \n";
        continue;
        }
        if(unit=="km")
        {
        km();
        }

        if(unit=="m")
        {
        m(); 
        }
        if(unit=="dm")
        {
        dm();
        }
        if(unit=="cm")
        {
        cm();
        }

        if(unit=="mm")
        {
        mm();
        }

        cout<<"\nContinue?(y/n): ";
        cin>>choiceToContinue;
        if(choiceToContinue=="y" || choiceToContinue=="yes" || choiceToContinue=="Yes")
        ++round;
        else
        {
            cout<<"The program is finished!";
            exit(0);
        }
    
    }

    return 0;
}

//Functions go here
void km(void)
{
 switch(equievalent)
            {
            case 1:
                cout<<"Your output is: "<<endl;
                cout<<length*1000000<<endl;
                break;
            case 2:
                cout<<"Your output is: "<<endl;
                cout<<length*100000<<endl;
                break;
            case 3:
                cout<<"Your output is: "<<endl;
                cout<<length*10000<<endl;
                break;
            case 4:
                cout<<"Your output is: "<<endl;
                cout<<length*1000<<endl;
                break;
            case 5:
                cout<<"Your output is: "<<endl;
                cout<<length;
                break;
            default:
                exit(0);
            }
}

void m(void)
{
            switch(equievalent)
            {
            case 1:
                cout<<"Your output is: "<<endl;
                cout<<length*1000<<endl;
                break;
            case 2:
                cout<<"Your output is: "<<endl;
                cout<<length*100<<endl;
                break;
            case 3:
                cout<<"Your output is: "<<endl;
                cout<<length*10<<endl;
                break;
            case 4:
                cout<<"Your output is :"<<endl;
                cout<<length<<endl;
                break;
            case 5:
                cout<<"Your output is: "<<endl;
                cout<<length/1000;
                break;
            default:
                exit(0);
            }
        }

        void dm(void)
        {        
            switch(equievalent)
            {
            case 1:
                cout<<"Your output is: "<<endl;
                cout<<length*100<<endl;
                break;
            case 2:
                cout<<"Your output is: "<<endl;
                cout<<length*10<<endl;
                break;
            case 3:
                cout<<"Your output is: "<<endl;
                cout<<length<<endl;
                break;
            case 4:
                cout<<"Your output is: "<<endl;
                cout<<length/10<<endl;
                break;
            case 5:
                cout<<"Your output is: "<<endl;
                cout<<length/10000;
                break;
            default:
                exit(0);
            }
        }

        void cm(void)
        {
            switch(equievalent)
            {
            case 1:
                cout<<"Your output is:"<<endl;
                cout<<length*10<<endl;
                break;
            case 2:
                cout<<"Your output is:"<<endl;
                cout<<length<<endl;
                break;
            case 3:
                cout<<"Your output is:"<<endl;
                cout<<length/10<<endl;
                break;
            case 4:
                cout<<"Your output is:"<<endl;
                cout<<length/100<<endl;
                break;
            case 5:
                cout<<"Your output is:"<<endl;
                cout<<length/100000;
                break;
            default:
                exit(0);
            }
        } 

        void mm(void)
        {
            switch(equievalent)
            {
            case 1:
                cout<<"Your output is: "<<endl;
                cout<<length<<endl;
                break;
            case 2:
                cout<<"Your output is: "<<endl;
                cout<<length/10<<endl;
                break;
            case 3:
                cout<<"Your output is: "<<endl;
                cout<<length/100<<endl;
            case 4:
                cout<<"Your output is: "<<endl;
                cout<<length/100<<endl;
                break;
            case 5:
                cout<<"Your output is: "<<endl;
                cout<<length/100000;
                break;
            default:
                exit(0);
            }

        }
//The program is finished 
