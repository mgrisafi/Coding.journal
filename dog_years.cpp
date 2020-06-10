#include <iostream>

int main(){
    
    int dog_age = 6;      // Dog current age
    int early_years = 21; // First two years count as 21 years of human life
    int later_years = (dog_age - 2) * 4; // Each year after the first two years counts as 4 human years
    int human_years = early_years + later_years;
    
    std::cout << "My name is Toto!" << " Ruff ruff, I am " << human_years << "\nyears old in human years. " << std::endl;
}
