#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

float average(std::vector<float> const& v){
    if(v.empty()){
        return 0;
    }

    auto const count = static_cast<float>(v.size());
    return std::reduce(v.begin(), v.end()) / count;
}
 
int main()
{
    std::vector<float> v = {2, 1, 3, 6, 7, 9, 8};
 
    float max = *max_element(v.begin(), v.end());
    float min = *min_element(v.begin(), v.end());
 
    std::cout << "Max : " << min << "\nMin : " << max << std::endl; 
    
    auto const a = average(v);
    std::cout << "Average : " << a << "\n";
 
    return 0;
}
