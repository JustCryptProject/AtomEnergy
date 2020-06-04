#include <iostream>
#include <string>
using namespace std;

int request = 0;
string name;

void Meeteng()
{
cout<<" _____         _                _____                   "<<endl;
cout<<"|   | |_ _ ___| |___ ___ ___   |  _  |___ _ _ _ ___ ___ "<<endl;
cout<<"| | | | | |  _| | -_| .'|  _|  |   __| . | | | | -_|  _|"<<endl;
cout<<"|_|___|___|___|_|___|__,|_|    |__|  |___|_____|___|_|  "<<endl;     

cout<<"This program create for calculate the nuclear energy of any isotope\n\n";
cout<<"Enter item number 1-118 (Example for Plumbum: 82)\n";
}

template <typename T,typename X>
T DataSearch(T request, T &min, T &max, X &name)
{
    string Name[119] {"Undefind request","Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminium","Silicon","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin","Antimony","Tellurium","Iodine","Xenon","Caesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium","Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon","Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Copernicium","Nihonium","Flerovium","Moscovium","Livermorium","Tennessine","Oganesson"};
    unsigned int MinIsotNum[119] {0,1,2,3,5,6,8,10,12,14,16,18,19,21,22,24,26,28,30,32,34,36,38,40,42,44,45,47,48,52,54,56,58,60,65,67,69,71,73,78,81,83,85,87,89,91,93,95,97,99,103,105,108,110,112,114,117,119,121,124,126,128,130,134,136,138,140,143,145,148,150,153,155,158,160,162,164,166,169,171,176,178,184,188,193,195,199,202,206,209,217,225,228,231,233,235,237,240,245,248,251,253,255,258,260,263,265,267,272,277,283,285,287,289,291,293};
    unsigned int MaxIsotNum[119] {0,7,10,12,16,19,22,25,28,31,34,37,40,42,44,46,49,51,53,55,57,60,63,65,67,69,72,75,78,80,83,86,89,92,94,97,100,102,105,108,110,113,118,120,122,124,130,132,135,137,139,142,144,147,151,153,155,157,159,161,163,165,167,169,171,173,175,177,179,182,184,188,190,192,194,196,199,202,205,210,212,215,219,220,223,228,232,234,236,238,240,242,244,247,249,252,254,256,258,260,262,266,268,270,273,275,277,279,281,283,285,287,289,291,292,294,294};
    name = Name[request];
    min = MinIsotNum[request];
    max = MaxIsotNum[request];
}

double MassDefect(int Cisotop, int requset)
{
 double MD = (request * 1.00783 + Cisotop * 1.00866 ) - Cisotop;
 return MD;
}

int Tryagain(int Exit)
{
cout << "Try again? Press '1', Exit press '0'\n\n";
cin >> Exit;
 if (Exit != 1 || 0) 
 {
     cout << "Uncorrect answer. We fix this... You choose... RESTART"<<'\n';
     Exit = 1;
 }
return Exit;
}



int main()
{
    start:
int Exit = 1;
cout<< "\n\n\n\n\n\n\n\n\n\n";
Meeteng();

cin >> request;  //The requested number is equal to the number of protons in the atomic nucleus

         if (request <= 118 && request >= 1) {}
            else { 
                cout << "Uncorrect request" << "\n";
             if (Tryagain(Exit) == 1) 
                {
                    goto start;
                }
             else 
             {
                 exit(1);
             }
            }

int min = 0, max = 0;
DataSearch(request, min, max, name);

cout << "You choose "<< name <<endl;
cout << "Isotops:" <<"\n";

int Isotop = min; 
for (int i = 0; i <= max - min; i++) 
{
    cout << Isotop << " ";
    Isotop++;
    if (i == max - min)
    {
        cout << "\n\n";
    }
}

cout << "Choose isotop\n";
int Cisotop = 0;
cin >> Cisotop; //The requested number is equal to the mass of the element
                if (Cisotop <= max && Cisotop >= min) {}
                            else { 
                                cout << "Uncorrect request" << "\n";
                             if (Tryagain(Exit) == 1) 
                                {
                                    goto start;
                                }
                             else 
                             {
                                 exit(1);
                             }
                             }
                             
cout << "What you want calculate" << '\n';
cout << "1 - Atom Energy" << '\n';
cout << "2 - AtomEnergy" << '\n';
cout << "3 - SpecificBindingEnergy" << '\n';
cout << "4 - All" << '\n';

int choose;
cin >> choose;
                            if (choose <= 4 && choose >= 1) {}
                            else { 
                                cout << "Uncorrect request" << "\n";
                             if (Tryagain(Exit) == 1) 
                                {
                                    goto start;
                                }
                             else 
                             {
                                 exit(1);
                             }
                             }
    switch (choose)
    {
    case 1:
        cout << "Mass defect = " << MassDefect(Cisotop, request) << " u" << "\n\n";
        break;
    case 2:
        cout << "Atom Energy = " << MassDefect(Cisotop, request) * 931.5 << " MeV" << "\n\n";
        break;
    case 3:
        cout << "Specific Binding Energy = " << MassDefect(Cisotop, request) * 931.5 / Cisotop << " MeV/nucleus" << "\n\n";
        break;
    case 4:
        cout << "Mass defect = " << MassDefect(Cisotop, request) << " u" << "\n";
        cout << "Atom Energy = " << MassDefect(Cisotop, request) * 931.5 << " MeV" << "\n";
        cout << "Specific Binding Energy = " << MassDefect(Cisotop, request) * 931.5 / Cisotop << " MeV/nucleus" << "\n\n";
        break;

    default: 
         Tryagain(Exit);
        break;
    }   


if (Tryagain(Exit) == 0)
{
    exit(1);
}
else {goto start;}
}