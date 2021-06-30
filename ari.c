#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include<math.h>
string ari(string s)
{
  int characters=0;
  int words=0;
  int sentences=0;
  for (int i=0; s[i]!='\0'; i++)
  {
      if (isalnum(s[i]))
      {
         characters++;
      }
    else if (s[i]==' ')
    {
       words++;
    }
    else if (s[i]=='.' || s[i]=='!' || s[i]=='?')
    {
      sentences++;
    }
  }
  int score=0;
  string g;
  score = (int) ceil((4.71 * (characters/(float) words)) + (0.5 * (words/(float) sentences)) - 21.43); 
  if (score==1) 
    g="Kindergaten";
  else if (score==2)
    g="First/Second Grade";
  else if (score==3)
    g="Third Grade";
  else if (score==4)
    g="Fourth Grade";
  else if (score==5)
    g="Fifth Grade";
  else if (score==6)
    g="Sixth Grade";
  else if (score==7)
    g="Seventh Grade";
  else if (score==8)
    g="Eighth Grade";
  else if (score==9)
    g="Ninth Grade";
  else if (score==10)
    g="Tenth Grade";
  else if (score==11)
    g="Eleventh Grade";
  else if (score==12)
    g="Twelfth grade";
  else if (score==13)
    g="College student";
  else 
    g="Professor";
  return g;
}
