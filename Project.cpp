#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

std::string Sindh[51] = {"Hyderabad", "Dadu", "Karachi", "Jacobabad", "Larkana", "Khairpur", "Ghotki", "MirpurKhas", "Sanghar", "Sukkur", "Kashmore", "Shikarpur", "TandoAllahyar", "Tando-MuhammadKhan", "Nawabshah", "Umarkot", "ShahdadKot", "Badin", "Jamshoro", "Kotri", "Thatta", "Shahdadpur", "NaushahroFeroze", "RCWRohri", "RatoDero", "Sakrand", "Moro", "TandoAdam", "Mehrabpur", "MirpurMathelo", "Daharki", "Sehwan", "Gambat", "Thul", "Mithi", "Khipro", "ShahpurChakar", "Digri", "Kandiaro", "Dokri", "Ranipur", "Hala", "Islamkot", "Sobho Dero", "Keti", "Pirjo Goth", "Sinjhoro", "Madeji", "Kunri", "MalirContonment", "Nagarparkar"};

std::string Punjab[58] = {"Lahore", "Faisalabad", "Rawalpindi", "Gujranwala", "Multan", "bahawalpur", "Sargodha", "Sialkot", "Sheikhupura", "RahimYarKhan", "Jhang", "DeraGhaziKhan", "Gujrat", "Sahiwal", "WahCantonment", "Kasur", "Okara", "Chiniot", "Kamoke", "Hafizabad", "Sadiqabad", "Burewala", "Khanewal", "Muzaffargarh", "MandiBahauddin", "Jhelum", "Khanpur", "Pakpattan", "Daska", "Gojra", "Muridke", "Bahawalnagar", "Samundri", "Jaranwala", "Chishtian", "Attock", "Vehari", "KotAbdulMalik", "Ferozewala", "Chakwal", "Gujranwala", "Kamalia", "AhmedpurEast", "KotAddu", "Wazirabad", "Layyah", "Taxila", "Khushab", "Mianwali", "Lodhran", "Hasilpur", "Bhakkar", "Arifwala", "Sambrial", "Jatoi", "Haroonabad", "Narowal", "Bhalwal"};

std::string Balochistan[54] = {"Quetta", "Turbat", "Khuzdar", "Hub", "Chaman", "DeraMuradJamali", "Gwadar", "DeraAllahYar", "UstaMohammad", "SuiTown", "Sibi", "Loralai", "Tump", "Nushki", "Zhob", "Kharan", "Chitkan", "Khanozai", "Buleda", "Saranan", "Zehri", "Qalat", "Tasp", "Surab", "Pishin", "Mastung", "Qilla Saifullah", "Pasni", "Nal", "Winder", "Uthal", "Huramzai", "MuslimBagh", "DeraBugti", "QillaAbdullah", "Bela", "Wadh", "Washuk", "Awaran", "Machh" ,"Jiwani", "Ormara", "Kohlu", "Bhag", "Dalbandin", "Dhadar", "Musakhel", "Harnai", "Dureji", "Sohbatpur", "GajjarMashkay", "Barkhan", "Shahrug", "Duki"};

std::string KPK[46] = {"Peshawar", "Mardan", "Mingora", "Kohat", "DeraIsmailKhan", "Abbottabad", "Mansehra", "Swabi", "Nowshera", "Kabal", "Charsadda", "Barikot", "Shabqadar", "haripur", "TakhteBahi", "Paharpur", "Batkhela", "Jamrud", "Bahrain", "LakkiMarwat", "Pabbi", "Topi", "Jehangira", "Karak", "Bannu", "Chitral", "Hangu", "Havelian", "Khwazakhela", "Khalabat", "Tank", "Dir", "Matta", "Tordher", "Timargara", "Paroa", "Amangarh", "Risalpur", "Nawan Shehr", "Sadda", "Landi Kotal", "Tangi", "Akora Khattak", "Tall", "Zaida", "Utmanzai"};

std::string Capital = "Islamabad";

std::string temp;

std::string exactdate()
{
    std::string date;

    time_t c_date = time(0);

    char * DATE = ctime(&c_date);

    date = date + DATE[8];

    date = date + DATE[9];

    date = date + DATE[4];

    date = date + DATE[5];

    date = date + DATE[6];

    date = date + DATE[20];

    date = date + DATE[21];

    date = date + DATE[22];

    date = date + DATE[23];

    return date;
}

std::string exacttime()
{
    std::string Time, temp;
    
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
        vector<int> marriagepaper;
        static int Marriagecount;
        static int Divorcecount;
    public:
        Court()
        {

        };

        Court(string namemale, string namefemale, string CNIC_male, string CNIC_female)
        {
            this->namemale = namemale;
            this->namefemale = namefemale;
            this->CNIC_male = CNIC_male;
            this->CNIC_female = CNIC_female;

        }

        void setn_marriagepaper()
        {
            int lower_number = 0;
            int upper_number = 10000000;
			
			srand(time(0));

			regenerate:
                n_marriagepaper = ((rand() % (upper_number - lower_number + 1)) + lower_number);
			
                marriagepaper.push_back(n_marriagepaper);

			    for(int i = 0;i < marriagepaper.size(); i++)
                {
				    for(int j= i + 1;j < marriagepaper.size();j++)
                    {
					    if(marriagepaper[i] == marriagepaper[j])
                        {
						    goto regenerate;
					    }
					}
				}
                Marriagecount++;
		}

        int getn_marriagepaper()
        {
            return n_marriagepaper;
        }

        void setDivorce(int marriage)
        {
            for (int i = 0; i < marriagepaper.size(); i++)
            {
                if (marriage == marriagepaper[i])
                {
                    for (int j = i; j < marriagepaper.size(); j++)
                    {
                        for (int k = i + 1; k < marriagepaper.size(); k++)
                        {
                            marriagepaper[j] = marriagepaper[k];
                        }
                        
                    }
                    
                }
                
            }
            
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
        string CNIC_father;
        string CNIC_mother;
        string statusofhospital;
        string locationofhospital;
        char gender;
        int age;

    public:
        
        Hospital()
        {

        };

        Hospital(string name, string fathername, string mothername, string CNIC_father, string CNIC_mother, string locationofhospital, char gender, string statusofhospital)
        {
            this->name = name;

            this->fathername = fathername;

            this->mothername = mothername;

            this->gender = gender;

            this->CNIC_father = CNIC_father;

            this->CNIC_mother = CNIC_mother;

            this->statusofhospital = statusofhospital;

            this->locationofhospital = locationofhospital;

            setbirthdate();

            setbirthtime();
        }

        void setname(string name)
        {
            this->name = name;
        }

        void setlocationofhospital(string locationofhospital)
        {
            this->locationofhospital = locationofhospital;
        }

        string getlocationofhospital()
        {
            return locationofhospital;
        }

        void setCNIC_father(string CNIC_father)
        {
            this->CNIC_father = CNIC_father;
        }

        string getCNIC_father()
        {
            return CNIC_father;
        }

        void setCNIC_mother(string CNIC_mother)
        {
            this->CNIC_mother = CNIC_mother;
        }

        string getCNIC_mother()
        {
            return CNIC_mother;
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
            deathdate = exactdate();
        }

        void setdeathtime()
        {
            deathtime = exacttime();
        }

        string getdeathdate()
        {
            return deathdate;
        }

        string getdeathtime()
        {
            return deathtime;
        }

        void dischargeforbirth()
        {
            cout<<"Welcome to Discharge Page"<<endl;
            cout<<"The Name of the new born baby is "<<getname()<<endl;
            cout<<"The Father's name is "<<getfathername()<<endl;
            cout<<"The mother's name is "<<getmothername()<<endl;
            cout<<"CNIC number of father is "<<getCNIC_father()<<endl;
            cout<<"CNIC number of mother is "<<getCNIC_mother()<<endl;

        }

};

class Nadra : public Court, public Hospital
{
    private:
        int age;
        std::string birthdate;
        std::string birthtime;
        std::string Citizenship_status;
        std::string country;
        std::string CNIC;
        std::string city;
        std::string deathdate;
        std::string deathtime;
        std::string dateofissue;
        std::string dateofexpiry;
        std::string educationstatus;
        std::string employment_status;
        std::string fathername;
        std::string f_grandfather;
        std::string f_grandmother;
        char gender;     
        std::string mothername;
        std::string m_grandfather;
        std::string m_grandmother;
        int marriagepaper; 
        std::string firstname;
        std::string lastname;
        static int overeighteen;
        static int population;
        std::string province = "province";
        std::string religion;
        std::string relationshipstatus;
        std::string spouse;
        static int undereighteen;

    public:

        Nadra()
        {

        };
        
        void setemploymentstatus(string employment_status)
        {
            this->employment_status = employment_status;
        }

        std::string getemploymentstatus()
        {
            return employment_status;
        }

        Nadra(std::string firstname, std::string lastname, std::string fathername, std::string mothername, std::string religion, char gender, std::string city)
        {
            this->firstname = firstname;
            this->lastname = lastname;
            this->fathername = fathername;
            this->mothername = mothername;
            this->city = city;
            this->religion = religion;
            this->gender = gender;
            relationshipstatus = "single";
            this->birthdate = exactdate();
            this->birthtime = exacttime();
            age = 0;
            undereighteen++;
            population++;
            setdateofissue();
        }

        void setfirstname(std::string firstname)
        {
            this->firstname = firstname;
        }

        void setlastname(std::string lastname)
        {
            this->lastname = lastname;
        }

        void setdateofissue()
        {
            dateofissue = exactdate();
        }

        std::string getdateofissue()
        {
            return dateofissue;
        }

        void setdateofexpiry()
        {
            int num;

            num = stoi(getdateofissue());

            num = num + 5;

            dateofexpiry = to_string(num);

        }

        std::string getdateofexpiry()
        {
            return dateofexpiry;
        }

        std::string getfirstname()
        {
            return firstname;
        }

        std::string getlastname()
        {
            return lastname;
        }

        void setfathername(std::string fathername)
        {
            this->fathername = fathername;
        }

        std::string getfathername()
        {
            return fathername;
        }

        void setmothername(std::string mothername)
        {
            this->mothername = mothername;
        }

        std::string getmothername()
        {
            return mothername;
        }

        void setf_grandfather(std::string f_grandfather)
        {
            this->f_grandfather = f_grandfather;
        }

        std::string getf_grandfather()
        {
            return f_grandfather;
        }

        void setf_grandmother(std::string f_grandmother)
        {
            this->f_grandmother = f_grandmother;
        }

        std::string getf_grandmother()
        {
            return f_grandmother;
        }

        void setcity(std::string city)
        {
            this->city = city;
        }

        std::string getcity()
        {
            return city;
        }

        void setprovince()
        {

            for (int i = 0; i < 51; i++)
            {
                if ((Sindh[i].compare(city)))
                {
                    province = "Sindh";

                    goto end;

                }
            }
            for (int j = 0; j < 54; j++)
            {
                if ((Balochistan[j].compare(city)))
                {
                    province = "Balochistan";

                    goto end;

                }
            }
            for (int k = 0; k < 58; k++)
            {
                if ((Punjab[k].compare(city)))
                {
                    province = "Punjab";

                    goto end;

                }
            }
            for (int l = 0; l < 46; l++)
            {
                if ((KPK[l].compare(city)))
                {
                    province = "KPK";

                    goto end;

                }
            }
            if ((Capital.compare(city)))
            {
                province = "Capital";

                
            }
            end:
                int waste = 0;
        }

        std::string getprovince()
        {
            return province;
        }

        void setcountry()
        {
            if (((getprovince().compare("Sindh")) == 0) || ((getprovince().compare("Baclochistan")) == 0) || ((getprovince().compare("Punjab")) == 0) || ((getprovince().compare("KPK")) == 0) || ((getprovince().compare("Capital")) == 0))
            {
                country = "Pakistan";

            }else
            {
                country = "International";
            }
            
        }

        void setm_grandfather(std::string m_grandfather)
        {
            this->m_grandfather = m_grandfather;
        }

        std::string getm_grandfather()
        {
            return m_grandfather;
        }

        void setm_grandmother(std::string m_grandmother)
        {
            this->m_grandmother = m_grandmother;
        }

        std::string getm_grandmother()
        {
            return m_grandmother;
        }

        void setCNIC()
        {
            CNIC = CNIC + country[0];

            CNIC = CNIC + province[0];

            CNIC = CNIC + city[0];

            CNIC = CNIC + "-";

            if (gender == 'M')
            {
                CNIC = CNIC + "1";

            }else
            {
                CNIC = CNIC + "0";
            }

            CNIC = CNIC + to_string(firstname.length());

            CNIC = CNIC + to_string(fathername.length());
            
            CNIC = CNIC + exactdate()[0];

            CNIC = CNIC + exactdate()[1];

            CNIC  = CNIC + exacttime();

            srand(time(0));

            CNIC = CNIC + to_string((rand() % 9));
            
        }

        std::string getCNIC()
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

        void setdateofexpiry(string a)
        {
            dateofexpiry = exactdate();
        }

        void checkforeighteen ()
        {
        	cout<<"Percentage of People under 18: "<<(undereighteen/population)*100<<"%"<<endl;
        	cout<<"Percentage of People over 18: "<<(overeighteen/population)*100<<"%"<<endl;
		}

        void setage(int age)
        {
            this->age = age;

            if (age >= 18)
            {
                overeighteen++;
                undereighteen--;
            }
            
        }

        void personaldetails()
        {
            cout<<"Your name is "<<getname()<<endl;
            cout<<"Your father name is "<<getfathername()<<endl;
            cout<<"Your mother name is "<<getmothername()<<endl;
            cout<<"Your CNIC number is "<<getCNIC()<<endl;
        }
        bool check_marriagepaper()
        {
        	if(getn_marriagepaper() == marriagepaper ){
        		return true;
			}
			else if(getn_marriagepaper() != marriagepaper){
				return false;
			}
		}
};

int Nadra :: population = 0;
int Nadra :: undereighteen = 0;
int Nadra :: overeighteen = 0;

int main()
{
    int choice1 = 0, choice2 = 0, choice3 = 0;

    cout<<"Enter 1 For Court\nEnter 2 For Hospital\nEnter 3 For Nadra"<<endl;

    cin>>choice1;

    if (choice1 == 1)
    {
        cout<<"Enter 1 for registering a marriage\nEnter 2 for registering a divorce"<<endl;

        cin>>choice2;

    }else if (choice1 == 2)
    {
        cout<<"Enter 1 for Birth\nEnter 2 for Death"<<endl;

        cin>>choice2;

    }else if (choice1 == 3)
    {
        cout<<"Enter 1 for B-form\nEnter 2 for CNIC\nEnter 3 for death certificate\nEnter 4 for others"<<endl;

        cin>>choice2;
    }
    cout<<exactdate()<<endl;

    cout<<exactdate().length()<<endl;

    Hospital H("John", "David", "Sarah", "t", "r", "Multan", 'M', "public");

    Nadra m("John", "Hello", "David", "Sarah", "Islam", 'M', "Karachi");

    m.setprovince();
    m.setcountry();
    m.setCNIC();
    m.personaldetails();
}
