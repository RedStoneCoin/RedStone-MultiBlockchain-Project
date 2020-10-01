// redstone.multichain.cpp : Defines the entry point for the application.
//RedStone Main.cpp
#include <iostream>
#include "sha256.h"
#include "Blockchain.h"

using std::string;
using std::cout;
using std::endl;
Welcome = "Welcome to the redstone client";
Nodestarting = "Your node is starting please wait";
Error = "Something wrong. if this keeps happening again contact us on discord: red-stone.me";
Syncing = "Your node is syncing please wait!";
Pnf = "Peers not found";  
Pf = "Peers Found!"
int main(){
    std::cout << Welcome << endl;
   
    


}
int main(int argc, char* argv[])
{
    string input = "grape";
    string output1 = sha256(input);

    cout << "sha256('" << input << "'):" << output1 << endl;
    //return 0;
    int count;
    while(true)
    {
       Blockchain bChain = Blockchain(); //Loop to mine block every 10 sec loop will coint block that block that counted will be added to the cahin i think
       Block block = Block(count, "Block Data");
       cout << "Mining block" << endl;
       bChain.AddBlock(block);
       count +=1; 
        // this does not print every 10 secconds, this prints as fast as it can. You need to implment a non blocking delay (by checking timestamp diffrence and only calling
        //cout when the diffrence is over 10 secconds)
       cout << block << endl; // print every 10 second 
    }
    return 0;
}
//int main() {
 //   Blockchain bChain = Blockchain();

  //  cout << "Mining block 1..." << endl;
 //  bChain.AddBlock(Block(1, "Block 1 Data"));

  //  cout << "Mining block 2..." << endl;
  //  bChain.AddBlock(Block(2, "Block 2 Data"));

   // cout << "Mining block 3..." << endl;
    //bChain.AddBlock(Block(3, "Block 3 Data"));

   // return 0;
//}
