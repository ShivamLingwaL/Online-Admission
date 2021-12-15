#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
char information[1000];
FILE *student_detail;
FILE *admin_id;
FILE *student_id;
struct admi 
{
    int uniq_id;
    char Name[50];
    char dob[50];
    char Gender[50];
    char Religion[50];
    char Nationality[50];
    char Address[100];
    char City[50];
    char State[50];
    char Father_Name[50];
    char Father_Occupation[50];
    char Mother_Name[50];
    char Mother_Occupation[50];
    char father_income[50];
    char mother_income[50];
    char Name_b[50];
    char Name_school[50];
    char school_s[50];
    char maxmarks[50];
    char marksob[50];
    char perc[50];
    char yop[50];
    char Name_b1[50];
    char Name_school1[50];
    char school_s1[50];
    char maxmarks1[50];
    char marksob1[50];
    char perc1[50];
    char yop1[50];
    char mig[50];
    char tc[50];
}form;
struct adminitrator
{
    float id;
}host;
void admission_form()
{
    int check_id;
    student_detail = fopen("student_details.txt","a+");
    student_id = fopen("student_id.txt","a+");
    cout<<" \t \t STUDENT ADMISSION FORM \n";
    cout<<"\n\t\t\t\t\tuse underscore\"_\" for space\n";
    cout<<"\n1.Personal Details \n \n \n";
    cout<<"Enter Your Unique Id\n";
    cin>>form.uniq_id;
    while(!feof(student_id)) 
    {
        fscanf(student_id,"%d",&check_id);
        if(form.uniq_id==check_id) 
        {
            cout<<"\nSorry this ID has been taken please select a different ID\n";
            return;
        }
    }
    cout<<"Enter Your Name \n \n";
    getchar();
    gets(form.Name);
    cout<<"Enter the DOB in DD/MM/YY format \n \n";
    gets(form.dob);
    cout<<"Enter Your Gender : \n \n";
    cin>>form.Gender;
    cout<<"Enter Your Religion \n \n";
    cin>>form.Religion;
    cout<<"Enter Your Nationality \n \n";
    cin>>form.Nationality;
    cout<<"Enter Your Permanent Address \n \n";
    getchar();
    gets(form.Address);
    cout<<"Enter Your City:\n \n";
    gets(form.City);
    cout<<"Enter Your Father's Name: \n \n";
    gets(form.Father_Name);
    cout<<"Enter Your Father's Occupation \n \n";
    gets(form.Father_Occupation);
    cout<<"Enter Your Mother's Name:  \n \n";
    gets(form.Mother_Name);
    cout<<"Enter Your Mother's Occupation \n \n";
    gets(form.Mother_Occupation);
    cout<<"Enter Your Father's Income: \n \n";
    cin>>form.father_income;
    cout<<"Enter Your Mother's Income: \n \n";
    cin>>form.mother_income;
    cout<<"\n2.Academic Details \n \n \n";
    cout<<" \t Class 10th  \n\n";
    cout<<"Name of Board"<<"\nName of School"<<"\nState";
    cout<<"\n\n";
    getchar();
    gets(form.Name_b);
    gets(form.Name_school);
    gets(form.school_s);
    cout<<"Max Marks\n"<<"Marks Obtained\n"<<"Percentage\n"<<"\nyear of passing";
    cout<<"\n\n";
    gets(form.maxmarks);
    gets(form.marksob);
    gets(form.perc);
    gets(form.yop);
    cout<<" \t Class 12th  \n\n";
     cout<<"Name of Board"<<"\nName of School"<<"\nState";
    cout<<"\n\n";
    gets(form.Name_b1);
    gets(form.Name_school1);
    gets(form.school_s1);
    cout<<"Max Marks\n"<<"Marks Obtained\n"<<"Percentage\n"<<"\nyear of passing";
    cout<<"\n\n";
    gets(form.maxmarks1);
    gets(form.marksob1);
    gets(form.perc1);
    gets(form.yop1);
    cout<<"Enter If you Have a Migration Certificate or not? \n";
    gets(form.mig);
    cout<<"Enter If you Have a Transfer Certificate or not \n";
    gets(form.tc);
    fprintf(student_id,"\n%d",form.uniq_id);
    fclose(student_id);
    fprintf(student_detail,"\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",form.Name,form.dob,form.Gender,form.Religion,form.Nationality,form.Address,form.City,form.Father_Name,form.Father_Occupation,form.Mother_Name,form.Mother_Occupation,form.father_income,form.mother_income,form.Name_b,form.Name_school,form.school_s,form.maxmarks,form.marksob,form.perc,form.yop,form.Name_b1,form.Name_school1,form.school_s1,form.maxmarks1,form.marksob1,form.perc1,form.yop1,form.mig,form.tc);
    fclose(student_detail);
    cout<<"\n\nThankyou For Submitting the Admission form!\n\n";
}
void show_academic_details()
 {
    int adm,choice;
    int Target;
    int Found=0;
    if ((student_id=fopen("student_id.txt","r+"))==NULL)
    {
        cout<<" There is no student data present.\n\n";
    } else
     {
        cout<<"\nEnter The ID Of Student : ";
        cin>>Target;
        while(!feof(student_id)&& Found==0)
         {
            fscanf(student_id,"%d",&form.uniq_id);
            if(Target==form.uniq_id)
                Found=1;
        }
        if(Found)
         {
            cout<<"\n\nAcademic Details\n\n\n";
            cout<<"Please Select Your Branch\n\n";
            cout<<"1.Computer Science And Engineering\n";
            cout<<"2.Information Science\n";
            cout<<"3.Mechanical Engineering\n";
            cout<<"4.Civil Engineering\n";
            cout<<"5.Aeronautical Engineering\n";
            cout<<"6.Electrical And Electronics Engineering\n";
            cout<<"7.Electrical And Communication Engineering\n";
            cout<<"\nPlease Enter your Choice \n";
            cin>>choice;
            switch(choice)
            {
            case 1:
            case 2:
            case 3:
            case 4: cout<<"\t\tDetails for the First Year\n\n\n";
                    cout<<"\t\t\tPHY CYCLE\n\n";
                    cout<<"\tS.No.\tSubject Name\t\t\tSubject Credits\n";
                    cout<<"\t1\tBasic Electrical Engineering\t\t4\n";
                    cout<<"\t2\tElements Of Mechanical Engineering\t4\n";
                    cout<<"\t3\tEngineering Mechanics\t\t\t4\n";
                    cout<<"\t4\tEngineering Mathematics 1\t\t4\n";
                    cout<<"\t5\tEngineering Physics\t\t\t4\n";
                    cout<<"\t6\tPhysics Lab\t\t\t\t1.5\n";
                    cout<<"\t7\tWorkshop\t\t\t\t1.5\n";
                    cout<<"\t8\tConsitution of India\t\t\tNIL\n";
                    cout<<"\n\n\t\tTotal Credits = 20";
                    break;
            case 5:
            case 6:
            case 7: cout<<"\t\tDetails for the First Year\n\n\n";
                    cout<<"\n\n\t\t\tCHEM CYCLE\n\n";
                    cout<<"\tS.No.\tSubject Name\t\t\tSubject Credits\n";
                    cout<<"\t1\tBasic Electronics Engineering\t\t4\n";
                    cout<<"\t2\tEngineering Mathematics 2\t\t4\n";
                    cout<<"\t3\tConcepts of C programming\t\t4\n";
                    cout<<"\t4\tEngineering Chemistry\t\t\t4\n";
                    cout<<"\t5\tComputer Aided Drawin8g\t\t\t4\n";
                    cout<<"\t6\tChemistry Lab\t\t\t\t1.5\n";
                    cout<<"\t6\tChemistry Lab\t\t\t\t1.5\n";
                    cout<<"\t7\tConcepts of C programming Lab\t\t1.5\n";
                    cout<<"\t8\tEnglish Core\t\t\t\t2\n";
                    cout<<"\t9\tEnvironmental Studies\t\t\tNIL\n";
                    cout<<"\n\n\t\tTotal Credits = 30";
            default :break;
                        }
         }
        if(!Found) 
            cout<<" ! There is no student entry with the entered student ID\n";
        fclose(student_id);
        return;
        }
    }
void fees_details()
 {
    int feec,bec;
    cout<<"\n\nFEES DETAILS:\n\n";
    cout<<"Select the Course \n\n";
    cout<<"\n1.B.E\n\n2.Exit\n\n";
   cin>>feec;
    switch(feec) 
    {
    case 1:
            cout<<"\t\t\t\nB.E.\n";
            cout<<"\n\nEnter The Admission Type:-\n";
            cout<<"\n1.COMEDK-UGET\n\n2.CET\n\n3.Others\n\n";
            cin>>bec;
            if(bec==1)
             {
                cout<<"\n\nCOMEDK-UGET\n\n";
                cout<<"\n\n\t\t\t\t\tFees per Year\n";
                cout<<"\nTution Fees= 1,00,000/-\n";
                cout<<"\nCollege University Fees = 35,000/-";
                cout<<"\nUniversity Eligibility Fees = 1,500/- \n";
                cout<<"\nHostel Fees = 70,000\n\n";
                cout<<"\nCaution Deposit = 15,000/-";
                cout<<"\nRoom Rent/Electricity Charges = 48,000/-";
                cout<<"\nHostel Mess Charges = 1800/- per month\n";
                cout<<"\nTotal Hostel Fees = 1,54,600 \n\n";
                } 
                else if(bec==2) 
                {
                cout<<"\n\n\t\t\tCET\n\n";
                cout<<"\n\n\t\t\t\t\tFees per Year\n";
                cout<<"\nTution Fees= 37,000/-\n";
                cout<<"\nCollege University Fees = 30,000/-";
                 cout<<"\nHostel Fees = 70,000\n\n";
                cout<<"\nCaution Deposit = 15,000/-";
                cout<<"\nRoom Rent/Electricity Charges = 48,000/-";
                cout<<"\nHostel Mess Charges = 1800/- per month\n";
                cout<<"\nTotal Hostel Fees = 1,54,600 \n\n";
                } 
                else
                 {
                cout<<"\n\n\t\t\tOthers\n\n";
                cout<<"\n\n\t\t\t\t\tFees per Year\n";
                cout<<"\nTution Fees= 1,37,000/-\n";
                cout<<"\nCollege University Fees = 30,000/-";
                cout<<"\nUniversity Eligibility Fees = 1,500/- \n";
                cout<<"\nHostel Fees = 70,000\n\n";
                cout<<"\nCaution Deposit = 15,000/-";
                cout<<"\nRoom Rent/Electricity Charges = 48,000/-";
                cout<<"\nHostel Mess Charges = 1800/- per month\n";
                cout<<"\nTotal Hostel Fees = 1,54,600 \n\n";
                }
    default:    break;
    }
}
void display()
{
    int i;
    float adminid;
    int Found=0;
    if((admin_id=fopen("admin_id.txt","r"))==NULL) 
        cout<<" ! The File is Empty...\n\n";
     else {
        cout<<"\nEnter The Administrator ID: ";
       cin>>adminid;
        while(!feof(admin_id)&& Found==0)
         {
            fscanf(admin_id,"%f",&host.id);
            if(adminid==host.id) 
                Found=1;
        }
        if(Found)
         {
            student_detail = fopen("student_details.txt","a+");
            cout<<"\nThe Details of Admission Form is in this Order:\n\n\nName\nDOB\nGender\nReligion\nNationality\nAddress\nCity\nFather's Name\nFather's Occupation\nMother's Name\nMother's Occupation\nFather's Income\nMother's Income\nClass 10th\nName of Board\nName of State\nState\nMax Marks\nMarks Obtained\nPercentage\nYear of passing\nClass 12th\nName of Board\nName of State\nState\nMax Marks\nMarks Obtained\nPercentage\nYear of passing\nMigration Card\nTransfer Certificate\n"<<information;
            do {
                fgets(information,600,student_detail);
                cout<<"\n\n"<<information;
                }
            while(!feof(student_detail)); 
                fclose(student_detail);
        }
        else if(!Found) 
        {
            cout<<"Please Enter the Correct Administrator ID\n\n";
            fclose(admin_id);
        }
    }
}
void search_student()
{
    int i;
    char Target[25];
    int Found=0;
    student_id=fopen("student_id.txt","r");
    if((student_detail=fopen("student_details.txt","r"))==NULL) 
        cout<<" ! The File is Empty...\n\n";
     else 
     {
        cout<<"\nEnter The Name Of Student : ";
        cin>>Target;
        while(!feof(student_detail)&& Found==0)
         {
            fscanf(student_detail,"%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",form.Name,form.dob,form.Gender,form.Religion,form.Nationality,form.Address,form.City,form.Father_Name,form.Father_Occupation,form.Mother_Name,form.Mother_Occupation,form.father_income,form.mother_income,form.Name_b,form.Name_school,form.school_s,form.maxmarks,form.marksob,form.perc,form.yop,form.Name_b1,form.Name_school1,form.school_s1,form.maxmarks1,form.marksob1,form.perc1,form.yop1,form.mig,form.tc);
            cin>>form.uniq_id;
            if(strcmp(Target,form.Name)==0) 
                Found=1;
        }
        if(Found) 
            cout<<"\nUnique ID:"<<form.uniq_id<<"\n \n  The Name of Student:"<<form.Name<<"\n \n The dob of student:"<<form.dob<<"\n \n Gender of the student:"<<form.Gender<<"\n \n religion of the student:"<<form.Religion<<"\n \n nationality of the student:"<<form.Nationality<<"\n \n Address :"<<form.Address<<"\n \n City :"<<form.City<<"\n \n Father's Name:"<<form.Father_Name<<"\n \n Father's Occupation:"<<form.Father_Occupation<<"\n \n Mother's Name:"<<form.Mother_Name<<"\n \n Mother's Occupation:"<<form.Mother_Occupation<<"\n \n Father's Income:"<<form.father_income<<"\n \n Mother's Income:"<<form.mother_income<<"\n \n Name of Board of Class 10th:"<<form.Name_b<<"\n \n Name of School of Class 10th:"<<form.Name_school<<"\n \n Name of School State of Class 10th:"<<form.school_s<<"\n \n Max Marks:"<<form.maxmarks<<"\n \n Marks Obtained:"<<form.marksob<<"\n \nPercentage:"<<form.perc<<"\n \nYear of Passing:"<<form.yop<<"\n \nName of Board of Class 12th:"<<form.Name_b1<<"\n \n Name of School of Class 12th:"<<form.Name_school1<<"\n \n Name of School State of Class 12th:"<<form.school_s1<<"\n \n Max Marks:"<<form.maxmarks1<<"\n \n Marks Obtained:"<<form.marksob1<<"\n \nPercentage:"<<form.perc1<<"\n \nYear of Passing:"<<form.yop1<<"\n \nMigration Card:"<<form.mig<<"\n \nTransfer Certificate: "<<form.tc<<"\n\n";
        else if(!Found) 
            cout<<"!\n";
        fclose(student_detail);
    }
}
int main()
{
    int i,j,n,choice,feec,bec,pgc,adm;
    long int m;
    for(;;) {
        cout<<"\n\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+--\n";
        cout<<"+ \t\t     MENU\t\t\t+\n+\t\t\t\t\t\t";
        cout<<"+\n+\t\t\t\t\t\t+\n+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
        cout<<"+\t\t\t\t\t\t+\n+ 1.Admission/Registration\t\t\t+\n+\t\t\t\t\t\t+\n+ 2.Academic Details\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 3.Fees Details\t\t\t\t+\n+\t\t\t\t\t\t+\n+ 4.Search Your Registration By Name\t\t+\n+\t\t\t\t\t\t+\n+ 5.Show all Registrations\t\t\t+\n+\t\t\t\t\t\t+\n+ 6.Quit\t\t\t\t\t+\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-+-";
        cout<<"\n\nEnter Your Choice? \n\n";
        cin>>choice;
        switch(choice) {
        case 1: system("cls");
                admission_form();
                break;
        case 2: show_academic_details();
                break;
        case 3: fees_details();
                break;
        case 4: search_student();
                break;
        case 5: display(); 
                break;
        case 6: return 0;
        default:break;
        }
    }
    return 0;
  }