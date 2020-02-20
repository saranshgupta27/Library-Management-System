
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
class telephone
{
  private:
     char name[30];
     char fname[30];
     char address[100];
     char phone[15];
     char city[20];
     char state[30];
     char b_address[100];
     char b_phone[15];
     char email[50];
  public:
         void read_data()
         {
          cout<<"\n Name                :";
          cin>>name;
          cout<<"\n Father name         :";
          cin>>fname;
          cout<<"\n Address             :";
          cin>>address;
          cout<<"\n Phone No            :";
          cin>>phone;
          cout<<"\n city                :";
          cin>>city;
          cout<<"\n State               :";
          cin>>state;
          cout<<"\n Business address    :";
          cin>>b_address;
          cout<<"\n Business phone no . :";
          cin>>b_phone;
          cout<<"\n Email               :";
          cin>>email;
          }
          void display_record()
          {
          system("cls");
          cout<<"\n\t\t\t\t Subscriber Details";
          cout<<"\n\t\t-------------------------------------------------";
          cout<<"\n\n\t\tName                             :  ";
          cout<<name;
          cout<<"\n\n\t\tFather name                      :  ";
          cout<<fname;
          cout<<"\n\n\t\tAddress                          :  ";
          cout<<address;
          cout<<"\n\n\t\tPhone No                         :  ";
          cout<<phone;
          cout<<"\n\n\t\tcity                             :  ";
          cout<<city;
          cout<<"\n\n\t\tState                            :  ";
          cout<<state;
          cout<<"\n\n\t\tBusiness address                 :  ";
          cout<<b_address;
          cout<<"\n\n\t\tBusiness phone no .              :  ";
          cout<<b_phone;
          cout<<"\n\n\t\tEmail                            :  ";
          cout<<email;
          }  
          void disp_name_phone()
           {
               cout<<"\n"<<name<<"\t\t\t"<<phone<<"\t"<<address;
           }     
         /* function to count no of pages */ 
         int count_pages()
         {
           int rec,pages;
           rec=pages=0;
           ifstream fin;
           fin.open("telephone.dat",ios::binary);
           while(fin.read((char*)this,sizeof(telephone)))
               rec++;
           fin.close();
           pages= rec/20;
           if((rec%20)!=0)    
                pages++;
           return(pages);     
         }
                   
                   
         void main_menu();
         void search_menu();
         void report_menu();
         void add_member();
         void delete_member();
         void modify_member()
         /*** search menu option */
         void search_name();
         void search_phone();
         void search_address();
         void search_email();
         void search_fname();      
         /* report menu options */
         void report_list();
         void report_name_phone();
         void report_name_address();
         void report_name_phone_address();
         void report_name_email();
};
/* member funtion to define main menu */
void telephone :: main_menu()          
{
     int choice;
         do
           {
               system("cls");
               cout<<"\n\n\n\t\t\t  M A I N    M E N U ";
               cout<<"\n\n\t\t\t1.    Add Member";
               cout<<"\n\n\t\t\t2.    Delete Member";
               cout<<"\n\n\t\t\t3.    Modify Member";
               cout<<"\n\n\t\t\t4.    Report";
               cout<<"\n\n\t\t\t5.    Search";
               cout<<"\n\n\t\t\t6.    Exit";
               cout<<"\n\n\n\t\t\t    Enter your choice (1..6) :";
               cin>>choice;
               switch(choice)
                  {
                    case 1:           add_member();
                                      break;
                    case 2:
                                      delete_member();
                                      break;
                    case 3:
                                      modify_member();
                                      break;
                    case 4:
                                      report_menu();
                                      break;
                    case 5:
                                      search_menu();
                                      break;
                    case 6:
                                      break;
                    default:
                                       cout<<"\n\n\n Wrong choice..... Try again";
                                       getch();
                 }    
        }while(choice!=6);       
     return ;
} 
/* member funtion to define SEARCH menu */
void telephone :: search_menu()          
{
     int choice;
         do
           {
               system("cls");
               cout<<"\n\n\n\t\t\t    S E A R C H     M E N U ";
               cout<<"\n\n\t\t\t1.    NAME";
               cout<<"\n\n\t\t\t2.    PHONE NO";
               cout<<"\n\n\t\t\t3.    ADDRESS";
               cout<<"\n\n\t\t\t4.    EMAIL";
               cout<<"\n\n\t\t\t5.    FATHER NAME";
               cout<<"\n\n\t\t\t6.    Exit";
               cout<<"\n\n\n\t\t\t    Enter your choice (1..6) :";
               cin>>choice;
               switch(choice)
                  {
                    case 1:           search_name();
                                      break;
                    case 2:
                                      search_phone();
                                      break;
                    case 3:
                                      search_address();
                                      break;
                    case 4:
                                      search_email();
                                      break;
                    case 5:
                                      search_fname();
                                      break;
                    case 6:
                                      break;
                    default:
                                       cout<<"\n\n\n Wrong choice..... Try again";
                                       getch();
                 }    
        }while(choice!=6);       
     return ;
} 
/* member funtion to define report menu */
void telephone :: report_menu()          
{
     int choice;
         do
           {
               system("cls");
               cout<<"\n\n\n\t\t\t    R E P O R T      M E N U ";
               cout<<"\n\n\t\t\t1.    LIST";
               cout<<"\n\n\t\t\t2.    NAME --TELEPHONE";
               cout<<"\n\n\t\t\t3.    NAME - TELEPHONE - ADDRESS";
               cout<<"\n\n\t\t\t4.    NAME - EMAIL";
               cout<<"\n\n\t\t\t5.    Exit";
               cout<<"\n\n\n\t\t\t    Enter your choice (1..5) :";
               cin>>choice;
               switch(choice)
                  {
                    case 1:           report_list();
                                      break;
                    case 2:
                                      report_name_phone();
                                      break;
                    case 3:
                                      report_name_address();
                                      break;
                    case 4:
                                      report_name_email();
                                      break;
                    case 5:
                                      break;
                    default:
                                       cout<<"\n\n\n Wrong choice..... Try again";
                                       getch();
                 }    
        }while(choice!=5);       
     return ;
} 
/* member function to add new information in a file */
void telephone::add_member()
{
  ofstream file;
  file.open("telephone.dat",ios::app);
  read_data();
  file.write((char*)this ,sizeof(telephone));
  file.close();
  return;
}
/* delete a record from a binary file */
void telephone::delete_member()
{
  ofstream fout;
  ifstream fin;
  fin.open("telephone.dat",ios::binary);
  fout.open("temp.dat",ios::binary);
  char tphone[15];
  int found=0;
  cout<<"\n Enter Telephone no to delete :";
  cin>>tphone;
  while(fin.read((char *)this,sizeof(telephone)))
   {
     if(strcmp(this->phone,tphone)==0)
        fout.write((char*)this,sizeof(telephone));
     else
        found=1;   
   }                       
   fin.close();
   fout.close();
   remove("telephone.dat");
   rename("temp.dat","telephone.dat");
   if(found==1)
       cout<<"\n Record Sucessfully deleted";
   else
       cout<<"\n Record not found";
   getch();        
} 
/* member function to modify member information */
void telephone::modify_member() 
{
  ofstream fout;
  ifstream fin;
  fin.open("telephone.dat",ios::binary);
  fout.open("temp.dat",ios::binary);
  char tphone[15];
  int found=0;
  system("cls");
  cout<<"\n Enter Telephone no to modify :";
  cin>>tphone;
  while(fin.read((char *)this,sizeof(telephone)))
   {
     if(strcmp(tphone,this->phone)==0)
        {
          cout<<"\n New values \n";
          cout<<"\n Name    :";
          cin>>this->name;
          cout<<"\n Father name :";
          cin>>this->fname;
          cout<<"\n Address    :";
          cin>>this->address;
          cout<<"\n city :";
          cin>>this->city;
          cout<<"\n State :";
          cin>>this->state;
          cout<<"\n Business address :";
          cin>>this->b_address;
          cout<<"\n Business phone no . :";
          cin>>this->b_phone;
          cout<<"\n Email :";
          cin>>this->email;
         found=1;   
         }
      fout.write((char*)this,sizeof(telephone));
    }                       
   fin.close();
   fout.close();
   remove("telephone.dat");
   rename("temp.dat","telephone.dat");
   if(found==1)
       cout<<"\n Record Sucessfully modified";
   else
       cout<<"\n Record not found";
   getch();
}
void telephone::search_address()    
{
   ifstream fin;
   fin.open("telephone.dat",ios::binary);
   char taddress[100];
   int found ;
   found =0;
   system("cls");
   cout<<"\n     Search Screen";
   cout<<"\n\n\t\t Address     :";
   cin>>taddress;
   while(fin.read((char*)this, sizeof(telephone)))
    {
        if (strcmpi(taddress,this->address)==0)
           {
              display_record();
              found =1;
              }
     }                                                                    
   fin.close();
   if(found ==0)
       cout<<"\n Record does not exist";
    getch();
   return;    
}
void telephone::search_email()
{
ifstream fin;
   fin.open("telephone.dat",ios::binary);
   char temail[100];
   int found ;
   found =0;
   system("cls");
   cout<<"\n     Search Screen";
   cout<<"\n\n\t\t Email     :";
   cin>>temail;
   while(fin.read((char*)this, sizeof(telephone)))
    {
        if (strcmpi(temail,this->email)==0)
           {
              display_record();
              found =1;
              }
     }                                                                    
   fin.close();
   if(found ==0)
       cout<<"\n Record does not exist";
    getch();
   return;         
     
}
      void telephone::search_fname()
{
  ifstream fin;
   fin.open("telephone.dat",ios::binary);
   char tfname[100];
   int found ;
   found =0;
   system("cls");
   cout<<"\n     Search Screen";
   cout<<"\n\n\t\t Father Name     :";
   cin>>tfname;
   while(fin.read((char*)this, sizeof(telephone)))
    {
        if (strcmpi(tfname,this->fname)==0)
           {
              display_record();
              found =1;
              }
     }                                                                    
   fin.close();
   if(found ==0)
       cout<<"\n Record does not exist";
    getch();
   return;       
}
void telephone::search_name()    
{
   ifstream fin;
   fin.open("telephone.dat",ios::binary);
   char tname[100];
   int found ;
   found =0;
   system("cls");
   cout<<"\n     Search Screen";
   cout<<"\n\n\t\t Name     :";
   cin>>tname;
   while(fin.read((char*)this, sizeof(telephone)))
    {
        if (strcmpi(tname,this->name)==0)
           {
              display_record();
              found =1;
              }
     }                                                                    
   fin.close();
   if(found ==0)
       cout<<"\n Record does not exist";
    getch();
   return;      
}     

void telephone::search_phone()
{
ifstream fin;
   fin.open("telephone.dat",ios::binary);
   char tphone[100];
   int found ;
   found =0;
   system("cls");
   cout<<"\n     Search Screen";
   cout<<"\n\n\t\t Phone No     :";
   cin>>tphone;
   while(fin.read((char*)this, sizeof(telephone)))
    {
        if (( strcmpi(tphone,this->phone)==0) || strcmpi(tphone,this->b_phone)==0)
           {
              display_record();
              found =1;
              }
     }                                                                    
   fin.close();
   if(found ==0)
       cout<<"\n Record does not exist";
    getch();
   return;    
}
void telephone::report_list()
{
  int pages = count_pages();
  int cur_page=1;
  /* steps to show report menu and data */
  int n=0;   
  ifstream fin;
  fin.open("telephone.dat",ios::binary);
  system("cls");
  cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
  cout<<"\n-----------------------------------------------------------------------------";
  cout<<"\n\n S.No"<<"\t\t Name \t\t\tAddress\t\t Phone\t\tEmail";
  cout<<"\n-----------------------------------------------------------------------------";
  while(fin.read((char*)this, sizeof(telephone)))
  {
     n++;
     if(n%21==0)
       {
         cout<<"\n----------------------------------------------------------------------";
         cout<<"\n\t\t\t\tPress any key to continue...........";
         getch();
         cur_page++;
         system("cls");
         cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
         cout<<"\n--------------------------------------------------------------------------";
         cout<<"\n\n S.No"<<"\t\t Name \t\t\tAddress\t\t Phone\t\tEmail";
         cout<<"\n--------------------------------------------------------------------------";
       }      
     cout<<"\n"<<n<<"\t |\t"<<this->name<<"\t |\t"<<this->name<<"\t |\t "<<this->phone<<"\t | \t"<<this->email;
  }                            
  cout<<"\n----------------------------------------------------------------------------";
  cout<<"\n Total Records :"<<n;
  fin.close();
  getch();
  return;
}
/* function to print name and address  */ 
void telephone::report_name_address()
{
  int pages = count_pages();
  int cur_page=1;
  /* steps to show report menu and data */
  int n=0;   
  ifstream fin;
  fin.open("telephone.dat",ios::binary);
  system("cls");
  cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
  cout<<"\n-----------------------------------------------------------------------------";
  cout<<"\n\n S.No"<<"\t\t Name \t\t\t\t\t\t Address";
  cout<<"\n-----------------------------------------------------------------------------";
  while(fin.read((char*)this, sizeof(telephone)))
  {
     n++;
     if(n%21==0)
       {
         cout<<"\n----------------------------------------------------------------------";
         cout<<"\n\t\t\t\tPress any key to continue...........";
         getch();
         cur_page++;
         system("cls");
         cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
         cout<<"\n--------------------------------------------------------------------------";
         cout<<"\n S.No"<<"\t\t Name \t\t\t\t\t\t Address";
         cout<<"\n--------------------------------------------------------------------------";
       }      
     cout<<"\n"<<n<<"\t |\t"<<this->name<<"\t |\t\t\t\t\t"<<this->address;
  }                            
  cout<<"\n----------------------------------------------------------------------------";
  cout<<"\n Total Records :"<<n;
  fin.close();
  getch();
  return; 
}
/* member function to print name and email address */
void telephone::report_name_email()   
{
  int pages = count_pages();
  int cur_page=1;
  /* steps to show report menu and data */
  int n=0;   
  ifstream fin;
  fin.open("telephone.dat",ios::binary);
  system("cls");
  cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
  cout<<"\n-----------------------------------------------------------------------------";
  cout<<"\n\n S.No"<<"\t\t Name \t\t\t\t\t\t Email";
  cout<<"\n-----------------------------------------------------------------------------";
  while(fin.read((char*)this, sizeof(telephone)))
  {
     n++;
     if(n%21==0)
       {
         cout<<"\n----------------------------------------------------------------------";
         cout<<"\n\t\t\t\tPress any key to continue...........";
         getch();
         cur_page++;
         system("cls");
         cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
         cout<<"\n--------------------------------------------------------------------------";
         cout<<"\n S.No"<<"\t\t Name \t\t\t\t\t\t Email";
         cout<<"\n--------------------------------------------------------------------------";
       }      
     cout<<"\n"<<n<<"\t |\t"<<this->name<<"\t |\t\t\t\t\t"<<this->email;
  }                            
  cout<<"\n----------------------------------------------------------------------------";
  cout<<"\n Total Records :"<<n;
  fin.close();
  getch();
  return;
} 
void telephone::report_name_phone()
{
  int pages = count_pages();

  int cur_page=1;
  /* steps to show report menu and data */
  int n=0;   
  ifstream fin;
  fin.open("telephone.dat",ios::binary);
  system("cls");

  cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
  cout<<"\n-----------------------------------------------------------------------------";
  cout<<"\n\n S.No"<<"\t\t Name \t\t\t\t\t\t Phone";
  cout<<"\n-----------------------------------------------------------------------------";
  while(fin.read((char*)this, sizeof(telephone)))
  {
     n++;
     if(n%21==0)
       {
         cout<<"\n----------------------------------------------------------------------";
         cout<<"\n\t\t\t\tPress any key to continue...........";
         getch();
         cur_page++;
         system("cls");
         cout<<"\n\t\t\t\t  Report                        "<<cur_page<< " of "<<pages; 
         cout<<"\n--------------------------------------------------------------------------";
         cout<<"\n S.No"<<"\t\t Name \t\t\t\t\t\t Phone";
         cout<<"\n--------------------------------------------------------------------------";
       }      
     cout<<"\n"<<n<<"\t |\t"<<this->name<<"\t |\t\t\t\t\t"<<this->phone;
  }                            
  cout<<"\n----------------------------------------------------------------------------";
  cout<<"\n Total Records :"<<n;
  fin.close();
  getch();
  return;
}

int main()
 {
          telephone t;
          t.main_menu();
          return 0;
}
