# Tower-of-Hanoi
Tower of Hanoi written in c++ <br>

Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. <br>
The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:  <br>
<ol>
<li> Only one disk can be moved at a time.</li>
<li> Each move consists of taking the upper disk from one of the stacks and <br>
     placing it on top of another stack i.e. <br>
     a disk can only be moved if it is the uppermost disk on a stack. </li>
<li> No disk may be placed on top of a smaller disk.</li>
</ol>
<b>More explanation : <a href="https://en.wikipedia.org/wiki/Tower_of_Hanoi" >Wikipedia</a> </b> <br> <br>
<img src="https://miro.medium.com/max/670/1*4fIwfKZCHzKGgPanAeWUnA.gif">
<p>Eaxmple :</p>

```cpp
#include <iostream>

void towerOfHanoi(unsigned int number,char start,char destination,char helper);

int main(int argc, char** argv) {
    towerOfHanoi(4, 'A', 'C', 'B');
    return 0;
}

```

<p>Output : </p>
<ul>
<li>Move disk 1 from A to B</li>
<li>Move disk 2 from A to C</li>
<li>Move disk 1 from B to C</li>
<li>Move disk 3 from A to B</li>
<li>Move disk 1 from C to A</li>
<li>Move disk 2 from C to B</li>
<li>Move disk 1 from A to B</li>
<li>Move disk 4 from A to C</li>
<li>Move disk 1 from B to C</li>
<li>Move disk 2 from B to A</li>
<li>Move disk 1 from C to A</li>
<li>Move disk 3 from B to C</li>
<li>Move disk 1 from A to B</li>
<li>Move disk 2 from A to C</li>
<li>Move disk 1 from B to C</li>
</ul>
