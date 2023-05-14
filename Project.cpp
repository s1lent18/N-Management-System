#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <fstream>
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

string Date()
{
    string date;

    time_t c_date = time(0);

    char * DATE = ctime(&c_date);

    date = date + DATE[8];

    date = date + DATE[9];

    return date;
}

string Month()
{
    string month;

    time_t c_date = time(0);

    char * MONTH = ctime(&c_date);

    month = month + MONTH[4];

    month = month + MONTH[5];

    month = month + MONTH[6];

    return month;
}

string Year()
{
    string year;

    time_t c_date = time(0);

    char * YEAR = ctime(&c_date);

    year = year + YEAR[20];

    year = year + YEAR[21];

    year = year + YEAR[22];

    year = year + YEAR[23];

    return year;
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
            setn_marriagepaper();
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
        string firstname;
        string lastname;
        string fathername;
        string mothername;
        string birthdate;
        string birthtime;
        string deathtime;
        string deathdate;
        string CNIC_father;
        string religion;
        string CNIC_mother;
        string statusofhospital;
        string locationofhospital;
        string gender;
        int age;

    public:
        
        Hospital()
        {

        };

        Hospital(string firstname, string lastname,string fathername, string mothername, string religion, string CNIC_father, string CNIC_mother, string locationofhospital, string gender, string statusofhospital)
        {
            this->firstname = firstname;

            this->lastname = lastname;

            this->fathername = fathername;

            this->mothername = mothername;

            this->gender = gender;

            this->CNIC_father = CNIC_father;

            this->CNIC_mother = CNIC_mother;

            this->statusofhospital = statusofhospital;

            this->religion = religion;

            this->locationofhospital = locationofhospital;

            setbirthdate();

            setbirthtime();
        }

        void setFirstname(string firstname)
        {
            this->firstname = firstname;
        }

        void setReligion(string religion)
        {
            this->religion = religion;
        }

        string getReligion()
        {
            return religion;
        }

        void setLastname(string lastname)
        {
            this->lastname = lastname;
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

        string getLastname()
        {
            return lastname;
        }

        void setCNIC_mother(string CNIC_mother)
        {
            this->CNIC_mother = CNIC_mother;
        }

        string getCNIC_mother()
        {
            return CNIC_mother;
        }

        string getFirstname()
        {
            return firstname;
        }

        string getFathername()
        {
            return fathername;
        }

        string getMothername()
        {
            return mothername;
        }

        string getgender()
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

        void setgender(string gender)
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

        string getBirthdate()
        {
            return birthdate;
        }

        string getBirthtime()
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
            cout<<"The Name of the new born baby is "<<getFirstname()<<" "<<getLastname()<<endl;
            cout<<"The Father's name is "<<getFathername()<<endl;
            cout<<"The mother's name is "<<getMothername()<<endl;
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
        vector<string> AllCNIC;
        std::string city;
        std::string deathdate;
        std::string deathtime;
        std::string dateofissue;
        std::string dateofexpiry;
        std::string educationstatus;
        std::string employment_status;
        std::string fathername;
        string gender;     
        std::string mothername;
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

        void setspouse(string spouse)
        {
            this->spouse = spouse;
        }

        string getspouse()
        {
            return spouse;
        }
        
        void setemploymentstatus(string employment_status)
        {
            this->employment_status = employment_status;
        }

        std::string getemploymentstatus()
        {
            return employment_status;
        }

        Nadra(Hospital & obj)
        {
            this->firstname = obj.getFirstname();
            this->lastname = obj.getLastname();
            this->fathername = obj.getFathername();
            this->mothername = obj.getMothername();
            this->city = obj.getlocationofhospital();
            this->religion = obj.getReligion();
            this->gender = obj.getgender();
            this->birthdate = exactdate();
            this->birthtime = exacttime();
            age = 0;
            undereighteen++;
            population++;
            setemploymentstatus("N/A");
            setrelationshipstatus("Single");
            setdateofissue();
            setdateofexpiry();
            setprovince();
            setcountry();
            setCNIC();
            setcitizenshipstatus();
        }

        void setfirstname(std::string firstname)
        {
            this->firstname = firstname;
        }

        void setGender()
        {
            if (getgender() == "Male")
            {
                gender = "Male";

            } else if (getgender() == "Female")
            {
                gender = "Female";
            }
            
        }

        string getGender()
        {
            return gender;
        }

        void setlastname(std::string lastname)
        {
            this->lastname = lastname;
        }

        void setreligion(string religion)
        {
            this->religion = religion;
        }

        string getreligion()
        {
            return religion;
        }

        void setdateofissue()
        {
            dateofissue = dateofissue + exactdate()[0];

            dateofissue = dateofissue + exactdate()[1];

            dateofissue = dateofissue + "-";

            dateofissue = dateofissue + exactdate()[2];

            dateofissue = dateofissue + exactdate()[3];

            dateofissue = dateofissue + exactdate()[4];

            dateofissue = dateofissue + "-";

            dateofissue = dateofissue + exactdate()[5];

            dateofissue = dateofissue + exactdate()[6];

            dateofissue = dateofissue + exactdate()[7];

            dateofissue = dateofissue + exactdate()[8];
        }

        std::string getdateofissue()
        {
            return dateofissue;
        }

        void setdateofexpiry()
        {
            int num;

            string random;

            random = random + getdateofissue()[7];

            random = random + getdateofissue()[8];

            random = random + getdateofissue()[9];

            random = random + getdateofissue()[10];

            num = stoi(random);

            num = num + 5;

            dateofexpiry = dateofexpiry + getdateofissue()[0];

            dateofexpiry = dateofexpiry + getdateofissue()[1];

            dateofexpiry = dateofexpiry + getdateofissue()[2];

            dateofexpiry = dateofexpiry + getdateofissue()[3];

            dateofexpiry = dateofexpiry + getdateofissue()[4];

            dateofexpiry = dateofexpiry + getdateofissue()[5];

            dateofexpiry = dateofexpiry + getdateofissue()[6];

            dateofexpiry = dateofexpiry + to_string(num);

        }

        std::string getdateofexpiry()
        {
            return dateofexpiry;
        }

        std::string getfirstname()
        {
            return firstname;
        }

        void setrelationshipstatus(string relationshipstatus)
        {
            this->relationshipstatus = relationshipstatus;
        }

        string getrelationshipstatus()
        {
            return relationshipstatus;
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
                if ((Sindh[i].compare(city)) == 0)
                {
                    province = "Sindh";

                    goto end;

                }
            }
            for (int j = 0; j < 54; j++)
            {
                if ((Balochistan[j].compare(city)) == 0)
                {
                    province = "Balochistan";

                    goto end;

                }
            }
            for (int k = 0; k < 58; k++)
            {
                if ((Punjab[k].compare(city)) == 0)
                {
                    province = "Punjab";

                    goto end;

                }
            }
            for (int l = 0; l < 46; l++)
            {
                if ((KPK[l].compare(city)) == 0)
                {
                    province = "KPK";

                    goto end;

                }
            }
            if ((Capital.compare(city)) == 0)
            {
                province = "Capital";

            } else
            {
                province = "International";
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

        string getcountry()
        {
            return country;
        }

        void setcitizenshipstatus()
        {
            if (getcountry() == "Pakistan")
            {
                Citizenship_status = "Pakistani";

            } else
            {
                Citizenship_status = "Foreign-Passport-Holder";
            }   
        }

        string getcitizenshipstatus()
        {
            return Citizenship_status;
        }

        void setCNIC()
        {
            regenerate:

                CNIC = CNIC + country[0];

                CNIC = CNIC + province[0];

                CNIC = CNIC + city[0];

                CNIC = CNIC + "-";

                if (gender == "Male")
                {
                    CNIC = CNIC + "1";

                }else
                {
                    CNIC = CNIC + "0";
                }

                CNIC = CNIC + to_string(firstname.length());

                CNIC = CNIC + to_string(fathername.length());

                CNIC = CNIC + exacttime();

                CNIC = CNIC + firstname[0];

                CNIC = CNIC + mothername[0];

                CNIC = CNIC + "-";
                
                srand(time(0));

                CNIC = CNIC + to_string((rand() % 9));

                for (int i = 0; i < AllCNIC.size(); i++)
                {
                    if (CNIC.compare(AllCNIC[i]) == 0)
                    {
                        CNIC.clear();

                        goto regenerate;
                    }
                    
                }

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

        int getage()
        {
            return age;
        } 

        void personaldetails()
        {
            cout<<"Your first name is "<<getfirstname()<<endl;
            cout<<"Your last name is "<<getlastname()<<endl;
            cout<<"Your father name is "<<getfathername()<<endl;
            cout<<"Your mother name is "<<getmothername()<<endl;
            cout<<"Your CNIC number is "<<getCNIC()<<endl;
            cout<<"Your age is "<<getage()<<endl;
            cout<<"Your gender is "<<getGender()<<endl;
            cout<<"You are a "<<getcitizenshipstatus()<<endl;
            cout<<"You are currently a "<<getemploymentstatus()<<endl;
            cout<<"Your religion is "<<getreligion()<<endl;
            cout<<"You are "<<getrelationshipstatus()<<endl;
            if (getrelationshipstatus() == "married")
            {
                cout<<"The name of your spouse is "<<getspouse()<<endl;
            }
            cout<<"The date of issue of your CNIC is "<<getdateofissue()<<endl;
            cout<<"Your CNIC will expiry on "<<getdateofexpiry()<<endl;
            filing();
        }

        void searchyourself(string cnic)
        {
            int count = 0;

            string search;

            ifstream input;

            string another;

            char character;

            input.open("Project.txt");

            while (!input.eof())
            {
                input >> search;

                cout<<search<<endl;

                if (search.compare(cnic) == 0)
                {
                    while (input.get(character))
                    {
                        if (character == ' ')
                        {
                            if (count == 0)
                            {
                                cout<<"Your CNIC is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 1)
                            {
                                cout<<"Your first name is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if(count == 2)
                            {
                                cout<<"Your last name is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 3)
                            {
                                cout<<"Your father name is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 4)
                            {
                                cout<<"Your mother's name is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 5)
                            {
                                cout<<"Your age is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 6)
                            {
                                cout<<"Your gender is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 7)
                            {
                                cout<<"Your citizenship status is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 8)
                            {
                                cout<<"Your employment status is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 9)
                            {
                                cout<<"Your religion is "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 10)
                            {
                                cout<<"Your CNIC was issued on "<<another<<endl;

                                count++;

                                another.clear();

                            } else if (count == 11)
                            {
                                cout<<"Your CNIC Will expire on "<<another<<endl;

                                another.clear();

                                break;
                            }
                            
                        } else if (character != ' ')
                        {
                            another = another + character;    

                        }
                    }

                    if (count == 11)
                    {
                        break;
                    }
                    

                }
                
            }
            
        }

        void filing()
        {
            char array[100];

            fstream File;

            File.open("Project.txt", ios::app);

            strcpy(array, getCNIC().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getfirstname().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getlastname().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getfathername().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getmothername().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, to_string(getage()).c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getGender().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getcitizenshipstatus().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getemploymentstatus().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getreligion().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getdateofissue().c_str());

            File << array << " ";

            array[0] = 0;

            strcpy(array, getdateofexpiry().c_str());

            File << array << " ";

            array[0] = 0;

            File << endl;

            File.close();

        }

        void readfile()
        {
            char arr[100];

            fstream File("Project.txt");

            while(1)
            {
                File >> arr;

                if (File.eof())
                {
                    break;
                }

                cout<<arr<<endl;
                
            }
            File.close();
        }

        bool check_marriagepaper()
        {
        	if(getn_marriagepaper() == marriagepaper )
            {
        		return true;
			}
			else if(getn_marriagepaper() != marriagepaper)
            {
				return false;
			}
		}
};

int Nadra :: population = 0;
int Nadra :: undereighteen = 0;
int Nadra :: overeighteen = 0;

int main()
{
    //if(cnic.compare(N[i].getCNIC()) == 0)
    //{

    //}

    Hospital H[50];
	Nadra N[50];

    H[0]=Hospital("John", "Hello", "David", "Sarah", "Islam", "t", "r", "Multan", "Male", "public");
    N[0]=Nadra(H[0]);
    H[1]=Hospital("Salman", "Ahmed", "Rashid", "Qainat", "Islam", "t", "r", "Karachi", "Male", "private");
    N[1]=Nadra(H[1]);
    H[2]=Hospital("Kumar", "Sahu", "Sanjay", "Lakshmi", "Hinduism", "t", "r", "Hyderabad", "Male", "public");
    N[2]=Nadra(H[2]);
    H[3]=Hospital("Sameer", "Soomro", "Hassan", "Zulaikha", "Islam", "t", "r", "Sukkur", "Male", "public");
    N[3]=Nadra(H[3]);
    H[4]=Hospital("Maryam", "Khan", "Gulbadin", "Bushra", "Islam", "t", "r", "Swabi", "Female", "public");
    N[4]=Nadra(H[4]);
    H[5]=Hospital("Bilal", "Ahmed", "Mahmoud", "Amina", "Islam", "t", "r", "Damascus", "Male", "public");
    N[5]=Nadra(H[5]);
    H[6]=Hospital("Jalil", "Ali", "Shakoor", "Sadiqa", "Islam", "t", "r", "Riyadh", "Male", "private");
    N[6]=Nadra(H[6]);
    H[7]=Hospital("Hammad", "Azeem", "Tariq", "Zainab", "Islam", "t", "r", "Rawalpindi", "Male", "public");
    N[7]=Nadra(H[7]);
    H[8]=Hospital("Sylvester", "Mello", "Samson", "Rosa", "Christianity", "t", "r", "Kandiaro", "Male", "public");
    N[8]=Nadra(H[8]);
    H[9]=Hospital("Sarah", "Samuel", "Liam", "Meagan", "Christianity", "t", "r", "Faisalabad", "Female", "private");
    N[9]=Nadra(H[9]);
    H[10]=Hospital("Deepti", "Sharma", "Vijay", "Sunita", "Hinduism", "t", "r", "Dehli", "Female", "private");
    N[10]=Nadra(H[10]);
    H[11]=Hospital("Sulaiman", "Saleem", "Saleem", "Ayesha", "Islam", "t", "r", "RahimYarKhan", "Male", "public");
    N[11]=Nadra(H[11]);
    H[12]=Hospital("Maira", "Shaikh", "Asif", "Sara", "Islam", "t", "r", "Karachi", "Female", "private");
    N[12]=Nadra(H[12]);
    H[13]=Hospital("Asifa", "Tariq", "Ali", "Sumaira", "Islam", "t", "r", "Mingora", "Female", "public");
    N[13]=Nadra(H[13]);
    H[14]=Hospital("Imran", "Khan", "Nawaz", "Yasmeen", "Islam", "t", "r", "Nowshera", "Male", "private");
    N[14]=Nadra(H[14]);
    H[15]=Hospital("Sunita", "Ram", "Ram", "Sunaina", "Hinduism", "t", "r", "Sanghar", "Female", "public");
    N[15]=Nadra(H[15]);
    H[16]=Hospital("Angel", "ken", "John", "Eve", "Christianity", "t", "r", "Auckland", "Male", "private");
    N[16]=Nadra(H[16]);
    H[17]=Hospital("Sameena", "Saleem", "Azam", "Fozia", "Islam", "t", "r", "DeraMuradJamali", "Female", "public");
    N[17]=Nadra(H[17]);
	H[18]=Hospital("Ghulam", "Ali", "Zubair", "Amna", "Islam", "t", "r", "Jhang", "Male", "public");
    N[18]=Nadra(H[18]);
    H[19]=Hospital("Aabidah", "Parveen", "Naseem", "Rida", "Islam", "t", "r", "Loralai", "Female", "public");
    N[19]=Nadra(H[19]);
    H[20]=Hospital("Asim", "Theba", "Junaid", "Nimra", "Islam", "t", "r", "Lahore", "Male", "public");
    N[20]=Nadra(H[20]);
    H[21]=Hospital("Shairaz", "Memon", "Yahya", "Wajiha", "Islam", "t", "r", "MandiBahauddin", "Male", "public");
    N[21]=Nadra(H[21]);
    H[22]=Hospital("Rida", "Tariq", "Tariq", "Maira", "Islam", "t", "r", "Quetta", "Female", "private");
    N[22]=Nadra(H[22]);
    H[23]=Hospital("Shanti", "Priya", "Manoj", "Usha", "Hinduism", "t", "r", "Saranan", "Female", "private");
    N[23]=Nadra(H[23]);
    H[24]=Hospital("Manoj", "Tiwari", "Vinod", "Sunita", "Hinduism", "t", "r", "Shikarpur", "Male", "public");
    N[24]=Nadra(H[24]);
    H[25]=Hospital("Peter", "Phillip", "Stephen", "Ruth", "Christianity", "t", "r", "WahCantonment", "Male", "public");
    N[25]=Nadra(H[25]);
    H[26]=Hospital("Abuzar", "Ali", "Salman", "Zainab", "Islam", "t", "r", "Aleppo", "Male", "public");
    N[26]=Nadra(H[26]);
    H[27]=Hospital("Javeria", "Javed",  "Javed", "Bushra", "Islam", "t", "r", "Tabuk", "Female", "private");
    N[27]=Nadra(H[27]);
    H[28]=Hospital("Deepak", "Kalal", "Rohit", "Deepti", "Hinduism", "t", "r", "NaushahroFeroze", "Male", "public");
    N[28]=Nadra(H[28]);
    H[29]=Hospital("Tayyaba", "Noor", "Nauman", "Nabila", "Islam", "t", "r", "UstaMohammad", "Female", "public");
    N[29]=Nadra(H[29]);
    H[30]=Hospital("Kashif", "Zubair", "Zunair", "Naaila", "Islam", "t", "r", "Khairpur", "Male", "public");
    N[30]=Nadra(H[30]);
    H[31]=Hospital("Jetha", "Gadha", "Jaikant", "Jainti", "Hinduism", "t", "r", "Thatta", "Male", "public");
    N[31]=Nadra(H[31]);
    H[32]=Hospital("Saleem", "Orakzai", "Akbar", "Anarkali", "Islam", "t", "r", "Kabul", "Male", "public");
    N[32]=Nadra(H[32]);
    H[33]=Hospital("Sualeha", "Faakhir", "Faakhir", "Seema", "Islam", "t", "r", "Karachi", "Female", "private");
    N[33]=Nadra(H[33]);
    H[34]=Hospital("Aadil", "Abbas", "Omair", "Khadija", "Islam", "t", "r", "Khuzdar", "Male", "private");
    N[34]=Nadra(H[34]);
    H[35]=Hospital("Khurram", "Bakhsh", "Aabid", "Naseema", "Islam", "t", "r", "Gujranwala", "Male", "private");
    N[35]=Nadra(H[35]);
    H[36]=Hospital("Zahra", "Qayumi", "Qamar", "Aabida", "Islam", "t", "r", "Islamabad", "Female", "private");
    N[36]=Nadra(H[36]);
    H[37]=Hospital("Sufyan", "Khan", "Ibrahim", "Sadaf", "Islam", "t", "r", "Pesahwar", "Male", "public");
    N[37]=Nadra(H[37]);
    H[38]=Hospital("Roque", "Martin", "Aaron", "Gemma", "Christianity", "t", "r", "Sydney", "Male", "public");
    N[38]=Nadra(H[38]);
    H[39]=Hospital("Dinesh", "Kartik", "Virat", "Anushka", "Hinduism", "t", "r", "Mumbai", "Male", "public");
    N[39]=Nadra(H[39]);
    H[40]=Hospital("Hamza", "Saif", "Khurram", "Zara", "Islam", "t", "r", "Bahawalpur", "Male", "private");
    N[40]=Nadra(H[40]);
    H[41]=Hospital("Namrah", "Nizai", "Pervaiz", "Namira", "Islam", "t", "r", "Karachi", "Female", "private");
    N[41]=Nadra(H[41]);
    H[42]=Hospital("Rana", "Hamza", "Irfan", "Sitara", "Islam", "t", "r", "Moro", "Male", "public");
    N[42]=Nadra(H[42]);
    H[43]=Hospital("Gopal", "Ram", "Shiv", "Savitri", "Hinduism", "t", "r", "TandoAllahyar", "Male", "public");
    N[43]=Nadra(H[43]);
    H[44]=Hospital("Jude", "Lobo", "Jaden", "Jess", "Christianity", "t", "r", "Larkana", "Male", "public");
    N[44]=Nadra(H[44]);
    H[45]=Hospital("Gita", "Kumari", "Ashok", "Anita", "Hinduism", "t", "r", "Shikarpur", "Female", "public");
    N[45]=Nadra(H[45]);
    H[46]=Hospital("Dania", "Amir", "Shoaib", "Areeba", "Islam", "t", "r", "Sargodha", "Female", "private");
    N[46]=Nadra(H[46]);
    H[47]=Hospital("Danial", "Sohaib", "kamran", "Abeeha", "Islam", "t", "r", "Abbottabad", "Male", "private");
    N[47]=Nadra(H[47]);
    H[48]=Hospital("Ethan", "Adah", "Abraham", "Abigail", "Christianity", "t", "r", "Munich", "Male", "private");
    N[48]=Nadra(H[48]);
    H[49]=Hospital("Santosh", "Vijay", "Rajesh", "Rekha", "Hinduism", "t", "r", "Kolkata", "Male", "public");
    N[49]=Nadra(H[49]);
    
    for (int i = 0; i < 50; i++)
    {
        N[i].filing();
    }
    string c1;
    
    while (c1!="3"){
	cout << "******Management System***********" << endl << endl;
    cout << "Main Menu\n";
    cout <<"1-Hospital\n2-NADRA Pakistan\n3-EXIT" << endl;
    cin >> c1;
    if (c1=="1"){
    		string b11;
    	
    	
    	while (b11!="2"){
    		cout <<"Welcome to the Database fo All Hospitals" << endl;
    		cout << "1- Discharge Papers\n2-Exit" << endl;
    		cin >> b11;
    		cout << "1-Discharge Papers" << endl;
			if (b11=="1"){
				cout << "Enter the NUMBER of the child";
				int b13;
				cin >> b13;
				H[b13].dischargeforbirth();
				
			} 
    		
		}
	}
    else if(c1=="2"){
    cout<< "*************NADRA Pakistan***************"<< endl<< endl;
    
    cout << "About Us:\nNational Database and Registration Authority (NADRA)\nwas established as National Database Organization (NDO),\nan attached department under the Ministry of Interior,\nGovernment of Pakistan in 1998." << endl;
 
     string b1 ;
    while (b1!="4"){
	cout << "\n\n\nPlease make your selection\n";
    cout << "1 - For Personal Details\n";
    cout << "2 - Search For yourself\n";
    cout << "3 - Statistics For Legal Age\n4 - EXIT";
	cin >> b1;
	if (b1=="1"){
	for (int i=0; i<50; i++){
		N[i].personaldetails();
		
		
	}
}
	else if(b1=="2"){
		cout << "Enter Citizen's CNIC Number for Complete Information\nCNIC:";
		string b22;
		cin >> b22;
		int i;
		N[i].searchyourself(b22);
	}
	else if (b1=="3"){
		cout << "\n\n" ;
			N[49].checkforeighteen();

	}

}
cout << "\n\nContact Us:\nNational Database & Registration Authority\n\nAddress:NADRA State Bank of Pakistan Building, Shahrah-i-Jamhuriat, G-5/2, Islamabad, 44000, Pakistan\n\nPhone:1777 (for subscribers of Mobilink,Ufone,Telenor and Zong)\n+92 51 111 786 100(for fixed lines and overseas applicants)\nWebsite:https://www.nadra.gov.pk"<< endl;
}

}
cout << "Created By:\nMuhammad Huzaifa(22k-4641)\nAbdul Rafay (22k-4462)\nAli Jafar (22k-4301)"<< endl;
}
 
