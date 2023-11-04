#include <iostream>
#include <vector>

bool isVectorSorted(std::vector<int> vec) {
    
      int n = vec.size();
    for (int i=0; i<n - 1; ++i) {
        
        if (vec[i] > vec[i + 1]) {
            
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> sortedVector = {1, 2, 3, 4, 59};
     
    bool x =  isVectorSorted(sortedVector);

      if (x) {
        std::cout << "The vector is sorted." << std::endl;
    } else {
        std::cout << "The vector is not sorted." << std::endl;
    }

   +

    return 0;
}

