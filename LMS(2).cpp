#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

class books {
 public:
 int stock;
 char author[20], publisher[20];
 char bookname[20];
 float price;
 void loadbooks();
 void display();
 void search();
};
void books::loadbooks() {
 cout<<"\nEnter Book Name:";
 cin>>bookname;
 cout<<"\nEnter Author Name:";
 cin>>author;
 cout<<"\nEnter Publisher Name:";
 cin>>publisher;
 cout<<"\nEnter Price:";
 cin>>price;
 cout<<"\nEnter Stock:";
 cin>>stock;
 ofstream fout("Books.txt",ios::in|ios::out|ios::app);
 fout<<"\n\nBookname : "<<bookname;
 fout<<"\nAuthor : "<<author;
 fout<<"\nPublisher : "<<publisher;
 fout<<"\nPrice : "<<price;
 fout<<"\nStock : "<<stock;
 fout.close();
cout<<"\n-------------\n";
}
//void books::removebooks(){
//	cout<<"\n";
//}
void books::display() {
 std::ifstream fin; 
  int count=0;
 string line;
 while(fin.peek()!=EOF)
 getline(fin , line);
 count++;
 fin.open("Books.txt",ios::in|ios::out|ios::app);
 std::string f,a,b,c,d;
 cout<<"\n";
 while(std::getline(fin , f)){  
 count+=1;
 std::cout<<f<<"\n";
}
cout<<"\n"<<"No of Lines : "<<count;
 fin.close();
}

int main() {
 books ob[10];
 int ch, n;
 int a=1;
 do{
  cout<<"\n***************************************\n";
  cout<<"\n1.Add Books\n2.Display\n3.Exit\n";
  cout<<"\n***************************************\n";
  cout<<"\n\nEnter your Choice:";
  cin>>ch;
  switch(ch)
  {
  case 1: cout<<"Enter Number of Books:";
   cin>>n;
   for(int i=0;i<a;i++)
   ob[i].loadbooks();
   break;
  case 2:
   for(int i=0;i<a;i++)
   ob[i].display();
   break;
  case 3: exit(1);
  }
 }while(1);
 return 0;
}


