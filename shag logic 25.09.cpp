

#include <iostream>
using namespace std;

int main()
{
    //�������� 1

    /*char symbol;
    std::cout << "������ ������: ";
    std::cin >> symbol;

  
    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
        std::cout << "�� �����" << std::endl;
    }
    
    else if (symbol >= '0' && symbol <= '9') {
        std::cout << "�� �����" << std::endl;
    }
    
    else if ((symbol >= '!' && symbol <= '/') || (symbol >= ':' && symbol <= '@') ||
        (symbol >= '[' && symbol <= '`') || (symbol >= '{' && symbol <= '~')) {
        std::cout << "�� ���� ����������" << std::endl;
    }
    
    else {
        std::cout << "�� ����� ������" << std::endl;
    }

    return 0;*/





    //��������� 2




   /* double cost_per_minute;
    int from_operator, to_operator;

    std::cout << "������ ������� ������� �� �������: ";
    std::cin >> cost_per_minute;

    std::cout << "������, � ����� ��������� (1 - A, 2 - B, 3 - C): ";
    std::cin >> from_operator;

    std::cout << "������, �� ���� �������� (1 - A, 2 - B, 3 - C): ";
    std::cin >> to_operator;

    double multiplier = 1.0;
    if (from_operator == 1 && to_operator == 2) {
        multiplier = 1.2;
    }
    else if (from_operator == 2 && to_operator == 3) {
        multiplier = 1.1;
    }
    

    double total_cost = cost_per_minute * multiplier;
    std::cout << "�������� ������� �������: " << total_cost << " ���" << std::endl;

    return 0;*/




    //�������� 3




    /*int choice;
    const double pay_per_100_lines = 50.0;
    const double penalty_per_lateness = 20.0;

    std::cout << "����:\n";
    std::cout << "1. ���������� ������� ����� ���� ��� �������� ������\n";
    std::cout << "2. ���������� ������� �������� ��� ������ ��������\n";
    std::cout << "3. ��������� �������� �� ������� ����� � ��������\n";
    std::cout << "������ �����: ";
    std::cin >> choice;

    if (choice == 1) {
        double desired_income;
        int lateness;

        std::cout << "������ ������� �����: ";
        std::cin >> desired_income;

        std::cout << "������ ������� ��������: ";
        std::cin >> lateness;

        double total_penalty = (lateness / 3) * penalty_per_lateness;
        double required_lines = (desired_income + total_penalty) / pay_per_100_lines * 100;

        std::cout << "��� ����� �������� " << required_lines << " ����� ����" << std::endl;

    }
    else if (choice == 2) {
        int written_lines;
        double desired_salary;

        std::cout << "������ ������� ��������� ����� ����: ";
        std::cin >> written_lines;

        std::cout << "������ ������� ����� ��������: ";
        std::cin >> desired_salary;

        double base_salary = (written_lines / 100) * pay_per_100_lines;
        int max_lateness = (base_salary - desired_salary) / penalty_per_lateness * 3;

        std::cout << "���� ���� ���������� " << max_lateness << " ���(�)" << std::endl;

    }
    else if (choice == 3) {
        int written_lines, lateness;

        std::cout << "������ ������� ��������� ����� ����: ";
        std::cin >> written_lines;

        std::cout << "������ ������� ��������: ";
        std::cin >> lateness;

        double base_salary = (written_lines / 100) * pay_per_100_lines;
        double total_penalty = (lateness / 3) * penalty_per_lateness;
        double final_salary = base_salary - total_penalty;

        if (final_salary > 0) {
            std::cout << "���� ������ " << final_salary << " ������" << std::endl;
        }
        else {
            std::cout << "���� �� ������ �������� ����� ������" << std::endl;
        }
    }
    else {
        std::cout << "������������ ����" << std::endl;
    }

    return 0;*/
}


