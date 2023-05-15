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

std::string Punjab[58] = {"Lahore", "Faisalabad", "Rawalpindi", "Gujranwala", "Multan", "Bahawalpur", "Sargodha", "Sialkot", "Sheikhupura", "RahimYarKhan", "Jhang", "DeraGhaziKhan", "Gujrat", "Sahiwal", "WahCantonment", "Kasur", "Okara", "Chiniot", "Kamoke", "Hafizabad", "Sadiqabad", "Burewala", "Khanewal", "Muzaffargarh", "MandiBahauddin", "Jhelum", "Khanpur", "Pakpattan", "Daska", "Gojra", "Muridke", "Bahawalnagar", "Samundri", "Jaranwala", "Chishtian", "Attock", "Vehari", "KotAbdulMalik", "Ferozewala", "Chakwal", "Gujranwala", "Kamalia", "AhmedpurEast", "KotAddu", "Wazirabad", "Layyah", "Taxila", "Khushab", "Mianwali", "Lodhran", "Hasilpur", "Bhakkar", "Arifwala", "Sambrial", "Jatoi", "Haroonabad", "Narowal", "Bhalwal"};

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
            Marriagecount++;
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
		}

        int getn_marriagepaper()
        {
            return n_marriagepaper;
        }

        void setDivorce(int marriage)
        {
            Divorcecount++;

            for (int i = 0; i < marriagepaper.size(); i++)
            {
                if (marriage == marriagepaper[i])
                {
                    for (int j = i; j < marriagepaper.size(); j++)
                    {
                        for (int k = i + 1; k < marriagepaper.size(); k++)
                        {
                            marriagepaper[j] = marriagepaper[k];

                            cout<<"You are now Divorced"<<endl;
                        }
                        
                    }
                    
                }
                
            }

        }

        static void nMarriages()
        {
            cout << "Number of marriages till now "<< Marriagecount << endl;
            cout << "Number of divorces till now "<< Divorcecount << endl;
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
        string religion;
        string statusofhospital;
        string locationofhospital;
        string gender;
        int age;
        static int privatecount;
        static int publiccount;
    public:
        
        Hospital()
        {

        };

        Hospital(string firstname, string lastname, string fathername, string mothername, string religion, string locationofhospital, string gender, string statusofhospital)
        {
            this->firstname = firstname;

            this->lastname = lastname;

            this->fathername = fathername;

            this->mothername = mothername;

            this->gender = gender;

            setstatusofhospital(statusofhospital);

            this->religion = religion;

            this->locationofhospital = locationofhospital;

            setbirthdate();

            setbirthtime();
        }

        static int getprivatecount()
        {
            return privatecount;
        }

        static int getpubliccount()
        {
            return publiccount;            
        }

        void setstatusofhospital(string statusofhospital)
        {
            this->statusofhospital = statusofhospital;

            if (statusofhospital.compare("Private") == 0)
            {
                cout << "HI";

                privatecount++;

            } else if (statusofhospital.compare("Public") == 0)
            {
                cout << "BI";

                publiccount++;
            }
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

        string getLastname()
        {
            return lastname;
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
        string password;
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

        void setpassword()
        {
            static const char generate[] = 
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
            
            int len = sizeof(generate) - 1;

            srand(static_cast<unsigned int>(time(0)));

            for (int i = 0; i < 8; i++)
            {
                password = password + generate[rand() % len];
            }
            
        }

        string getpassword()
        {
            return password;
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
            setpassword();
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

        void setcitizenshipstatus(string citizenshipstatus)
        {
            this->Citizenship_status = citizenshipstatus;
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
            srand(time(0));

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
            cout<<"The date of issue of your CNIC is "<<getdateofissue()<<endl;
            cout<<"Your CNIC will expiry on "<<getdateofexpiry()<<endl;
            cout<<"Your password is "<<getpassword()<<endl;

        }

        void searchyourself(string cnic)
        {
            int count = 0;

            string search;

            ifstream input("Project.txt");

            if (!input)
            {
                cout<<"File cant be opened"<<endl;

                return;
            }

            string another;

            char character;

            bool flag = false;

            while (input >> search)
            {
                if (search.compare(cnic) == 0)
                {
                    flag = true;

                    while (input.get(character))
                    {
                        if (character == ' ')
                        {
                            if (count == 0)
                            {
                                cout<<"Your CNIC is "<<cnic<<endl;

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

                            if (count == 11)
                            {  
                                break;
                            }
                            
                        } else if (character != ' ')
                        {
                            another = another + character;    

                        }
                    }

                    break;

                }
                
            }

            if (!flag)
            {
                cout<<"CNIC is not in the list please visit a Nadra facility for more help "<<endl;
            }
            
            input.close();
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
       
        void stats()
        {
            cout << "Current population is " << population << endl;

            cout << "Number of people born in public hospitals "<< ((getpubliccount())) << endl;

            cout << "Number of people born in private hospitals "<< ((getprivatecount())) << endl;

            nMarriages();

            checkforeighteen();
        }

        void edit(string b, string c)
        {
            fstream file("Project.txt", ios::in | ios::out);

            vector<string> data;

            string fullline, cn;

            bool flag = false;

            while (getline(file, fullline))
            {
                data.push_back(fullline);
            }

            for (string & enter : data)
            {
                cn = enter.substr(0, enter.find_first_of(' '));

                if (c.compare(cn) == 0)
                {
                    enter = enter + " ";

                    enter = c + b;

                    flag = true;

                    break;
                }
                
            }

            if (!flag)
            {
                cout<<"data not found"<<endl;
            }

            file.close();

            ofstream File("Project.txt");

            for (const string & enter : data)
            {
                File << enter << endl;
            }

            File.close();
            
        }

};

int Nadra :: population = 0;
int Nadra :: undereighteen = 0;
int Nadra :: overeighteen = 0;
int Court :: Marriagecount = 0;
int Court :: Divorcecount = 0;
int Hospital :: privatecount = 0;
int Hospital :: publiccount = 0;


int main()
{
    string password = "passw0rd";
    string username, pas;
    string pass, input;
    int nmarriages = 0, choice2;
    string male, female, cnicm, cnicf;
    Hospital H[55];
	Nadra N[55];
    Court C[55];
    string ccnic, through;
    int cat;

    bool flag1 = false, flag2 = false;

    string firstname, lastname, fathername, mothername, locationofhospital, gender, statusofhospital, religion;

    srand(time(0));

    H[0]=Hospital("John", "Hello", "David", "Sarah", "Islam", "Multan", "Male", "Public");
    N[0]=Nadra(H[0]);
    H[1]=Hospital("Salman", "Ahmed", "Rashid", "Qainat", "Islam", "Karachi", "Male", "Private");
    N[1]=Nadra(H[1]);
    H[2]=Hospital("Kumar", "Sahu", "Sanjay", "Lakshmi", "Hinduism", "Hyderabad", "Male", "Public");
    N[2]=Nadra(H[2]);
    H[3]=Hospital("Sameer", "Soomro", "Hassan", "Zulaikha", "Islam", "Sukkur", "Male", "Public");
    N[3]=Nadra(H[3]);
    H[4]=Hospital("Maryam", "Khan", "Gulbadin", "Bushra", "Islam", "Swabi", "Female", "Public");
    N[4]=Nadra(H[4]);
    H[5]=Hospital("Bilal", "Ahmed", "Mahmoud", "Amina", "Islam", "Damascus", "Male", "Public");
    N[5]=Nadra(H[5]);
    H[6]=Hospital("Jalil", "Ali", "Shakoor", "Sadiqa", "Islam", "Riyadh", "Male", "Private");
    N[6]=Nadra(H[6]);
    H[7]=Hospital("Hammad", "Azeem", "Tariq", "Zainab", "Islam", "Rawalpindi", "Male", "Public");
    N[7]=Nadra(H[7]);
    H[8]=Hospital("Sylvester", "Mello", "Samson", "Rosa", "Christianity", "Kandiaro", "Male", "Public");
    N[8]=Nadra(H[8]);
    H[9]=Hospital("Sarah", "Samuel", "Liam", "Meagan", "Christianity", "Faisalabad", "Female", "Private");
    N[9]=Nadra(H[9]);
    H[10]=Hospital("Deepti", "Sharma", "Vijay", "Sunita", "Hinduism", "Dehli", "Female", "Private");
    N[10]=Nadra(H[10]);
    H[11]=Hospital("Sulaiman", "Saleem", "Saleem", "Ayesha", "Islam", "RahimYarKhan", "Male", "Public");
    N[11]=Nadra(H[11]);
    H[12]=Hospital("Maira", "Shaikh", "Asif", "Sara", "Islam", "Karachi", "Female", "Private");
    N[12]=Nadra(H[12]);
    H[13]=Hospital("Asifa", "Tariq", "Ali", "Sumaira", "Islam", "Mingora", "Female", "Public");
    N[13]=Nadra(H[13]);
    H[14]=Hospital("Imran", "Khan", "Nawaz", "Yasmeen", "Islam", "Nowshera", "Male", "Private");
    N[14]=Nadra(H[14]);
    H[15]=Hospital("Sunita", "Ram", "Ram", "Sunaina", "Hinduism", "Sanghar", "Female", "Public");
    N[15]=Nadra(H[15]);
    H[16]=Hospital("Angel", "ken", "John", "Eve", "Christianity", "Auckland", "Male", "Private");
    N[16]=Nadra(H[16]);
    H[17]=Hospital("Sameena", "Saleem", "Azam", "Fozia", "Islam", "DeraMuradJamali", "Female", "Public");
    N[17]=Nadra(H[17]);
	H[18]=Hospital("Ghulam", "Ali", "Zubair", "Amna", "Islam", "Jhang", "Male", "Public");
    N[18]=Nadra(H[18]);
    H[19]=Hospital("Aabidah", "Parveen", "Naseem", "Rida", "Islam", "Loralai", "Female", "Public");
    N[19]=Nadra(H[19]);
    H[20]=Hospital("Asim", "Theba", "Junaid", "Nimra", "Islam", "Lahore", "Male", "Public");
    N[20]=Nadra(H[20]);
    H[21]=Hospital("Shairaz", "Memon", "Yahya", "Wajiha", "Islam", "MandiBahauddin", "Male", "Public");
    N[21]=Nadra(H[21]);
    H[22]=Hospital("Rida", "Tariq", "Tariq", "Maira", "Islam", "Quetta", "Female", "Private");
    N[22]=Nadra(H[22]);
    H[23]=Hospital("Shanti", "Priya", "Manoj", "Usha", "Hinduism", "Saranan", "Female", "Private");
    N[23]=Nadra(H[23]);
    H[24]=Hospital("Manoj", "Tiwari", "Vinod", "Sunita", "Hinduism", "Shikarpur", "Male", "Public");
    N[24]=Nadra(H[24]);
    H[25]=Hospital("Peter", "Phillip", "Stephen", "Ruth", "Christianity", "WahCantonment", "Male", "Public");
    N[25]=Nadra(H[25]);
    H[26]=Hospital("Abuzar", "Ali", "Salman", "Zainab", "Islam", "Aleppo", "Male", "Public");
    N[26]=Nadra(H[26]);
    H[27]=Hospital("Javeria", "Javed",  "Javed", "Bushra", "Islam", "Tabuk", "Female", "Private");
    N[27]=Nadra(H[27]);
    H[28]=Hospital("Deepak", "Kalal", "Rohit", "Deepti", "Hinduism", "NaushahroFeroze", "Male", "Public");
    N[28]=Nadra(H[28]);
    H[29]=Hospital("Tayyaba", "Noor", "Nauman", "Nabila", "Islam", "UstaMohammad", "Female", "Public");
    N[29]=Nadra(H[29]);
    H[30]=Hospital("Kashif", "Zubair", "Zunair", "Naaila", "Islam", "Khairpur", "Male", "Public");
    N[30]=Nadra(H[30]);
    H[31]=Hospital("Jetha", "Gadha", "Jaikant", "Jainti", "Hinduism", "Thatta", "Male", "Public");
    N[31]=Nadra(H[31]);
    H[32]=Hospital("Saleem", "Orakzai", "Akbar", "Anarkali", "Islam", "Kabul", "Male", "Public");
    N[32]=Nadra(H[32]);
    H[33]=Hospital("Sualeha", "Faakhir", "Faakhir", "Seema", "Islam", "Karachi", "Female", "Private");
    N[33]=Nadra(H[33]);
    H[34]=Hospital("Aadil", "Abbas", "Omair", "Khadija", "Islam", "Khuzdar", "Male", "Private");
    N[34]=Nadra(H[34]);
    H[35]=Hospital("Khurram", "Bakhsh", "Aabid", "Naseema", "Islam", "Gujranwala", "Male", "Private");
    N[35]=Nadra(H[35]);
    H[36]=Hospital("Zahra", "Qayumi", "Qamar", "Aabida", "Islam", "Islamabad", "Female", "Private");
    N[36]=Nadra(H[36]);
    H[37]=Hospital("Sufyan", "Khan", "Ibrahim", "Sadaf", "Islam", "Pesahwar", "Male", "Public");
    N[37]=Nadra(H[37]);
    H[38]=Hospital("Roque", "Martin", "Aaron", "Gemma", "Christianity", "Sydney", "Male", "Public");
    N[38]=Nadra(H[38]);
    H[39]=Hospital("Dinesh", "Kartik", "Virat", "Anushka", "Hinduism", "Mumbai", "Male", "Public");
    N[39]=Nadra(H[39]);
    H[40]=Hospital("Hamza", "Saif", "Khurram", "Zara", "Islam", "Bahawalpur", "Male", "Private");
    N[40]=Nadra(H[40]);
    H[41]=Hospital("Namrah", "Nizai", "Pervaiz", "Namira", "Islam", "Karachi", "Female", "Private");
    N[41]=Nadra(H[41]);
    H[42]=Hospital("Rana", "Hamza", "Irfan", "Sitara", "Islam", "Moro", "Male", "Public");
    N[42]=Nadra(H[42]);
    H[43]=Hospital("Gopal", "Ram", "Shiv", "Savitri", "Hinduism", "TandoAllahyar", "Male", "Public");
    N[43]=Nadra(H[43]);
    H[44]=Hospital("Jude", "Lobo", "Jaden", "Jess", "Christianity", "Larkana", "Male", "Public");
    N[44]=Nadra(H[44]);
    H[45]=Hospital("Gita", "Kumari", "Ashok", "Anita", "Hinduism", "Shikarpur", "Female", "Public");
    N[45]=Nadra(H[45]);
    H[46]=Hospital("Dania", "Amir", "Shoaib", "Areeba", "Islam", "Sargodha", "Female", "Private");
    N[46]=Nadra(H[46]);
    H[47]=Hospital("Danial", "Sohaib", "kamran", "Abeeha", "Islam", "Abbottabad", "Male", "Private");
    N[47]=Nadra(H[47]);
    H[48]=Hospital("Ethan", "Adah", "Abraham", "Abigail", "Christianity", "Munich", "Male", "Private");
    N[48]=Nadra(H[48]);
    H[49]=Hospital("Santosh", "Vijay", "Rajesh", "Rekha", "Hinduism", "Kolkata", "Male", "Public");
    N[49]=Nadra(H[49]);
    
    cat = 49;

    N[49].personaldetails();

    for (int i = 0; i < 50; i++)
    {
        N[i].filing();
    }
    int c1, b1, choice = 0;

    
    do
    {
        cout << "1 - Proceed as Admin " << endl << "2 - Proceed as User " << endl << "3 - Exit "<<endl;

        cin >> choice;

        if (choice == 1)
        {
            cout << "Welcome " << endl << "Enter the username and password "<< endl;

            cin >> username >> pas;
            
            if ((username.compare("Admin") == 0) && (pas.compare("passw0rd") == 0))
            {
                do
                {
                    cout << "1 - Add another User " << endl << "2 - Generate Complete Database " << endl << "3 - Exit " << endl;  

                    cin >> choice2;

                    if (choice2 == 1)
                    {
                        cout << "Enter the new first name " << endl;

                        cin >> firstname ;

                        cout << "Enter the new last name " << endl;

                        cin >> lastname;

                        cout << "Enter the father's name " << endl;

                        cin >> fathername;

                        cout << "Enter the mother's name " << endl;

                        cin >> mothername;

                        do
                        {
                            cout << "Enter the name of the city you were born in " << endl;

                            cin >> locationofhospital;

                        } while ((locationofhospital[0] < 'A') || (locationofhospital[0] > 'Z'));
                        

                        do
                        {
                            cout << "Enter your gender " << endl;

                            cin >> gender;

                        } while ((gender.compare("Male") != 0) && (gender.compare("Female") != 0));
                        
                        do
                        {
                            cout <<"Enter the status of hospital (Public/Private) " << endl;

                            cin >> statusofhospital;

                        } while ((statusofhospital.compare("Private") != 0) && statusofhospital.compare("Public") != 0);
                        
                        

                        cout << "Enter your religion " << endl;

                        cin >> religion;

                        H[cat] = Hospital(firstname, lastname, fathername, mothername, religion, locationofhospital, gender, statusofhospital);
                        N[cat] = Nadra(H[cat]);

                        N[cat].filing();

                    } else if (choice2 == 2)
                    {
                        cout<<" generating complete database "<< endl;

                        for (int i = 0; i < 50; i++)
                        {
                            N[i].personaldetails();
                        }
                    }

                } while (choice2 != 3);
                
            }
            
        } else if (choice == 2)
        {
            cout << "Enter your CNIC number & your set password " << endl;

            cin >> ccnic >> through;

            for (int i = 0; i < 50; i++)
            {
                if ((ccnic.compare(N[i].getCNIC()) == 0) && (through.compare(N[i].getpassword()) == 0))
                {
                    do
                    {
                        cout << "******Management System***********" << endl << endl;
                            
                        cout << "Main Menu\n";
                            
                        cout <<"1-NADRA Pakistan\n2-EXIT" << endl;
                            
                        cin >> c1;

                        if(c1 == 1)
                        {
                            cout<< "*************NADRA Pakistan***************"<< endl<< endl;
                            
                            cout << "About Us:\nNational Database and Registration Authority (NADRA)\nwas established as National Database Organization (NDO),\nan attached department under the Ministry of Interior,\nGovernment of Pakistan in 1998." << endl;
                        
                            int b1;

                            do
                            {
                                cout << "\n\n\nPlease make your selection "<<endl;
                                    
                                cout << "1 - Search For yourself "<<endl;
                            
                                cout << "2 - Statistics For Legal Age "<<endl;
                                    
                                cout << "3 - Registering a marriage "<<endl;

                                cout << "4 - Registering a divorce "<<endl;

                                cout << "5 - Changing any details "<<endl;

                                cout << "6 - EXIT"<<endl;
                                    
                                cin >> b1;
                                
                                if(b1 == 1)
                                {
                                    cout << "Enter Citizen's CNIC Number for Complete Information"<<endl<<"CNIC: ";

                                    string b22;
                                        
                                    cin >> b22;
                                
                                    N[49].searchyourself(b22);
                                
                                } else if (b1 == 2)
                                {
                                    cout << "\n\n";
                                
                                    N[cat].stats();

                                }  else if (b1 == 3)
                                {
                                    cout << "Enter the groom's CNIC number "<<endl;

                                    cin >> cnicm;

                                    cout << "Enter the bride's CNIC number "<<endl;

                                    cin >> cnicf;

                                    int check = 0;

                                    for (int i = 0; i < 50; i++)
                                    {
                                        if (((cnicm.compare(N[i].getCNIC())) == 0) && ((N[i].getage()) >= 18))
                                        {
                                            if ((N[i].getGender().compare("Male")) == 0)
                                            {
                                                flag1 = true;
                                            }
                                            
                                            N[i].setrelationshipstatus("Married");

                                            check++;

                                        } else if (((cnicf.compare(N[i].getCNIC())) == 0) && ((N[i].getage()) >= 18))
                                        {
                                            if ((N[i].getGender().compare("Female")) == 0)
                                            {
                                                flag2 = true;
                                            }

                                            N[i].setrelationshipstatus("Married");

                                            check++;
                                        }
                                        
                                    }
                                    if (check == 2)
                                    {
                                        C[nmarriages] = Court(male, female, cnicm, cnicf);
                                        
                                        check = 0;

                                        for (int i = 0; i < 50; i++)
                                        {
                                            if (((cnicm.compare(N[i].getCNIC())) == 0) && ((N[i].getage()) >= 18))
                                            {
                                                N[i].setmarriagepaper(C[nmarriages].getn_marriagepaper());
                                            }

                                            if (((cnicf.compare(N[i].getCNIC())) == 0) && ((N[i].getage()) >= 18))
                                            {
                                                N[i].setmarriagepaper(C[nmarriages].getn_marriagepaper());
                                            }
                                            
                                        }
                                        nmarriages++;
                                        cnicf.clear();
                                        cnicm.clear();

                                    } else
                                    {
                                        cout << "Not Qualified for marriage "<<endl;
                                    }
                                    
                                } else if (b1 == 4)
                                {
                                    int number;

                                    cout << "Enter your marriage registeration number "<<endl;

                                    cin >> number;

                                    cout << "Enter the husband's CNIC"<<endl;

                                    cin >> cnicm;

                                    cout << "Enter the wife's CNIC"<<endl;

                                    cin >> cnicf;

                                    C[nmarriages].setDivorce(number);
                                    
                                    for (int i = 0; i < 50; i++)
                                    {
                                        if ((cnicm.compare(N[i].getCNIC())) == 0)
                                        {
                                            N[i].setrelationshipstatus("Divorced");
                                            N[i].setmarriagepaper(0);
                                        }

                                        if ((cnicf.compare(N[i].getCNIC())) == 0)
                                        {
                                            N[i].setrelationshipstatus("Divorced");
                                            N[i].setmarriagepaper(0);
                                        }
                                    }
                                    
                                }  else if (b1 == 5)
                                {
                                    cnicf.clear();

                                    cout << "Enter your CNIC "<<endl;

                                    cin >> cnicf;

                                    cout << "Enter the password of the CNIC holder " <<endl;

                                    cin >> pas;

                                    for (int i = 0; i < 50; i++)
                                    {
                                        if (((cnicf.compare(N[i].getCNIC())) == 0) && (pas.compare(N[i].getpassword())) == 0)
                                        {
                                            int d0 = 0;

                                            string b;

                                            while(d0 != 9)
                                            {
                                                cout << "Which detail you want to correct "<< endl << "1 - First Name "<< endl << "2 - Last name " << endl <<"3 - Father's Name " << endl << "4 - Mother's Name" << endl<< "5 - Age" << endl << "6 - Citizenship status "<< endl << "7 - Employment Status " << endl << "8 - Religion" << endl << "9 - Exit" << endl;

                                                cin >> d0;

                                                if (d0 == 1)
                                                {
                                                    cout << "Enter your first name's correction "<<endl;

                                                    cin >> input;

                                                    N[i].setfirstname(input);

                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);
                                                    
                                                } else if (d0 == 2)
                                                {
                                                    cout << "Enter your last name's correction "<<endl;

                                                    cin >> input;

                                                    N[i].setlastname(input);
                                                    
                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);
                                                    
                                                } else if (d0 == 3)
                                                {
                                                    cout << "Enter your father's name's correction "<<endl;

                                                    cin >> input;

                                                    N[i].setfathername(input);

                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);
                                                    
                                                } else if (d0 == 4)
                                                {
                                                    cout << "Enter your mother name's correction "<<endl;

                                                    cin >> input;

                                                    N[i].setmothername(input);

                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);
                                                    
                                                } else if (d0 == 5)
                                                {
                                                    cout << "Enter your age correction "<<endl;

                                                    cin >> input;

                                                    N[i].setage(stoi(input));

                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);

                                                } else if (d0 == 6)
                                                {
                                                    cout << "Enter your citizenship status "<<endl;

                                                    cin >> input;

                                                    N[i].setcitizenshipstatus(input);

                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);
                                                    
                                                } else if (d0 == 7)
                                                {
                                                    cout << "Enter your employment status "<<endl;

                                                    cin >> input;

                                                    N[i].setemploymentstatus(input);

                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);
                                                    
                                                } else if (d0 == 8)
                                                {
                                                    cout << "Enter your religion "<<endl;

                                                    cin >> input;

                                                    N[i].setreligion(input);

                                                    b = b + " ";
                                                    b = b + N[i].getfirstname();
                                                    b = b + " ";
                                                    b = b + N[i].getlastname();
                                                    b = b + " ";
                                                    b = b + N[i].getfathername();
                                                    b = b + " ";
                                                    b = b + N[i].getmothername();
                                                    b = b + " ";
                                                    b = b + to_string(N[i].getage());
                                                    b = b + " ";
                                                    b = b + N[i].getGender();
                                                    b = b + " ";
                                                    b = b + N[i].getcitizenshipstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getemploymentstatus();
                                                    b = b + " ";
                                                    b = b + N[i].getreligion();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofissue();
                                                    b = b + " ";
                                                    b = b + N[i].getdateofexpiry();

                                                    N[i].edit(b, cnicf);
                                                                            
                                                }
                                            }
                                        }
                                        
                                    }
                                    
                                }

                            } while (b1 != 6);
                            
                        }

                    } while (c1 != 2);
                    
                }
            }
            
        }

    } while (choice != 3);


    cout << "\n\nContact Us:\nNational Database & Registration Authority\n\nAddress:NADRA State Bank of Pakistan Building, Shahrah-i-Jamhuriat, G-5/2, Islamabad, 44000, Pakistan\n\nPhone:1777 (for subscribers of Mobilink,Ufone,Telenor and Zong)\n+92 51 111 786 100(for fixed lines and overseas applicants)\nWebsite:https://www.nadra.gov.pk"<< endl;

    cout << "Created By:\nMuhammad Huzaifa(22k-4641)\nAbdul Rafay (22k-4462)\nAli Jafar (22k-4301)[Team-Lead]"<< endl;

}
