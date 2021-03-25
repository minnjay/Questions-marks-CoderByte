#include <iostream>
#include <string>
using namespace std;


string QuestionsMarks(string str) {
  
  // code goes here  
  int qmark = 0;
  int count = 0;
  int index = 0;
  int first, second;
  bool once = false;
  for(int i = 0; i<str.length();i++)
  {
    qmark = 0;
    count = 0;
    index = 0;
    if(str[i] >= '0' && str[i] <= '9')
    {
      first = str[i]-'0';
      for(int a = i+1;a<str.length(); a++)
      {
        if(str[a] == '?')
        {
          qmark ++;
        }
      }
      if(qmark >= 3)
      {


        for(int c = i+1;c<i+4; c++)
        {
          if(str[c] >= '0' && str[c] <= '9')
          {
            second = str[c]-'0';
            if(first+second == 10)
            {
              return "false";
            }
          }
        }


        for(int a = i+1;a<str.length(); a++)
        {
          if(str[a] == '?')
          {
            count ++;
            if(count ==3)
            {
              for(int b = a+1; b<str.length();b++)
              {
                if(str[b] >= '0' && str[b] <= '9')
                {
                  second = str[b]-'0';
                  if(first + second == 10)
                  {
                    once = true;
                  }
                }
              }
            }
          }
        }
      }else
      {
        for(int a = i+1;a<i+4; a++)
        {
          if(str[a] >= '0' && str[a] <= '9')
          {
            second = str[a]-'0';
            if(first+second == 10)
            {
              return "false";
            }
          }

        }
      }
    }
  }

  if(once)
  {
    return "true";
  }else
  {
    return "false";
  }

}

int main(void) { 
   
  // keep this function call here
  cout << QuestionsMarks(coderbyteInternalStdinFunction(stdin));
  return 0;
    
}
