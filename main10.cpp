#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand (static_cast<unsigned int>(time(0)));
  int randomNumber = rand();
  int die = (randomNumber % 6)+1;
  int ans;
  int A=7-die;
  
   cout << "今回のサイコロの出目は " << die << "です。"<<endl;
  cout << "では、裏面の数字はいくつでしょうか" << endl;

  cin >> ans;

  if(ans==A){
    cout << "正解です。サイコロは正六面体でその面の数と裏側の面の数を足すと７になる性質があります。" << endl;
   }
  else {
    cout << "違います。サイコロは正六面体でその面の数と裏側の面の数を足すと７になる性質があります" << endl;
  cout << "では今度こそ、裏面の数字はいくつでしょうか" << endl;
    while(ans!=A){
      cin >> ans;
      if(ans!=A)cout<<"違います"<<endl;
      else cout<<"正解です"<<endl;
    }    
   }

  


  return 0;
}