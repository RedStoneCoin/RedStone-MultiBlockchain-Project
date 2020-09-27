// redstone.multichain.cpp : Defines the entry point for the application.
//RedStone Main.cpp
#include <iostream>
#include "sha256.h"
#include "Blockchain.h"

using std::string;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    string input = "grape";
    string output1 = sha256(input);

    cout << "sha256('" << input << "'):" << output1 << endl;
    return 0;
}
int main() {
    Blockchain bChain = Blockchain();

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));

    return 0;
}