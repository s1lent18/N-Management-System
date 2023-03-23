#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
using namespace std;

string Sindh[51] = {"Hyderabad", "Dadu", "Karachi", "Jacobabad", "Larkana", "Khairpur", "Ghotki", "MirpurKhas", "Sanghar", "Sukkur", "Kashmore", "Shikarpur", "Tando-Allahyar", "Tando-MuhammadKhan", "Nawabshah", "Umarkot", "ShahdadKot", "Badin", "Jamshoro", "Kotri", "Thatta", "Shahdadpur", "Naushahro Feroze", "RCW Rohri", "Rato Dero", "Sakrand", "Moro", "Tando Adam", "Mehrabpur", "Mirpur Mathelo", "Daharki", "Sehwan", "Gambat", "Thul", "Mithi", "Khipro", "Shahpur Chakar", "Digri", "Kandiaro", "Dokri", "Ranipur", "Hala", "Islamkot", "Sobho Dero", "Keti", "Pirjo Goth", "Sinjhoro", "Madeji", "Kunri", "Malir Contonment", "Nagarparkar"};

string Punjab[58] = {"Lahore", "Faisalabad", "Rawalpindi", "Gujranwala", "Multan", "bahawalpur", "Sargodha", "Sialkot", "Sheikhupura", "Rahim Yar Khan", "Jhang", "Dera Ghazi Khan", "Gujrat", "Sahiwal", "Wah Cantonment", "Kasur", "Okara", "Chiniot", "Kamoke", "Hafizabad", "Sadiqabad", "Burewala", "Khanewal", "Muzaffargarh", "Mandi Bahauddin", "Jhelum", "Khanpur", "Pakpattan", "Daska", "Gojra", "Muridke", "Bahawalnagar", "Samundri", "Jaranwala", "Chishtian", "Attock", "Vehari", "Kot Abdul Malik", "Ferozewala", "Chakwal", "Gujranwala", "Kamalia", "Ahmedpur East", "Kot Addu", "Wazirabad", "Layyah", "Taxila", "Khushab", "Mianwali", "Lodhran", "Hasilpur", "Bhakkar", "Arifwala", "Sambrial", "Jatoi", "Haroonabad", "Narowal", "Bhalwal"};

string Balochistan[54] = {"Quetta", "Turbat", "Khuzdar", "Hub", "Chaman", "Dera Murad Jamali", "Gwadar", "Dera Allah Yar", "Usta Mohammad", "Sui Town", "Sibi", "Loralai", "Tump", "Nushki", "Zhob", "Kharan", "Chitkan", "Khanozai", "Buleda", "Saranan", "Zehri", "Qalat", "Tasp", "Surab", "Pishin", "Mastung", "Qilla Saifullah", "Pasni", "Nal", "Winder", "Uthal", "Huramzai", "Muslim Bagh", "Dera Bugti", "Qilla Abdullah", "Bela", "Wadh", "Washuk", "Awaran", "Machh" ,"Jiwani", "Ormara", "Kohlu", "Bhag", "Dalbandin", "Dhadar", "Musakhel", "Harnai", "Dureji", "Sohbatpur", "Gajjar Mashkay", "Barkhan", "Shahrug", "Duki"};

string KPK[46] = {"Peshawar", "Mardan", "Mingora", "Kohat", "Dera Ismail Khan", "Abbottabad", "Mansehra", "Swabi", "Nowshera", "Kabal", "Charsadda", "Barikot", "Shabqadar", "haripur", "Takht-e-Bahi", "Paharpur", "Batkhela", "Jamrud", "Bahrain", "Lakki Marwat", "Pabbi", "Topi", "Jehangira", "Karak", "Bannu", "Chitral", "Hangu", "Havelian", "Khwazakhela", "Khalabat", "Tank", "Dir", "Matta", "Tordher", "Timargara", "Paroa", "Amangarh", "Risalpur", "Nawan Shehr", "Sadda", "Landi Kotal", "Tangi", "Akora Khattak", "Tall", "Zaida", "Utmanzai"};

string Capital = "Islamabad";

string exactdate()
{
    string date, temp;

    time_t c_date = time(0);

    char * DATE = ctime(&c_date);

    date = date + DATE[8];

    date = date + DATE[9];

    temp = temp + DATE[4];

    temp = temp + DATE[5];

    temp = temp + DATE[6];/

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

class Nadra : public Court, public Hospital
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
        string country;
        char gender;     
        int marriagepaper; 
        int age;
        static int population;
    public:

        void setname(string name)
        {
            this->name = name;
        }

        string getname()
        {
            return name;
        }

        void setfathername(string fathername)
        {
            this->fathername = fathername;
        }

        string getfathername()
        {
            return fathername;
        }

        void setmothername(string mothername)
        {
            this->mothername = mothername;
        }

        string getmothername()
        {
            return mothername;
        }

        void setf_grandfather(string f_grandfather)
        {
            this->f_grandfather = f_grandfather;
        }

        string getf_grandfather()
        {
            return f_grandfather;
        }

        void setf_grandmother(string f_grandmother)
        {
            this->f_grandmother = f_grandmother;
        }

        string getf_grandmother()
        {
            return f_grandmother;
        }

        void setm_grandfather(string m_grandfather)
        {
            this->m_grandfather = m_grandfather;
        }

        string getm_grandfather()
        {
            return m_grandfather;
        }

        void setm_grandmother(string m_grandmother)
        {
            this->m_grandmother = m_grandmother;
        }

        string getm_grandmother()
        {
            return m_grandmother;
        }

        void setCNIC()
        {
            
        }

        string getCNIC()
        {
            return CNIC;
        }

        void setmarriagepaper(int marriagepaper)
        {
            this->marriagepaper = marriagepaper;
        }

        int getmarriagepaper()
        {
            return marriagepaper;
        }

};

int Nadra :: population = 0;
