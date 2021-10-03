#include <iostream>

using namespace std;
/*      Description : Function for Tower of Hanoi.
        * Returns : Nothing 
        * Parameters : 
          number - Amount of disks , positive integer 
          start , destination , helper - char element for describe rod name
        * Result is move the entire stack to another rod
        * @author : Kosta
*/
void towerOfHanoi(unsigned int number,char start,char destination,char helper){
    if(start == destination || start == helper || helper == destination){
        cout << "Rods can't be named same";
        return;
    }
    if(number == 1){
        cout << "Move disk 1 from " << start << " to " << destination << endl;
        return;
    }
    towerOfHanoi(number - 1, start, helper, destination);
    cout << "Move disk "<<number<<" from " << start << " to " << destination << endl;
    towerOfHanoi(number - 1, helper, destination, start);
}

int main(int argc, char** argv) {
    towerOfHanoi(5, 'A', 'C', 'B');
    return 0;
}