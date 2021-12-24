#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool isExist(char huruf, char arr[])
{
  int lengthArray = sizeof(arr)/sizeof(arr[0]);
  
  for(int i=0; i < lengthArray; i++)
  {
    if(huruf == arr[i])
    {
      return true;
    }
  }
  
  return false;
}

void toLowerCase(string &sentence)
{
  transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
}

int main() 
{
    string password = "INIPASSOWRD";
    toLowerCase(password);
    
    cout << password;
    
    
    int lengthArray = password.length();
    
    char hurufVokal[] = {'a', 'i', 'u', 'e', 'o'};
    char hurufKonsonan[] = {'b', 'c', 'd', 'f', 'h', 'i', 'j', 'k', 'l'};
    
    for(int i=0; i < lengthArray; i++)
    {
      if(isExist(password[i], hurufVokal))
      {
        cout << "0";
      } else if(isExist(password[i], hurufKonsonan))
      {
        cout << "1";
      } else {
        cout << "X";
      }
    }
    
    
    return 0;
}
