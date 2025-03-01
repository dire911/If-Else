#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    
    double hoursworked;
    double hourlypay;
    float yearsofservice;
    float performancerating;
   

    std::cout << " Enter Hours Worked: ";
    std::cin >> hoursworked;
    std::cout << " Enter Hourly Pay: ";
    std::cin >> hourlypay;
    std:: cout<< " Enter years of service: "; 
    std:: cin>> yearsofservice;
    std:: cout <<" Enter performance rating(1-5)): "; 
    std:: cin>> performancerating;

   double pay = hoursworked * hourlypay;
   double bonus1 = 0.5, bonus2 = 0.10;
  

    if ((yearsofservice >= 5)&&(performancerating >= 4)){
        std:: cout << " Congradulations! Your elegible for a 10% bonus ";
        std:: cout <<"\n Your Check is: $"<< std::fixed << std::setprecision(2)<< pay * bonus2 + pay;
    } // If years of service is greater or equal to 5 and also performance rating is greater or equal to 4
    // requirement will be met.

    else if ((yearsofservice < 5) && (performancerating < 4)){
        std:: cout<< " Your not elegible for a bonus at the moment\n ";
        std:: cout<< " Raise your performance rating and check back\n ";
    }// or if not and your years are less than 5 and performance is less than 4 
    // you will not recieve the bonus due to lack of years worked.

    else if ((yearsofservice >= 5) && (performancerating > 3) || (performancerating < 4)){
        std:: cout<< " You've earned a 5% bonus! ";
        std:: cout<< "\n Your Check is: $"<<std::fixed <<std::setprecision(2)<< pay * bonus1 + pay;
    }// another requirement is meeting the 5 year requirement and having either a performance
    // between 3 and 4 but for reference here I used greater than 3 and less than 4, for the between 

    if ((yearsofservice >= 5) && (performancerating < 3)){
        std:: cout<< " You're not elegible for a bonus at the moment\n ";
        std:: cout<< " Raise your performance rating and check back\n ";
    }// 5 year service requirement was met but due to the under 3 performance rating
    // elegibility was not met.

    else if ((yearsofservice < 5) && (performancerating > 4))
    {
        std:: cout << " Congradulations! Your eligible for a 5% bonus ";
        std:: cout<< "\n Your Check is: $"<<std::fixed <<std::setprecision(2)<< pay * bonus1 + pay;
    }// years of service was not met sadly, but due to the high performance rating
    // 5% requirement was made.

    
   


    return 0;



}