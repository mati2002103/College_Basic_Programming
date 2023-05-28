#include <iostream>
#include <vector>
#include <cstdlib>


int main(int argc, char *argv[]){
        int nominal =  std::atoi(argv[1]);
        

        std::vector<int>  bills = {200,100,50,20,10,5,2,1};
        std::vector<int> billsOut;

        for(int j = 0; j < bills.size() && nominal > 0;) {

        if(nominal>=bills[j])
        {
                nominal -= bills[j];
                billsOut.push_back(bills[j]);
        }
        else{
                j++;
        }

        }
        
        for (int i = 0; i < billsOut.size(); i++) {
                std::cout << billsOut[i]<<" ";
        }
        
}
