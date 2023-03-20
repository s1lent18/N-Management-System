#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;

string exactdate()
{
    string Time, temp;

    time_t c_time = time(0);

    char * TIME = ctime(&c_time);

    Time = Time + TIME[8];

    Time = Time + TIME[9];

    temp = temp + TIME[4];

    temp = temp + TIME[5];

    temp = temp + TIME[6];

    Time = Time + " ";

    if (temp == "Jan")
    {
        Time = Time + "01";

    }else if (temp == "Feb")
    {
        Time = Time + "02";

    }else if (temp == "Feb")
    {
        Time = Time + "02";
        
    }else if (temp == "Mar")
    {
        Time = Time + "03";
        
    }else if (temp == "Apr")
    {
        Time = Time + "05";
        
    }else if (temp == "Jun")
    {
        Time = Time + "06";
        
    }else if (temp == "Jul")
    {
        Time = Time + "07";
        
    }else if (temp == "Aug")
    {
        Time = Time + "08";
        
    }else if (temp == "Sep")
    {
        Time = Time + "09";
        
    }else if (temp == "Oct")
    {
        Time = Time + "10";
        
    }else if (temp == "Nov")
    {
        Time = Time + "11";
        
    }else if (temp == "Dec")
    {
        Time = Time + "12";
        
    }

    Time = Time + " ";

    Time = Time + TIME[20];

    Time = Time + TIME[21];

    Time = Time + TIME[22];

    Time = Time + TIME[23];

    return Time;

}

class Court
{
    private:
        string namemale;
        string namefemale;
        string CNIC_male;
        string CNIC_female;
        int n_marriagepaper;

    public:
        Court(string namemale, string namefemale, string CNIC_male, string CNIC_female)
        {
            this->namemale = namemale;
            this->namefemale = namefemale;
            this->CNIC_male = CNIC_male;
            this->CNIC_female = CNIC_female;

        }

        void verification()
        {

        }
};

class Hospital
{
    private:
        string name;
        string fathername;
        string mothername;
        string birthdate;
        string birthtime;
        string deathtime;
        string deathdate;
        char gender;
        int age;

    public:
        Hospital(string name, string fathername, string mothername, char gender)
        {
            this->name = name;

            this->fathername = fathername;

            this->mothername = mothername;

            this->gender = gender;

            setbirthdate();

            setbirthtime();
        }

        void setname(string name)
        {
            this->name = name;
        }

        string getname()
        {
            return name;
        }

        string getfathername()
        {
            return fathername;
        }

        string getmothername()
        {
            return mothername;
        }

        char getgender()
        {
            return gender;
        }

        void setfathername(string fathername)
        {
            this->fathername = fathername;
        }    

        void setmothername(string mothername)
        {
            this->mothername = mothername;
        }

        void setgender(char gender)
        {
            this->gender = gender;
        }

        void setbirthdate()
        {
            birthdate = exactdate();
        }

        void setbirthtime()
        {

        }

        string getbirthdate()
        {
            return birthdate;
        }

        string getbirthtime()
        {
            return birhttime;
        }

        void setdeathdate()
        {

        }

        void setdeathtime()
        {

        }

        string getdeathdate()
        {
            return deathdate;
        }

        string getdeathtime()
        {
            return deathtime;
        }


};

class Nadra
{
    private:
        string name;
        string fathername;
        string mothername;
        string f_grandfather;
        string f_grandmother;
        string m_grandfather;
        string m_grandmother;
        string CNIC;
        string birthdate;
        string birthtime;
        string deathdate;
        string deathtime;
        string religion;
        string relationshipstatus;
        string educationstatus;
        char gender;     
        int marriagepaper; 
        int age;

    public:

};
