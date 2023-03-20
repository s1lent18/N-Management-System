#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;

string exactdate()
{
    string date, temp;

    time_t c_date = time(0);

    char * DATE = ctime(&c_date);

    date = date + DATE[8];

    date = date + DATE[9];

    temp = temp + DATE[4];

    temp = temp + DATE[5];

    temp = temp + DATE[6];

    if (temp == "Jan")
    {
        date = date + "01";

    }else if (temp == "Feb")
    {
        date = date + "02";

    }else if (temp == "Feb")
    {
        date = date + "02";
        
    }else if (temp == "Mar")
    {
        date = date + "03";
        
    }else if (temp == "Apr")
    {
        date = date + "05";
        
    }else if (temp == "Jun")
    {
        date = date + "06";
        
    }else if (temp == "Jul")
    {
        date = date + "07";
        
    }else if (temp == "Aug")
    {
        date = date + "08";
        
    }else if (temp == "Sep")
    {
        date = date + "09";
        
    }else if (temp == "Oct")
    {
        date = date + "10";
        
    }else if (temp == "Nov")
    {
        date = date + "11";
        
    }else if (temp == "Dec")
    {
        date = date + "12";
        
    }

    date = date + DATE[20];

    date = date + DATE[21];

    date = date + DATE[22];

    date = date + DATE[23];

    return date;
}

string exacttime()
{
    string Time, temp;
    
    time_t c_time = time(0);

    char * TIME = ctime(&c_time);

    Time = Time + TIME[11];    

    Time = Time + TIME[12];

    Time = Time + TIME[14];

    Time = Time + TIME[15];

    Time = Time + TIME[17];

    Time = Time + TIME[18];

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
            birthtime = exacttime();
        }

        string getbirthdate()
        {
            return birthdate;
        }

        string getbirthtime()
        {
            return birthtime;
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
