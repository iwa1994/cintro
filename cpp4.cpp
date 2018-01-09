/* cpp4.cpp */
#include <iostream>
using namespace std;


class person{
public:
  string address;
  string name; 
};

class addressbook{
  person* friends;
  int numberOfFriends;
public:
  addressbook();
  ~addressbook();
  void listFriends();
  void addFriend(string n, string a);
  void find(string query);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
  friends = new person [100];
}
// deconstructor
addressbook::~addressbook(){
  if(friends != NULL){
    delete [] friends;
  }
}



void addressbook::addFriend(string n, string a){
  friends[numberOfFriends].name = n;
  friends[numberOfFriends].address = a;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << ":" <<friends[i].address << "\n";
  }      
}

void addressbook::find(string query){
  int hit = 0;
  if(query == ""){ cout<< "クエリが入力されていません。\n"; return;}
  for(int i = 0; i < numberOfFriends; i++){    
    if(friends[i].name == query){
      cout << friends[i].name << ":" <<friends[i].address<< "\n";
      hit++;
    }    
  }
  if(hit == 0){cout << "no_one\n";}
}

int main()
{
  addressbook abook;
  string name, address;
  string query;
  cout << "住所録に登録する名前と住所を半角の空白を入れて入力してください（終了するにはquitと入力してください）: ";
  while(1){
    
    cin >> name;
    if(name == "quit"){address = "";
    }else{cin >> address;}
    //   cout << "name.length() = " << name.length() << "\n";
    if(name == "quit"){break;}
    abook.addFriend(name, address);
  }

  cout << "\n名前リスト:\n";
  abook.listFriends();

  cout << "\n検索\n";
  cin >> query;
  cout << "クエリ:" << query<< "\n";
  cout << "結果:\n";
  abook.find(query);
}
