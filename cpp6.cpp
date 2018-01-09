
/* cpp6.cpp */
#include <iostream>
#include <stdio.h>
using namespace std;

class person{
public:
  string name;
};

class ticket{
public:
  int id;
  person* user;
  ticket(){user = new person;}
};

class hm{
public:
  int hour;
  int minute;
};

class transTicket : public ticket {
public:
  string origin;
  string destination;
  transTicket(): ticket(){};
};

class trainTicket : public transTicket{
public:
  trainTicket(): transTicket(){departureTime=new hm; arrivalTime=new hm;}
  hm* departureTime;
  hm* arrivalTime;
};

//trainTiket::trainTicket():

int main()
{
  int ticketNum;
  int hour, minute;
  cout << "チケットを何枚購入しますか？ ";
  cin >> ticketNum;
  cout << "\n";
  trainTicket* tickets = new trainTicket [ticketNum];
  for(int i = 0; i < ticketNum; i++){
    tickets[i].id = i+1;
    cout << i+1 << "人目の利用者の名前を入力してください: ";
    cin >> tickets[i].user->name;
    cout << "  出発地を入力してください: ";
    cin >> tickets[i].origin;
    cout << "  到着地を入力してください: ";
    cin >> tickets[i].destination;
    cout << "　出発時間を入力してください:　";
    scanf("%d:%d", &hour, &minute);
    
    tickets[i].departureTime->hour = hour;
    tickets[i].departureTime->minute = minute;
    cout << "　到着時間を入力してください:　";
    scanf("%d:%d", &hour, &minute);
    tickets[i].arrivalTime->hour = hour;
    tickets[i].arrivalTime->minute = minute;
  }
  cout << "\nチケット利用者一覧：\n";
  for(int i = 0; i < ticketNum; i++){
    trainTicket t = tickets[i];
    cout << " " << t.id << " : " << t.user->name << " : " << t.origin << " => " << t.destination << " ： "<< t.departureTime->hour << ":"<<t.departureTime->minute<< "=>"<< t.arrivalTime->hour << ":"<<t.arrivalTime->minute <<"\n";
  }
  cout << "\n"; 
}

