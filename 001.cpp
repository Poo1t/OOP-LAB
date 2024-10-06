#include<iostream>
#include<string>

using namespace std;

int main(void){
    string input;//declaring string
    //prompting user to enter a string
    cout<<"Enter a string: ";
    //fetching string from the user
    getline(cin,input);
    cout<<"String Reversed: ";
    int count=0;
// a counter to counter the total characters in the string
   while(1){
    if(input[count]=='\0')
    break;
    count++;
   }
  
    for (int i = count; i >= 0; i--)
    {
        
        cout<<input[i];
    }
   

}
