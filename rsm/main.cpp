// redstone.multichain.cpp : Defines the entry point for the application.
//RedStone Main.cpp
#include <iostream>
#include "sha256.h"
#include "Blockchain.h"

using std::string;
using std::cout;
using std::endl;
Welcome = "Welcome to redstone client";
Nodestarting = "Node is starting please wait";
Error = "Something wrong if this hapen again contact ous on discord red-stone.me";
Syncing = "Node is syncing please wait!";
Pnf = "Peers not found";  
Pf = "Peer Found!"
int main(){
    std::cout << "Welcome to redstone client"
   
    


}
int main(int argc, char* argv[])
{
    string input = "grape";
    string output1 = sha256(input);

    cout << "sha256('" << input << "'):" << output1 << endl;
    return 0;
}
int count;
    while(true)
    {
       Blockchain bChain = Blockchain(); //Loop to mine block every 10 sec loop will coint block that block that counted will be added to the cahin i think
       block = cout << "Mining block" << endl; bChain.AddBlock(Block(count, "Block Data"));
       count +=1; 
       cout << block << endl; // print every 10 second 
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
