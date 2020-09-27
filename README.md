# RedStone MBP

## How it will work?
How Redstone achives scalablity via a sharded setup.
For our implementation of sharding, a transaction will be sentby a user, to the chain with the least amount of pending transactions. As miners can choose what chain to mine and so would neglect the smaller chains (less txns =  less reward) we will require merge mining, meaning the miners use the same resorces but mine on all the chains at once. There will be three chains because transactions will go through smoother and faster than with one, therefore reducing transaction times. 
Please note this is currently still a thesis and NOT a tested system, if you have any ideas or concerns please open an issue.

![rs](https://miro.medium.com/max/368/1*xP-zfedDLDzPgz6ER2XnAw.jpeg)

# License

## The MIT License (MIT)
Copyright © 2020 Toni Dumancic 

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
