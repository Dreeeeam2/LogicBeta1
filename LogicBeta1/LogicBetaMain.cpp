#include <bits/stdc++.h>
using namespace std;
int SystemVersion();
int SoftDraw();//Finish
int SoftCalculator();//Finish
int SoftTest();
int SoftCode();//Finish
int main(){
    cout << "###############LOGIC-BETA-1###############" << endl;
    cout << "COMMAND_" << endl;
    bool run = true;
    while (run != false){
         string command;
    cin >> command;
    if(command == "CODE"){
        SoftCode();
    }else if(command == "DRAW"){
        SoftDraw();
    }else if (command == "CAL"){
        SoftCalculator();
       } else if(command == "SYSTEMVERSION"){
        SystemVersion();
    }else if (command == "EXIT"){
        cout << "THANKS FOR USE,SEE YOU!" <<endl;
        run = false;
    }
    cout << "###############ENDLINE###############" << endl;
    } 
    return 0;
}
int SoftCode(){
         string command;
    cout << "###############SOFTCODE###############" << endl;

     cin >> command;
     if(command == "for"){
        int k ;
        cin >> k;
        string word;
        cin >> word;
        if(word == "cal"){
          int a,b;
          cin >> a >> b;
          string f;
          cin >> f;
          if(f == "*"){
                 k = 1;
                 cout << a*b;
          }else if(f == "/"){
 k = 1;
                 cout << a/b;
          }else if (f == "+"){
 k = 1;
                 cout << a+b;
          }else if(f == "-"){
 k = 1;
                 cout << a-b;
          }else{
            cout << "WRONG";
          }
        }else if(word == "pr")
        {
string op ;
cin >> op;
for(int i = 0;i < k;i++){
    cout << op << " ";
}
        }else if(word == "acc"){
int ini;
cin >> ini;
int num;
cin >> num;
for (int i = 0;i < k;i++){
    ini = ini + num;
}
cout << ini;
        } else{
            cout << "WRONG" << endl;
        }
     }else if(command == "print"){
       string word;
       cin >> word;
       cout << word;
     }else if (command == "if"){
       string word;
       cin >> word;
       if(word == "eq"){
        string to;
        cin >> to;
        if(to == "st"){
            string a,b;
            cin >>a >> b;
            if(a == b){
                cout << "TRUE" << endl;
            }else{
                cout << "FALSE" << endl;
            }
        }else if (to == "in"){
                int a;
                cin >> a;
                int b;
                cin >> b;
                if( a == b){
                    cout << "TRUE" << endl;
                
                }else{
                    cout << "FALSE" << endl;
                }
        }
       }else if(word == "max"){
             int a,b;
             cin >> a >>b;
             if(a > b){
                cout << a << endl;
             }else{
                cout << b << endl;
             }
       }
     }
}   
int SoftCalculator(){
  cout << "###############SOFTCALCULATOR###############" << endl;  
  string accu;
  cin >> accu;
  if(accu == "int"){
         cout << "SET OVER." << endl;
         int a,b;
         cin >> a >> b;
   string f;
          cin >> f;
            if(f == "*"){
                 
                 cout << a*b;
          }else if(f == "/"){
 
                 cout << a/b;
          }else if (f == "+"){
          cout << a+b;
          }else if(f == "-"){

                 cout << a-b;
          }else{
            cout << "WRONG";
          }
  }else if (accu == "double"){
cout << "SET OVER." << endl;
double a,b;
cin >> a >> b;
   string f;
          cin >> f;
           if(f == "*"){
                 
                 cout << a*b;
          }else if(f == "/"){
 
                 cout << a/b;
          }else if (f == "+"){
          cout << a+b;
          }else if(f == "-"){

                 cout << a-b;
          }else{
            cout << "WRONG";
          }
  }else if(accu == "long"){
cout << "SET OVER." << endl;
long long a,b;
cin >> a >> b;
   string f;
          cin >> f;
           if(f == "*"){
                 
                 cout << a*b << endl;
          }else if(f == "/"){
 
                 cout << a/b<< endl;
          }else if (f == "+"){
          cout << a+b<< endl;
          }else if(f == "-"){

                 cout << a-b<< endl;
          }else{
            cout << "WRONG";
          }
  }
  return 0;
}
int SystemVersion(){
    cout << "###############SYSTEMVERSION###############" << endl;
    cout << "SystemName: Logic" << endl;
    cout << "Version: Beta1" << endl;
    cout << "ArchivesNumber: lb - 08 - Windows - S" << endl;
}
int SoftDraw(){
 string shape;
    cout << "###############SOFTDRAW###############" << endl;
     cin >> shape;
     if(shape == "stt"){
     int lon;
     cin >> lon;
     int in ;
     cin >> in;
     for(int i = 0;i < lon;i++){
        cout << "-";
        for (int j = 0;j < in;j++){
            cout << " ";
        }
     }}else if (shape == "ver"){
int lon;
     cin >> lon;
     int in ;
     cin >> in;
     for (int j = 0;j < in;j++){
            cout << " " << endl;
        }
     for(int i = 0;i < lon;i++){
        cout << "|" << endl;;
        for (int j = 0;j < in;j++){
            cout << " " << endl;
        }
     }
     }
     }
int SoftTest(){
}