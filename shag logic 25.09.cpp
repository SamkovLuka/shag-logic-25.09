

#include <iostream>
using namespace std;

int main()
{
    //завдання 1

    /*char symbol;
    std::cout << "Введіть символ: ";
    std::cin >> symbol;

  
    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
        std::cout << "Це літера" << std::endl;
    }
    
    else if (symbol >= '0' && symbol <= '9') {
        std::cout << "Це цифра" << std::endl;
    }
    
    else if ((symbol >= '!' && symbol <= '/') || (symbol >= ':' && symbol <= '@') ||
        (symbol >= '[' && symbol <= '`') || (symbol >= '{' && symbol <= '~')) {
        std::cout << "Це знак пунктуації" << std::endl;
    }
    
    else {
        std::cout << "Це інший символ" << std::endl;
    }

    return 0;*/





    //завданння 2




   /* double cost_per_minute;
    int from_operator, to_operator;

    std::cout << "Введіть вартість розмови за хвилину: ";
    std::cin >> cost_per_minute;

    std::cout << "Оберіть, з якого оператора (1 - A, 2 - B, 3 - C): ";
    std::cin >> from_operator;

    std::cout << "Оберіть, на який оператор (1 - A, 2 - B, 3 - C): ";
    std::cin >> to_operator;

    double multiplier = 1.0;
    if (from_operator == 1 && to_operator == 2) {
        multiplier = 1.2;
    }
    else if (from_operator == 2 && to_operator == 3) {
        multiplier = 1.1;
    }
    

    double total_cost = cost_per_minute * multiplier;
    std::cout << "Загальна вартість розмови: " << total_cost << " грн" << std::endl;

    return 0;*/




    //завдання 3




    /*int choice;
    const double pay_per_100_lines = 50.0;
    const double penalty_per_lateness = 20.0;

    std::cout << "Меню:\n";
    std::cout << "1. Порахувати кількість рядків коду для бажаного доходу\n";
    std::cout << "2. Порахувати кількість запізнень для бажаної зарплати\n";
    std::cout << "3. Визначити зарплату за кількість рядків і запізнень\n";
    std::cout << "Оберіть опцію: ";
    std::cin >> choice;

    if (choice == 1) {
        double desired_income;
        int lateness;

        std::cout << "Введіть бажаний дохід: ";
        std::cin >> desired_income;

        std::cout << "Введіть кількість запізнень: ";
        std::cin >> lateness;

        double total_penalty = (lateness / 3) * penalty_per_lateness;
        double required_lines = (desired_income + total_penalty) / pay_per_100_lines * 100;

        std::cout << "Васі треба написати " << required_lines << " рядків коду" << std::endl;

    }
    else if (choice == 2) {
        int written_lines;
        double desired_salary;

        std::cout << "Введіть кількість написаних рядків коду: ";
        std::cin >> written_lines;

        std::cout << "Введіть бажаний обсяг зарплати: ";
        std::cin >> desired_salary;

        double base_salary = (written_lines / 100) * pay_per_100_lines;
        int max_lateness = (base_salary - desired_salary) / penalty_per_lateness * 3;

        std::cout << "Вася може запізнитися " << max_lateness << " раз(и)" << std::endl;

    }
    else if (choice == 3) {
        int written_lines, lateness;

        std::cout << "Введіть кількість написаних рядків коду: ";
        std::cin >> written_lines;

        std::cout << "Введіть кількість запізнень: ";
        std::cin >> lateness;

        double base_salary = (written_lines / 100) * pay_per_100_lines;
        double total_penalty = (lateness / 3) * penalty_per_lateness;
        double final_salary = base_salary - total_penalty;

        if (final_salary > 0) {
            std::cout << "Вася отримає " << final_salary << " доларів" << std::endl;
        }
        else {
            std::cout << "Вася не отримає зарплати через штрафи" << std::endl;
        }
    }
    else {
        std::cout << "Неправильний вибір" << std::endl;
    }

    return 0;*/
}


