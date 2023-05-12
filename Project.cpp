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
        
        void setemploymentstatus(string employment_status)
        {
            this->employment_status = employment_status;
        }

        std::string getemploymentstatus()
        {
            return employment_status;
        }

        Nadra(std::string firstname, std::string lastname, std::string fathername, std::string mothername, std::string religion, string gender, std::string city)
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

        void setGender()
        {
            if (getgender() == 'M')
            {
                gender = "Male";

            } else if (getgender() == 'F')
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
                Citizenship_status = "Foreign Passport Holder";
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
                    if (CNIC.compare(AllCNIC[i]))
                    {
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
            filing();
        }

        void filing()
        {
            char array[100];

            fstream File;

            File.open("Project.txt", ios::app);

            strcpy(array, getfirstname().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getlastname().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getfathername().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getmothername().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getCNIC().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, to_string(getage()).c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getGender().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getcitizenshipstatus().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getemploymentstatus().c_str());

            File << array << "   ";

            array[0] = 0;

            strcpy(array, getreligion().c_str());

            File << array << "   ";

            array[0] = 0;

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
	Hospital H[50];
	Nadra N[50];
    int choice1 = 0, choice2 = 0, choice3 = 0;
    H[0]=Hospital("John", "David", "Sarah", "t", "r", "Multan", 'M', "public");
    N[0]=Nadra("John", "Hello", "David", "Sarah", "Christianity", "Male", "Karachi");
    H[1]=Hospital("Salman", "Rashid", "Qainat", "t", "r", "Karachi", 'M', "private");
    N[1]=Nadra("Salman", "Ahmed", "Rashid", "Qainat", "Islam", "Male", "Karachi");
    H[2]=Hospital("Kumar", "Sanjay", "Lakshmi", "t", "r", "Hyderabad", 'M', "public");
    N[2]=Nadra("Kumar", "Sahu", "Sanjay", "Lakshmi", "Hinduism", "Male", "Hyderabad");
    H[3]=Hospital("Sameer", "Hassan", "Zulaikha", "t", "r", "Sukkur", 'M', "public");
    N[3]=Nadra("Sameer", "Soomro", "Hassan", "Zulaikha", "Islam", "Male", "Sukkur");
    H[4]=Hospital("Maryam", "Gulbadin", "Bushra", "t", "r", "Swabi", 'F', "public");
    N[4]=Nadra("Maryam", "Khan", "Gulbadin", "Bushra", "Islam", "Female", "Swabi");
    H[5]=Hospital("Bilal", "Mahmoud", "Amina", "t", "r", "Damascus", 'M', "public");
    N[5]=Nadra("Bilal", "Ahmed", "Mahmoud", "Amina", "Islam", "Male", "Islamabad");
    H[6]=Hospital("Jalil", "Shakoor", "Sadiqa", "t", "r", "Riyadh", 'M', "private");
    N[6]=Nadra("Jalil", "Ali", "Shakoor", "Sadiqa", "Islam", "Male", "Lahore");
    H[7]=Hospital("Hammad", "Tariq", "Zainab", "t", "r", "Rawalpindi", 'M', "public");
    N[7]=Nadra("Hammad", "Azeem", "Tariq", "Zainab", "Islam", "Male", "Islamabad");
    H[8]=Hospital("Sylvester", "Samson", "Rosa", "t", "r", "Kandiaro", 'M', "public");
    N[8]=Nadra("Sylvester", "Mello", "Samson", "Rosa", "Christianity", "Male", "Kandiaro");
    H[9]=Hospital("Sarah", "Liam", "Meagan", "t", "r", "Faisalabad", 'F', "private");
    N[9]=Nadra("Sarah", "Samuel", "Liam", "Meagan", "Christianity", "Female", "Faisalabad");
    H[10]=Hospital("Deepti", "Vijay", "Sunita", "t", "r", "Dehli", 'F', "private");
    N[10]=Nadra("Deepti", "Sharma", "Vijay", "Sunita", "Hinduism", "Female", "Larkana");
    H[11]=Hospital("Sulaiman", "Saleem", "Ayesha", "t", "r", "RahimYarKhan", 'M', "public");
    N[11]=Nadra("Sulaiman", "Saleem", "Saleem", "Ayesha", "Islam", "Male", "RahimYarKhan");
    H[12]=Hospital("Maira", "Asif", "Sara", "t", "r", "Karachi", 'F', "private");
    N[12]=Nadra("Maira", "Shaikh", "Asif", "Sara", "Islam", "Female", "Karachi");
    H[13]=Hospital("Asifa", "Ali", "Sumaira", "t", "r", "Mingora", 'F', "public");
    N[13]=Nadra("Asifa", "Tariq", "Ali", "Sumaira", "Islam", "Female", "Mingora");
    H[14]=Hospital("Imran", "Nawaz", "Yasmeen", "t", "r", "Nowshera", 'M', "private");
    N[14]=Nadra("Imran", "Khan", "Nawaz", "Yasmeen", "Islam", "Male", "Mianwali");
    H[15]=Hospital("Sunita", "Ram", "Sunaina", "t", "r", "Sanghar", 'F', "public");
    N[15]=Nadra("Sunita", "Ram", "Ram", "Sunaina", "Hinduism", "Female", "Sanghar");
    H[16]=Hospital("Angel", "John", "Eve", "t", "r", "Auckland", 'M', "private");
    N[16]=Nadra("Angel", "ken", "John", "Eve", "Christianity", "Male", "Karachi");
    H[17]=Hospital("Sameena", "Azam", "Fozia", "t", "r", "DeraMuradJamali", 'F', "public");
    N[17]=Nadra("Sameena", "Saleem", "Azam", "Fozia", "Islam", "Female", "Gwadar");
	H[18]=Hospital("Ghulam", "Zubair", "Amna", "t", "r", "Jhang", 'M', "public");
    N[18]=Nadra("Ghulam", "Ali", "Zubair", "Amna", "Islam", "Male", "Jhang");
    H[19]=Hospital("Aabidah", "Naseem", "Rida", "t", "r", "Loralai", 'F', "public");
    N[19]=Nadra("Aabidah", "Parveen", "Naseem", "Rida", "Islam", "Female", "Loralai");
    H[20]=Hospital("Asim", "Junaid", "Nimra", "t", "r", "Lahore", 'M', "public");
    N[20]=Nadra("Asim", "Theba", "Junaid", "Nimra", "Islam", "Male", "Lahore");
    H[21]=Hospital("Shairaz", "Yahya", "Wajiha", "t", "r", "MandiBahauddin", 'M', "public");
    N[21]=Nadra("Shairaz", "Memon", "Yahya", "Wajiha", "Islam", "Male", "MandiBahauddin");
    H[22]=Hospital("Rida", "Tariq", "Maira", "t", "r", "Quetta", 'F', "private");
    N[22]=Nadra("Rida", "Tariq", "Tariq", "Maira", "Islam", "Female", "Quetta");
    H[23]=Hospital("Shanti", "Manoj", "Usha", "t", "r", "Saranan", 'F', "private");
    N[23]=Nadra("Shanti", "Priya", "Manoj", "Usha", "Hinduism", "Female", "Saranan");
    H[24]=Hospital("Manoj", "Vinod", "Sunita", "t", "r", "Shikarpur", 'M', "public");
    N[24]=Nadra("Manoj", "Tiwari", "Manoj", "Usha", "Hinduism", "Male", "Shikarpur");
    H[25]=Hospital("Peter", "Stephen", "Ruth", "t", "r", "WahCantonment", 'M', "public");
    N[25]=Nadra("Peter", "Phillip", "Stephen", "Ruth", "Christianity", "Male", "WahCantonment");
    H[26]=Hospital("Abuzar", "Salman", "Zainab", "t", "r", "Aleppo", 'M', "public");
    N[26]=Nadra("Abuzar", "Ali", "Salman", "Zainab", "Islam", "Male", "Gujranwala");
    H[27]=Hospital("Javeria", "Javed", "Bushra", "t", "r", "Tabuk", 'F', "private");
    N[27]=Nadra("Javeria", "Javed", "Javed", "Bushra", "Islam", "Female", "Karachi");
    H[28]=Hospital("Deepak", "Rohit", "Deepti", "t", "r", "NaushahroFeroze", 'M', "public");
    N[28]=Nadra("Deepak", "Kalal", "Rohit", "Deepti", "Hinduism", "Male", "NaushahroFeroze");
    H[29]=Hospital("Tayyaba", "Nauman", "Nabila", "t", "r", "UstaMohammad", 'F', "public");
    N[29]=Nadra("Tayyaba", "Noor", "Nauman", "Nabila", "Islam", "Female", "UstaMohammad");
    H[30]=Hospital("Kashif", "Zunair", "Naaila", "t", "r", "Khairpur", 'M', "public");
    N[30]=Nadra("Kashif", "Zubair", "Zunair", "Naaila", "Islam", "Male", "Khairpur");
    H[31]=Hospital("Jetha", "Jaikant", "Jainti", "t", "r", "Thatta", 'M', "public");
    N[31]=Nadra("Jetha", "Gadha", "Jaikant", "Jainti", "Hinduism", "Male", "Thatta");
    H[32]=Hospital("Saleem", "Akbar", "Anarkali", "t", "r", "Kabul", 'M', "public");
    N[32]=Nadra("Saleem", "Orakzai", "Akbar", "Anarkali", "Islam", "Male", "Sahiwal");
    H[33]=Hospital("Sualeha", "Faakhir", "Seema", "t", "r", "Karachi", 'F', "private");
    N[33]=Nadra("Sualeha", "Faakhir", "Faakhir", "Seema", "Islam", "Female", "Karachi");
    H[34]=Hospital("Aadil", "Omair", "Khadija", "t", "r", "Khuzdar", 'M', "private");
    N[34]=Nadra("Aadil", "Abbas", "Omair", "Khadija", "Islam", "Male", "Khuzdar");
    H[35]=Hospital("Khurram", "Aabid", "Naseema", "t", "r", "Gujranwala", 'M', "private");
    N[35]=Nadra("Khurram", "Bakhsh", "Aabid", "Naseema", "Islam", "Male", "Lahore");
    H[36]=Hospital("Zahra", "Qamar", "Aabida", "t", "r", "Islamabad", 'F', "private");
    N[36]=Nadra("Zahra", "Qayumi", "Qamar", "Aabida", "Islam", "Female", "Islamabad");
    H[37]=Hospital("Sufyan", "Ibrahim", "Sadaf", "t", "r", "Pesahwar", 'M', "public");
    N[37]=Nadra("Sufyan", "Khan", "Ibrahim", "Sadaf", "Islam", "Male", "Peshawar");
    H[38]=Hospital("Roque", "Aaron", "Gemma", "t", "r", "Sydney", 'M', "public");
    N[38]=Nadra("Roque", "Martin", "Aaron", "Gemma", "Christianity", "Male", "Multan");
    H[39]=Hospital("Dinesh", "Virat", "Anushka", "t", "r", "Mumbai", 'M', "public");
    N[39]=Nadra("Dinesh", "Kartik", "Virat", "Anushka", "Hinduism", "Male", "Rawalpindi");
    H[40]=Hospital("Hamza", "Khurram", "Zara", "t", "r", "bahawalpur", 'M', "private");
    N[40]=Nadra("Hamza", "Saif", "Khurram", "Zara", "Islam", "Male", "bahawalpur");
    H[41]=Hospital("Namrah", "Pervaiz", "Namira", "t", "r", "Karachi", 'F', "private");
    N[41]=Nadra("Namrah", "Nizai", "Pervaiz", "Namira", "Islam", "Female", "Lahore");
    H[42]=Hospital("Rana", "Irfan", "Sitara", "t", "r", "Moro", 'M', "public");
    N[42]=Nadra("Rana", "Hamza", "Irfan", "Sitara", "Islam", "Male", "Moro");
    H[43]=Hospital("Gopal", "Shiv", "Savitri", "t", "r", "TandoAllahyar", 'M', "public");
    N[43]=Nadra("Gopal", "Ram", "Shiv", "Savitri", "Hinduism", "Male", "TandoAllahyar");
    H[44]=Hospital("Jude", "Jaden", "Jess", "t", "r", "Larkana", 'M', "public");
    N[44]=Nadra("Jude", "Lobo", "Jaden", "Jess", "Christianity", "Male", "Larkana");
    H[45]=Hospital("Gita", "Ashok", "Anita", "t", "r", "Shikarpur", 'F', "public");
    N[45]=Nadra("Gita", "Kumari", "Ashok", "Anita", "Hinduism", "Female", "Shikarpur");
    H[46]=Hospital("Dania", "Shoaib", "Areeba", "t", "r", "Sargodha", 'F', "private");
    N[46]=Nadra("Dania", "Amir", "Shoaib", "Areeba", "Islam", "Female", "Sargodha");
    H[47]=Hospital("Danial", "kamran", "Abeeha", "t", "r", "Abbottabad", 'M', "private");
    N[47]=Nadra("Danial", "Sohaib", "Kamran", "Abeeha", "Islam", "Male", "Abbottabad");
    H[48]=Hospital("Ethan", "Abraham", "Abigail", "t", "r", "Munich", 'M', "private");
    N[48]=Nadra("Ethan", "Adah", "Abraham", "Abigail", "Christianity", "Male", "Karachi");
    H[49]=Hospital("Santosh", "Rajesh", "Rekha", "t", "r", "Kolkata", 'M', "public");
    N[49]=Nadra("Santosh", "Vijay", "Rajesh", "Rekha", "Hinduism", "Male", "Lahore");

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

    N[1].setprovince();
    N[1].setcountry();
    N[1].setCNIC();
    N[1].personaldetails();
    N[1].checkforeighteen();
    N[1].readfile();
    
}
