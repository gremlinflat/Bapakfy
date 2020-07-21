#include <iostream>
#include <string>

using namespace std;

int main(){
while (true){
    cout<<"========================================"<<endl;
    cout<<" _                       _     __"<<endl;
    cout<<"| |__   __ _ _ __   __ _| | __/ _|_   _"<<endl;
    cout<<"| '_ \\ / _` | '_ \\ / _` | |/ / |_| | | |"<<endl;
    cout<<"| |_) | (_| | |_) | (_| |   <|  _| |_| |"<<endl;
    cout<<"|_.__/ \\__,_| .__/ \\__,_|_|\\_\\_|  \\__, |"<<endl;
    cout<<"            |_|                   |___/"<<endl;
    cout<<"========================================"<<endl<<endl;

    std::string message;
    std::string bapakfied_message;
    cout<<"Enter your message below :"<<endl;
    getline(cin, message);
    int i=0;
    bapakfied_message=message;

    while (i<bapakfied_message.length()){
        bool a = rand() % 2;
        if( a && bapakfied_message[i] != 32){
            bapakfied_message[i] -=32;
        }
        i++;
    }
    
    cout<<endl<<endl<<endl<<"Bapakfied message : "<<endl;
    //cout<<"========================================"<<endl;
    cout<<bapakfied_message<<",,.. xixixixi"<<endl;
    //cout<<"========================================"<<endl;
    cin.ignore();
}
    
    return 0;
}