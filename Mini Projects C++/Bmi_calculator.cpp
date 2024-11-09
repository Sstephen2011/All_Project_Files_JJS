#include <iostream>

int main() {
    double height = 0;
    double weight = 0;
    std:: cout << "Enter your height (in metres!)\n";
    std:: cin >> height;
    std:: cout << "Enter your weight (in kilograms)";
    std:: cin >> weight;
    
    double bmi = weight / (height * height);
    std:: cout << bmi << "\n";
    
    if (bmi <= 18.5) {
        std:: cout << "You're underweight!";
    }
    
    else if (bmi >= 18.6 && bmi <= 23.9){
        std:: cout << "You're Normal.";
    }

    else if (bmi >= 24 && bmi <= 29.9){
        std:: cout << "You're Overweight!";
    }

    else if (bmi >= 30 && bmi <= 40) {
        std:: cout << "You're Obese!";
    }
    
    else {
        std:: cout << "Your're Severely Obese!";
    }
}


