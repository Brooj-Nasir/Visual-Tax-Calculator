# Salary Tax Calculator Form

## Overview

Welcome to the **Salary Tax Calculator Form** project! This C++/CLI Windows Forms application provides a graphical interface for users to input their salary details and calculate the tax based on those inputs. 

Following Screenshot shows the gui of tax calculator with one tax example

  ![tax](https://github.com/user-attachments/assets/14d20d2a-184a-4246-b304-e76a180a1b86)

Output after pressing **Calculate Tax**:


   ![Screenshot tax](https://github.com/user-attachments/assets/24ef75dc-759d-4074-aa2a-f8b613b6a2de)

## Features

- **Salary Input Fields**: Three text boxes to enter different salary components.
- **Tax Calculation Button**: A button to compute the total salary, tax amount, and net salary.
- **Results Display**: Text boxes to display the total salary, tax amount, and net salary.

## How to Use

1. **Run the Application**: Open the project in Visual Studio and start debugging to run the application.
2. **Input Salary Details**: Enter values into the three salary text boxes (`textBox1`, `textBox2`, `textBox3`).
3. **Calculate Tax**:
   - Click the "CalculateTax" button.
   - The total salary will be displayed in `textBox4`.
   - The tax amount will be shown in `textBox5`.
   - The net salary after tax will be displayed in `textBox6`.
4. **View Results**: Check the displayed results to review the total salary, tax amount, and net salary.

## What It Does

The `MyForm` class defines a Windows Forms application that performs the following tasks:

1. **User Input**:
   - The form has three input fields (`textBox1`, `textBox2`, `textBox3`) where users can enter different salary amounts.

2. **Calculate Total Salary**:
   - When the "CalculateTax" button is clicked, the application sums the values from the three salary text boxes to compute the total salary.
   - The result is displayed in `textBox4`.

3. **Compute Tax**:
   - The application calculates tax based on predefined salary brackets:
     - **1%** tax for salaries between 40,000 and 70,000
     - **15%** tax for salaries between 70,000 and 100,000
     - **20%** tax for salaries between 100,000 and 130,000
     - **25%** tax for salaries between 130,000 and 160,000
     - **30%** tax for salaries between 160,000 and 200,000
     - **40%** tax for salaries above 200,000
   - The computed tax is displayed in `textBox5`.

4. **Calculate Net Salary**:
   - The net salary is calculated by subtracting the computed tax from the total salary.
   - The net salary is displayed in `textBox6`.

## Code File

You can view the complete code for this application [here](MyForm.h).

## Requirements

- **Visual Studio**: Required for C++/CLI development.
- **.NET Framework**: Needed for running Windows Forms applications.
- 
## My Form.h

- Add Following in My Form.h filw  [here](MyForm.cpp)
  
## Installation

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/Brooj-Nasir/Visual-Tax-Calculator.git
    cd Salary-Tax-Calculator
    ```
2. **Open in Visual Studio**:
    - Launch Visual Studio and open the solution file (`.sln`).
3. **Build and Run**:
    - Build the project and start debugging to run the application.

## Contributions

Contributions are welcome! Please fork this repository and submit a pull request with your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Sample Code

Here’s a snippet of the key functionality:

```cpp
private: System::Void CalculateTax_Click(System::Object^ sender, System::EventArgs^ e) {
    double tax;
    double result = System::Convert::ToDouble(textBox1->Text) + System::Convert::ToDouble(textBox2->Text) + System::Convert::ToDouble(textBox3->Text);
    textBox4->Text = System::Convert::ToString(result);
    if (result > 40000 && result < 70000) {
        tax = result * 0.01;
        textBox5->Text = System::Convert::ToString(tax);
    }
    if (result > 70000 && result < 100000) {
        tax = result * 0.15;
        textBox5->Text = System::Convert::ToString(tax);
   ...
