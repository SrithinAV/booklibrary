#include<iostream>
#include<fstream>
#include<cstring>
#include<sstream>
using namespace std;
void signup();
void login();
void intro();
void select();
void search();
char alphabet_();
void due_date();
void input_date();
int return_book_check();


class login_select{
public: 
    int day;
    int month;
    int year;
    char alpha[27];
    char alphabet;
    string return_convert_; 
    string funalpha;
    string alphabets;
    string password;
    string name;
    string check;
    string select_book;
    string return_books;
    string names;
    string validation;
    
    int j=0, i=0, k=0, c=0;
  int namerepeat(){
       fstream name_repeat;
    name_repeat.open("taken_books.txt", ios::in);
    if(name_repeat.is_open())
    {
        string collect_book;
        int f;
        
        while (getline(name_repeat,collect_book))
        {  
            if(collect_book == name)
            return 1;
           
        }
        

    }
  }
  int return_book_check(){
    fstream check_book;
    check_book.open("taken_books.txt", ios::in | ios:: out | ios::app);
    if(check_book.is_open())
    {
        string collect_book;
        int f;
        
        while (getline(check_book,collect_book))
        {  
            if(collect_book == name)
            f=1;
            if(collect_book == return_books && f == 1)
            {
                return 1;
            }
           
        }
        

    }
}
void input_date(){
    
    ostringstream str1;
    cout << "Enter the day   (  2  digit format   ) : "<<endl;
    cin >> day;
    cout << "Enter the month (  2   digit format  ) : "<<endl;
    cin >> month;
    cout <<"Enter the year   (  4   digit format  ) : "<<endl;
    cin >> year;
    if(month == 12){
        month = 1;
        year++;
    }
    else
    month++;
   if(month !=12 || month != 11 || month != 10 )
   {
       if(day==1 || day ==2 ||day==3 || day==4 || day==5 || day ==6 || day ==8 || day ==9){
              str1<<"0"<<day<<"0"<<month<<year;
              string updated_date = str1.str();
                   fstream updated;
                   updated.open("Due_date.txt", ios::out | ios::app);
                   if(updated.is_open())
                   {
                       updated<<name<<endl;
                       updated<<updated_date<<endl;
                       updated<<select_book<<endl;
                   }
                   updated.close();
       }
       else{
             str1<<day<<"0"<<month<<year;
             string updated_date = str1.str();
               fstream updated;
                   updated.open("Due_date.txt", ios::out | ios::app);
                   if(updated.is_open())
                   {
                       updated<<name<<endl;
                       updated<<updated_date<<endl;
                       updated<<select_book<<endl;
                   }
                   updated.close();
            }
   }
   else{
   str1 <<day<<month<<year;
    string updated_date = str1.str();
      fstream updated;
                   updated.open("Due_date.txt", ios::out | ios::app);
                   if(updated.is_open())
                   {
                       updated<<name<<endl;
                       updated<<updated_date<<endl;
                       updated<<select_book<<endl;
                   }
                   updated.close();
   }


}
char alphabet_()
{
    char alpha_;
    alpha_ = alphabet;
    switch(alphabet)
    {
        case 'A':alpha[0]='B';
                 return alpha[0];
                 break;

        case 'B':alpha[1] = 'C';return alpha[1];
                 break;
        case 'C':alpha[2] = 'D';return alpha[2];
                 break;
        case 'D':alpha[3] = 'E';return alpha[3];
                 break;
        case 'E':alpha[4] = 'F';return alpha[4];
                 break;
        case 'F':alpha[5] = 'G';return alpha[5];
                 break;
        case 'G':alpha[6] = 'H';return alpha[6];
                 break;
        case 'H':alpha[7] = 'I';return alpha[7];
                 break;
        case 'I':alpha[8] = 'J';return alpha[8];
                 break;
        case 'J':alpha[9] = 'K';return alpha[9];
                 break;
        case 'K':alpha[10] = 'L';return alpha[10];
                 break;
        case 'L':alpha[11] = 'M';return alpha[11];
                 break;
        case 'M':alpha[12] = 'N';return alpha[12];
                 break;
        case 'N':alpha[13] = 'O';return alpha[13];
                 break;
        case 'O':alpha[14] = 'P';return alpha[14];
                 break;
        case 'P':alpha[15] = 'Q';return alpha[15];
                 break;
        case 'Q':alpha[16] = 'R';return alpha[16];
                 break;
        case 'R':alpha[17] = 'S';return alpha[17];
                 break;
        case 'S':alpha[18] = 'T';return alpha[18];
                 break;
        case 'T':alpha[19] = 'U';return alpha[19];
                 break;
        case 'U':alpha[20] = 'V';return alpha[20];
                 break;
        case 'V':alpha[21] = 'W';return alpha[21];
                 break;
        case 'W':alpha[22] = 'X';return alpha[22];
                 break;
        case 'X':alpha[23] = 'Y';return alpha[23];
                 break;
        case 'Y':alpha[24] = 'Z';return alpha[24];
                 break;
        default:cout<<"";
        return 0;



    }
    

}
string booklist()
{
    string readbookselect;
    fstream Booklist;
    cout<<"List of books that you can read "<<endl;
    Booklist.open("readbooklist.txt",ios::in);
    if(Booklist.is_open())
    {
        string Readingbooks;
        while(getline(Booklist, Readingbooks))
        {
            cout<<Readingbooks<<endl;
        }
    }
    cout<<"Enter the book name you want to read"<<endl;
    cin.ignore();
    getline(cin,readbookselect);
    return readbookselect;
}
void readbooks()
{
    string readbookname,readbooknametxt;
    readbookname = booklist();
    readbooknametxt = readbookname + ".txt"; 
    fstream readbook;
    readbook.open(readbooknametxt,ios::in);
    if(readbook.is_open())
    {
        string readingbooks;
        while(getline(readbook, readingbooks))
        {
            cout<<"                                      "<<readingbooks<<endl;;
        }
    }
}
void return_book(){
    cout<<": Enter the book name :        : If you forgot the book name enter 'Taken_books :        :If no book to return enter any key... "<<endl;
    cin.ignore();
    getline(cin, return_books);
    if(return_books == "Taken_books" || return_books == "taken_books")
    due_date();
    else{
    int check_book;
    check_book = return_book_check();
    if(check_book == 1){
    fstream books;

                 books.open("available_books.txt",ios::in | ios::out | ios::app);
                 if(books.is_open())
                 {  string collect_book;
                    while(getline(books, collect_book)){
                            books<<return_books<<endl;
                            cout<<endl<<"  B O O K        R E T U R N E D       S U C C E S S F U L L Y   "<<endl;
                             i=1;
                    }
                     
                 }

                 books.close();
                 if(i==1)
                 {   string line;
                     ifstream find;
                     int l=0;
                      find.open("taken_books.txt");
                         ofstream temporary;
                      temporary.open("updated1.txt");

                     while (getline(find,line))
                                  {
                                    if(line == name)
                                     l=2;
                                     if (l>0)
                                     l--;
                                    else
                                     temporary << line << endl;
                                       
                                   }

                            temporary.close();
                           find.close();
                           remove("taken_books.txt");
                           rename("updated1.txt","taken_books.txt");
                  i = 2;
                }
                if(i==2){

                    ifstream dues;
                    int y = 0;
                    dues.open("Due_date.txt");
                     ofstream temporarybooks;
                      temporarybooks.open("updated2.txt");
                        string store_data;
                             while(getline(dues, store_data)){
                                 if(store_data == name)
                                 y =3;
                                 if(y>0)
                                 y--; 
                                 else
                                 temporarybooks << store_data <<endl;
                             }
                             temporarybooks.close();
                             dues.close();
                             remove("Due_date.txt");
                             rename("updated2.txt","Due_date.txt");

            
            
        }

    
                                 
                

    }
    else
    cout<<endl<<"   E r r o r    R e t u r n i n g    T h e    B o o k !    "<<endl;
    }
    string whether;
    cout<<endl<<"\nDO you want to take another book(yes/no) "<<endl;
    cin>>whether;
    if(whether == "yes" || whether == "Yes")
    Available_books();
    
}
void Available_books(){
 fstream books;
                 books.open("available_books.txt", ios::in);
                 if(books.is_open())
                 {
                     string Available_books;
                     while(getline(books, Available_books))
                     {   
                         if (j==0){ //because of this after calling this function program ends but not for return books!
                         cout<<"Hello "<<name<<","<<"\t Welcome to picsolet library!\n\n"<<"\t ***AVAILABLE BOOKS***\n"<<endl;
                         cout<<"*********************************************"<<endl;
                         cout<<"          P R E S S   E N T E R  "<<endl<<endl;

                        system("pause");
                        } 
                         cout<<endl<<"\t _________________________________________________________________________________________________"<<endl;
                         cout<<"\t|                                                                                                 |"<<endl;
                         cout<<"\t -------"<<Available_books<<"----"<<endl;
                         cout<<"\t|_________________________________________________________________________________________________|"<<endl<<endl;
                         j++;
                        
                     }
                     cout<<endl<<"*******************************************************************************************************************************************************"<<endl;
                     cout<<"SELECT BOOK (Enter 'no' if you dont want):         : O R : Enter 'Search' to search:           : O R : Enter 'Due_date' to check books in Due:        :"<<endl;
                     cout<<" "<<endl;
                     cin.ignore();
                     getline(cin, select_book);
                     books.close();
                     if(select_book == "Search" || select_book == "search")
                     {
                         search();
                     }
                     else if(select_book == "Due_date" || select_book == "due_date")
                     {
                         due_date();
                     }
                     else if(select_book == "back" || select_book == "Back")
                     login();
                    else 
                    select();
                 } 

}
void login()
{    
     int choose;
    system("cls");
    cout<<"*** L O G I N G    I N ***"<<endl;
    cout<<endl<<"U S E R    N A M E :(without whitespace): "<<endl;
    cin>>name;
    names = name +".dat";
    cout<<"P A S S W O R D    :(without whitespace):"<<endl;
    cin>>password;
    fstream passwords;
    passwords.open(names, ios::in );
    if(passwords.is_open()){
        string read_passwords;
        while(getline(passwords, read_passwords)){
            if(j==0){
            if(password == read_passwords){

                
                again:
                
                system("cls"); 
                cout<<"\n\n                                    :PRESS(1/2/3/4):                \n"<<endl;
                cout<<"* * * * * *       * * * * * *         * * * * * * *          * * * * *       * * * * * * * * * * * * * * *"<<endl;
                cout<<"*    1    *       *    2    *         *     3     *          *   4   *       *            5              *"<<endl;
                cout<<"*TAKE BOOK*       *READ BOOK*         *RETURN BOOK*          *  EXIT *       * search book with alphabet * "<<endl;
                cout<<"* * * * * *       * * * * * *         * * * * * * *          * * * * *       * * * * * * * * * * * * * * *"<<endl;
                cin>>choose;
                if(choose == 1){
                    system("cls");
                Available_books();

                }
                else if(choose == 2)
                {
                readbooks();
                j++;
                system("pause");
                goto again;
                }
                else if(choose == 3)
                { 
                   system("cls");
                   return_book();
                   j++;
                }
                else if(choose == 4)
                {
                    exit(0);
                }
                else if(choose == 5)
                {
                    search();
                    j++;
                }

                else{
                 cout<<"INVALID INPUT "<<endl;
                 goto again;
                }
            }
            
            }
            
        

        
        }passwords.close();
         if(j==0){
         cout<<"incorrect password"<<endl;
         cout<<"Try agian "<<endl;
         system("pause");
         login();
         }
    }
    else{
    char userchange;
    cout<<"User name doesn't exist : "<<endl;
    cout<<"Try another one(y/n)";
    cin>>userchange;
    if(userchange == 'y' || userchange == 'Y')
    login();
    }
    

       
        


}
void search(){
    system("cls");
    cout<<"Enter The  first  alphabet:(capital letter): "<<endl;
   cin>>alphabet;
   alphabets += alphabet;
   funalpha += alphabet_();
    fstream books;
                 books.open("available_books.txt", ios::in);
                 if(books.is_open())
                 {
                     string Available_books;
                     while(getline(books, Available_books))
                      {
                         if(Available_books == alphabets || Available_books == funalpha ){
                         k++;
                         }
                           if(k==1)
                         {
                             cout<<endl<<"\t _________________________________________________________________________________________________"<<endl;
                         cout<<"\t|                                                                                                 |"<<endl;
                         cout<<"\t -------"<<Available_books<<"----"<<endl;
                         cout<<"\t|_________________________________________________________________________________________________|"<<endl<<endl;
                             
                         }
                         
                         
                      } 
                    books.close();
                    cout<<"*********************************************"<<endl;
                     cout<<"SELECT BOOK (***Enter 'no' if you dont want Enter 'back to go back***): "<<endl;
                     cin.ignore();
                     getline(cin, select_book);

                     select();
                    
                 } 
}
void select()
{   
  
  string deleteline;
string line;
string check_store;
int namerepeatcheck = namerepeat();


ifstream checking;
checking.open("available_books.txt");
if(checking.is_open()){
  while(getline(checking,check_store))
  {
      if(check_store == select_book && namerepeatcheck != 1){
          cout<<"******************************************************************************************************************************"<<endl;
          cout<<select_book<<"  TAKEN BY  '"<<name<<"'"<<endl;
          cout<<"T H A N K Y O U '"<<name<<"'"<<endl;
          input_date();
          c++;
      }
     
  }
  
  checking.close();
}
 if(c==1){
     fstream check_books;
    check_books.open("taken_books.txt", ios::in | ios:: out | ios::app);
    if(check_books.is_open())
    {
        check_books<<name<<endl;
        check_books<<select_book<<endl;
    }check_books.close();
 }

  if(select_book != "no" && select_book != "search" && select_book != "Search" && select_book != "due_date" && select_book != "Due_date" && select_book !="o" && select_book != "back" && select_book != "Back"){
                                if(c==0 && namerepeatcheck != 1)
                          cout<<"Book not found"<<endl;
    if(namerepeatcheck == 1)
    cout<<"Kindly return the previous book to take another one "<<endl;
else{                            
cout<<"selected book is: "<<select_book<<endl;
ifstream fin;
fin.open("available_books.txt");
ofstream temp;
temp.open("updated.txt");

while (getline(fin,line))
{
    if (line != select_book)
    {
    temp << line << endl;
    }
}

temp.close();
fin.close();
remove("available_books.txt");
rename("updated.txt","available_books.txt");
}
}

cout<<"               "<<endl;
cout<<"T H A N K Y O U"<<endl;
}
void due_date(){
    int today_day;
    int today_month;
    int today_year;
     string day_;
    string month_;
    string year_;
    int day;
    int month;
    int year;
   char* char_arr;
    string storename, storedate, storebook;
    int i=0;  
    cout<<"Enter The day(2 digit format): "<<endl;
    cin.ignore();
    cin>>today_day;
    cout<<"Enter the month(2 digit format): "<<endl;
    cin>>today_month;
    cout<<"Enter the year(4 digit format): "<<endl;
    cin>>today_year;
    system("cls");
    fstream due;
    due.open("Due_date.txt", ios::in | ios::out);
    if(due.is_open()){
        string store_data;
        while(getline(due, store_data)){
            if(store_data == name)
                i=3;
            
            if(i==1)
            storebook = store_data;

            if(i==2){
                storedate = store_data;
                i--;
                    }

            if(i==3){
                storename = store_data;
                i--;
                    }

            
            
        }

    } due.close();
    
   
   if(i!=0){
    string str_obj(storedate);
    char_arr = &str_obj[0];
  
    day_ += char_arr[0];
    day_ += char_arr[1];
    

     month_ += char_arr[2];
     month_ += char_arr[3];

     year_ += char_arr[4];
     year_ += char_arr[5];
     year_ += char_arr[6];
     year_ += char_arr[7];

     day = stoi(day_);
     month = stoi(month_);
     year = stoi(year_);


     if(year < today_year)
     {
         cout<<"Failed to Return the book \n due date was "<<day<<"/"<<month<<"/"<<year<<"\nBook name: "<<storebook<<endl;
     }
     else if(year == today_year){
         if(month<today_month)
         {
            cout<<"Failed to Return the book \n due date was "<<day<<"/"<<month<<"/"<<year<<"\nBook name: "<<storebook<<endl;
         }
         else
           cout<<"Due date on "<<day<<"/"<<month<<"/"<<year<<"\nBook name: "<<storebook<<endl;

    
     }
     else if(year ==today_year)
     {
         if(month == today_month)
         {
             if(day >= today_day)
             {
                 cout<<"Due date on "<<day<<"/"<<month<<"/"<<year<<"\nBook name: "<<storebook<<endl;
             }
             else
              cout<<"failed to Return the book \n due date was "<<day<<"/"<<month<<"/"<<year<<"\nBook name: "<<storebook<<endl;
              
         }
     }
     
     else
      cout<<"Due date on "<<day<<"/"<<month<<"/"<<year<<"\nBook name: "<<storebook<<endl;
    
   }
   else
   cout<<"No books to return"<<endl;

   return_book();
}

};

void signup()
{   
    int check = 0;
    string name;
    string names;
    login_select l;
    string password;
    system("cls");
    cout<<"Enter your name(WITHOUT WHITESPACE): "<<endl;
    cin>>name;
    fstream username;
    username.open("usernames.txt",  ios::in);
     string usernames;
    while(getline(username,usernames)){
        if(usernames == name)
        check =1;
    }
    username.close();
   
    if(check != 1){
        fstream username1;
    username1.open("usernames.txt", ios::out | ios::app);
    username1 << name <<endl;
    names = name + ".dat";
    cout<<"Enter your password: "<<endl;
    cin>>password;
    fstream passwords;
    passwords.open(names, ios::out | ios::app );
    if(passwords.is_open()){
        passwords<<password<<endl;
        passwords.close();
    }
    else{
        cout<<"File could not be opened! "<<endl;
    }
    
  
  l.login();
    }
    else{
    cout<<"User name already exist, Try loging in:"<<endl;
    system("pause");
    l.login();
    }
}
void intro(){
    string account;
    login_select l;
    cout<<"Do you have an account :(yes/no): "<<endl;
    cin>>account;
    if(account == "yes")
       l.login();
    else
        signup();
}
int main()
{  
  cout<<endl<<"*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
  cout<<endl<<"                              Created by: S r i t h i n   A  V"<<endl<<endl;
  cout<<"                              linkedin  : S r i t h i n   A  V"<<endl<<endl;
  cout<<"                              Instagram : srith_in            "<<endl<<endl;
  cout<<endl<<"                       T    H    A    N    K             Y    O    U             \n\n\n"<<endl;
  system("pause");
  system("cls");
  intro();
}