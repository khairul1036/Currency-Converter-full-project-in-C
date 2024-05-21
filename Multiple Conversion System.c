#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define PI 3.14159265


void cover_page()
{
    printf("\n\n\t\t\t*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*\n"); // (
    printf("\t\t\t*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*\n");
    printf("\t\t\t*^*\t\t\t\t\t\t\t\t*^*\n");
    printf("\t\t\t*^*\t\t      Welcome to Our Project\t\t\t*^*\n");
    printf("\t\t\t*^*\t\t\t\t\t\t\t\t*^*\n");                                                  // project name
    printf("\t\t\t*^*\t\t    MULTIPLE CONVERTER SYSTEM\t\t\t*^*\n");
    printf("\t\t\t*^*\t\t\t\t\t\t\t\t*^*\n");
    printf("\t\t\t*^*\t\t\t\t\t\t\t\t*^*\n");
    printf("\t\t\t*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*\n");
    printf("\t\t\t*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*^*\n\n"); // )
}


void loop()
{
    while(1)
    {
        int input;
        printf("\n\n\t\t---------------------------------------------------------------------------------------\n");
        printf("\n\t\t\tPress 1 for Continue and Press 0 for EXIT : ");
        scanf("%d",&input);
        system("cls"); //clear screen
        if(input==0)
        {
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tProcessing successful. \n\n\t\t\t\t\t\t      Thank You\n\n\n\n\n\n\n");
            // printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSource: Data provided by Webull.\n\n\n\n\n\n\n\n\n");
            while(1)
            {
                int k;
                printf("\n\n\t\t---------------------------------------------------------------------------------------\n");
                printf("\n\t\t\tPress 1 for Show History and press 0 for EXIT : ");
                scanf("%d",&k);
                if(k==1)
                {
                    read_file();
                }
                else if(k==0)
                {
                    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tSource: Google\n");
                    break;
                }

                else
                {
                    printf("\n\n\t\t\t\t\tInput Error Please Try Again.\n\n");
                }
            }
            break;

        }
        else if(input==1)
        {
            choice_conversion();
        }
        else
        {
            // system("color 04");
            printf("\n\n\t\t\t\t\tInput Error Please Try Again.\n");
            // getch();
            // system("color 0A");
        }
    }
}
/* Choice Conversion */
void choice_conversion ()
{
    int choice;
    printf("\n\n\n\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\tConversion Menu:\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t1. Currency Conversion\t\t\t\t*\n");
    printf("\t\t\t*\t\t2. Number System Conversions\t\t\t*\n");
    printf("\t\t\t*\t\t3. Unit Conversion\t\t\t\t*\n");
    printf("\t\t\t*\t\t4. Temperature Conversion\t\t\t*\n");
    printf("\t\t\t*\t\t5. Angle Conversion\t\t\t\t*\n");
    printf("\t\t\t*\t\t6. Time Conversion\t\t\t\t*\n");
    printf("\t\t\t*\t\t7. Exit\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    system("cls"); //clear screen

    switch(choice)
    {
    case 1:
        currency_separate();
        break;
    case 2:
        number_conversion();
        break;
    case 3:
        unit_conversion();
        break;
    case 4:
        temperature_conversion();
        break;
    case 5:
        angle_conversion();
        break;
    case 6:
        time_conversion();
        break;
    case 7:
        return 0;
    default:
        printf("\n\t\t\tInvalid choice. Please try again.\n");
    }
}
/* Choice Conversion */


/* Time Conversion */
// Function to convert time from hours to minutes
int hours_to_minutes(int hours) {
    return hours * 60;
}

// Function to convert time from minutes to hours
float minutes_to_hours(int minutes) {
    return (float) minutes / 60;
}

// Function to convert time from minutes to seconds
int minutes_to_seconds(int minutes) {
    return minutes * 60;
}

// Function to convert time from seconds to minutes
float seconds_to_minutes(int seconds) {
    return (float) seconds / 60;
}

int time_conversion() {
    int choice, time;
    float result;

    printf("\n\n\n\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\tChoose an option:\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t1. Hours to Minutes\t\t\t\t*\n");
    printf("\t\t\t*\t\t2. Minutes to Hours\t\t\t\t*\n");
    printf("\t\t\t*\t\t3. Minutes to Seconds\t\t\t\t*\n");
    printf("\t\t\t*\t\t4. Seconds to Minutes\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n\t\t\tEnter time in hours: ");
            scanf("%d", &time);
            result = hours_to_minutes(time);
            printf("\n\t\t\tTime in minutes: %.2f\n", result);
            break;
        case 2:
            printf("\n\t\t\tEnter time in minutes: ");
            scanf("%d", &time);
            result = minutes_to_hours(time);
            printf("\n\t\t\tTime in hours: %.2f\n", result);
            break;
        case 3:
            printf("\n\t\t\tEnter time in minutes: ");
            scanf("%d", &time);
            result = minutes_to_seconds(time);
            printf("\n\t\t\tTime in seconds: %d\n", (int)result);
            break;
        case 4:
            printf("\n\t\t\tEnter time in seconds: ");
            scanf("%d", &time);
            result = seconds_to_minutes(time);
            printf("\n\t\t\tTime in minutes: %.2f\n", result);
            break;
        default:
            printf("\n\t\t\tInvalid choice\n");
            return 1;
    }

    // Storing the converted time and choice in a file
    FILE *fp;
    fp = fopen("Calculation Data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
    }
    fprintf(fp, "\n\t\t\tTime: %d, Result: %.2f\n", time, result);
    fclose(fp);

}
/* Time Conversion */


/* Angle Conversion */
// Function to convert degrees to radians
double degrees_to_radians(double degrees) {
    return degrees * (PI / 180.0);
}

// Function to convert radians to degrees
double radians_to_degrees(double radians) {
    return radians * (180.0 / PI);
}

int angle_conversion() {
    int choice;
    double angle, result;

    printf("\n\n\n\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\tChoose an option:\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t1. Degrees to Radians\t\t\t\t*\n");
    printf("\t\t\t*\t\t2. Radians to Degrees\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n\t\t\tEnter angle in degrees: ");
            scanf("%lf", &angle);
            result = degrees_to_radians(angle);
            printf("\n\t\t\tAngle in radians: %lf\n", result);
            break;
        case 2:
            printf("\n\t\t\tEnter angle in radians: ");
            scanf("%lf", &angle);
            result = radians_to_degrees(angle);
            printf("\n\t\t\tAngle in degrees: %lf\n", result);
            break;
        default:
            printf("\n\t\t\tInvalid choice\n");
            return 1;
    }

    // Storing the converted angle and choice in a file
    FILE *fp;
    fp = fopen("Calculation Data.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
    }
    fprintf(fp, "\n\t\t\tAngle: %lf\n\t\t\tResult: %lf\n", angle, result);
    fclose(fp);
}

/* Angle Conversion */


/* Unit Conversion */
// Function to convert centimeters to meters
float cm_to_m(float cm) {
    return cm / 100.0;
}

// Function to convert meters to centimeters
float m_to_cm(float m) {
    return m * 100.0;
}

// Function to convert kilometers to meters
float km_to_m(float km) {
    return km * 1000.0;
}

// Function to convert meters to kilometers
float m_to_km(float m) {
    return m / 1000.0;
}

// Function to convert inches to centimeters
float inch_to_cm(float inch) {
    return inch * 2.54;
}

// Function to convert centimeters to inches
float cm_to_inch(float cm) {
    return cm / 2.54;
}

// Function to convert feet to meters
float feet_to_m(float feet) {
    return feet * 0.3048;
}

// Function to convert meters to feet
float m_to_feet(float m) {
    return m / 0.3048;
}


int unit_conversion() {
    int choice;
    float value;

    // Open a file for writing
    FILE *file = fopen("Calculation Data.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
    }

    printf("\n\n\n\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\tChoose an option:\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t1. cm to m\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t2. m to cm\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t3. km to m\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t4. m to km\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t5. inch to cm\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t6. cm to inch\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t7. feet to m\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t8. m to feet\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\n\t\t\tEnter length in centimeters: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in centimeters: %.2f cm\n", value);
            fprintf(file, "\n\t\t\t%.2f cm = %.2f m\n", value, cm_to_m(value));
            printf("\n\t\t\t%.2f cm = %.2f m\n", value, cm_to_m(value));
            break;
        case 2:
            printf("\n\t\t\tEnter length in meters: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in meters: %.2f m\n", value);
            fprintf(file, "\n\t\t\t%.2f m = %.2f cm\n", value, m_to_cm(value));
            printf("\n\t\t\t%.2f m = %.2f cm\n", value, m_to_cm(value));
            break;
        case 3:
            printf("\n\t\t\tEnter length in kilometers: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in kilometers: %.2f km\n", value);
            fprintf(file, "\n\t\t\t%.2f km = %.2f m\n", value, km_to_m(value));
            printf("\n\t\t\t%.2f km = %.2f m\n", value, km_to_m(value));
            break;
        case 4:
            printf("\n\t\t\tEnter length in meters: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in meters: %.2f m\n", value);
            fprintf(file, "\n\t\t\t%.2f m = %.2f km\n", value, m_to_km(value));
            printf("\n\t\t\t%.2f m = %.2f km\n", value, m_to_km(value));
            break;
        case 5:
            printf("\n\t\t\tEnter length in inches: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in inches: %.2f inches\n", value);
            fprintf(file, "\n\t\t\t%.2f inches = %.2f cm\n", value, inch_to_cm(value));
            printf("\n\t\t\t%.2f inches = %.2f cm\n", value, inch_to_cm(value));
            break;
        case 6:
            printf("\n\t\t\tEnter length in centimeters: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in centimeters: %.2f cm\n", value);
            fprintf(file, "\n\t\t\t%.2f cm = %.2f inches\n", value, cm_to_inch(value));
            printf("\n\t\t\t%.2f cm = %.2f inches\n", value, cm_to_inch(value));
            break;
        case 7:
            printf("\n\t\t\tEnter length in feet: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in feet: %.2f feet\n", value);
            fprintf(file, "\n\t\t\t%.2f feet = %.2f m\n", value, feet_to_m(value));
            printf("\n\t\t\t%.2f feet = %.2f m\n", value, feet_to_m(value));
            break;
        case 8:
            printf("\n\t\t\tEnter length in meters: ");
            scanf("%f", &value);
            fprintf(file, "\n\n\t\t\tEnter length in meters: %.2f m\n", value);
            fprintf(file, "\n\t\t\t%.2f m = %.2f feet\n", value, m_to_feet(value));
            printf("\n\t\t\t%.2f m = %.2f feet\n", value, m_to_feet(value));
            break;
        default:
            printf("\n\t\t\tInvalid choice\n");
    }

    // Close the file
    fclose(file);
}
/* Unit Conversion */


/* Temperature Conversion */
// Function to convert temperature from Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function to convert temperature from Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Function for temperature conversion
int temperature_conversion()
{
    FILE *f;
    f = fopen("Calculation Data.txt", "a");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return -1;
    }

    int choice;
    float temperature;

    printf("\n\n\n\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\tChoose an option:\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t1. Celsius to Fahrenheit\t\t\t*\n");
    printf("\t\t\t*\t\t2. Fahrenheit to Celsius\t\t\t*\n");
    printf("\t\t\t*\t\t3. Exit\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("\n\t\t\tEnter temperature in Celsius: ");
        scanf("%f", &temperature);
        fprintf(f, "\n\n\t\t\tEnter temperature in Celsius: %.2f", temperature);
        printf("\n\t\t\t%.2f Celsius = %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
        fprintf(f, "\n\t\t\t%.2f Celsius = %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
        break;
    case 2:
        printf("\n\t\t\tEnter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        fprintf(f, "\n\n\t\t\tEnter temperature in Fahrenheit: %.2f", temperature);
        printf("\n\t\t\t%.2f Fahrenheit = %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
        fprintf(f, "\n\t\t\t%.2f Fahrenheit = %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
        break;
    case 3:
        fclose(f);
        return 0;
    default:
        printf("\n\t\t\tInvalid choice. Please try again.\n");
        break;
    }

    fclose(f);
}
/* Temperature Conversion */


/* Number Conversion */
void number_conversion ()
{
    int choice, decimal;
    long long binary;
    char hex[17];
    printf("\n\n\n\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\tChoose an option:\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t1. Decimal to Binary\t\t\t\t*\n");
    printf("\t\t\t*\t\t2. Binary to Decimal\t\t\t\t*\n");
    printf("\t\t\t*\t\t3. Decimal to Hexadecimal\t\t\t*\n");
    printf("\t\t\t*\t\t4. Hexadecimal to Decimal\t\t\t*\n");
    printf("\t\t\t*\t\t5. Binary to Hexadecimal\t\t\t*\n");
    printf("\t\t\t*\t\t6. Hexadecimal to Binary\t\t\t*\n");
    printf("\t\t\t*\t\t7. Exit\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n\t\t\tEnter a decimal number: ");
        scanf("%d", &decimal);
        printf("\n\t\t\tBinary representation: ");
        decimalToBinary(decimal);
        break;
    case 2:
        printf("\n\t\t\tEnter a binary number: ");
        scanf("%lld", &binary);
        printf("\n\t\t\tDecimal representation: %d\n", binaryToDecimal(binary));
        break;
    case 3:
        printf("\n\t\t\tEnter a decimal number: ");
        scanf("%d", &decimal);
        printf("\n\t\t\tHexadecimal representation: ");
        decimalToHexadecimal(decimal);
        break;
    case 4:
        printf("\n\t\t\tEnter a hexadecimal number: ");
        scanf("%s", hex);
        printf("\n\t\t\tDecimal representation: %d\n", hexadecimalToDecimal(hex));
        break;
    case 5:
        printf("\n\t\t\tEnter a binary number: ");
        scanf("%lld", &binary);
        printf("\n\t\t\tHexadecimal representation: ");
        binaryToHexadecimal(binary);
        break;
    case 6:
        printf("\n\t\t\tEnter a hexadecimal number: ");
        scanf("%s", hex);
        printf("\n\t\t\tBinary representation: ");
        hexadecimalToBinary(hex);
        break;
    case 7:
        return 0;
    default:
        printf("\n\t\t\tInvalid choice. Please try again.\n");
    }
}

void decimalToBinary(int n)
{
    int binaryNum[32];
    int i = 0;

    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}

// Binary to Decimal Conversion
int binaryToDecimal(long long n)
{
    int decimalNum = 0, i = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        n = n / 10;
        decimalNum += remainder * pow(2, i);
        ++i;
    }

    return decimalNum;
}

// Decimal to Hexadecimal Conversion
void decimalToHexadecimal(int n)
{
    char hexNum[100];
    int i = 0;

    while (n != 0)
    {
        int temp = n % 16;

        if (temp < 10)
        {
            hexNum[i] = temp + 48; // ASCII value of 0 is 48
        }
        else
        {
            hexNum[i] = temp + 55; // ASCII value of A is 65
        }
        n = n / 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexNum[j]);
    printf("\n");
}

// Hexadecimal to Decimal Conversion
int hexadecimalToDecimal(char hex[])
{
    int len = strlen(hex);
    int base = 1; // 16^0
    int decimalNum = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimalNum += (hex[i] - 48) * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimalNum += (hex[i] - 55) * base;
        }
        base = base * 16;
    }

    return decimalNum;
}

// Binary to Hexadecimal Conversion
void binaryToHexadecimal(long long binary)
{
    int decimal = binaryToDecimal(binary);
    decimalToHexadecimal(decimal);
}

// Hexadecimal to Binary Conversion
void hexadecimalToBinary(char hex[])
{
    int decimal = hexadecimalToDecimal(hex);
    decimalToBinary(decimal);
}
/* Number Conversion */


/* CURRENCY CONVERTER */
void currency_separate()
{
    int num;
    printf("\n\n\n\t\t\t*****************************************************************\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\tChoose an option:\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t1. Other Country's currency to BDT.\t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*\t\t2. BDT to Other Country's Currency. \t\t*\n");
    printf("\t\t\t*\t\t\t\t\t\t\t\t*\n");
    printf("\t\t\t*****************************************************************\n");
    printf("\n\t\t\tEnter your choice: : ");
    scanf("%d",&num);
    system("cls"); //clear screen
    if(num==1)
    {
        show_converter_bdt();
        check1_bdt();
    }
    else if(num==2)
    {
        show_converter_others();
        check2_others();
    }
    else
    {
        printf("\n\n\t\t\t\t\tInput Error Please Try Again.\n");
    }
}


void show_converter_bdt() //show the possible convert Other Country's currency to BDT.
{
    printf("\n\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("\t\t\t!!\t\t\t\t\t\t\t\t!!\n");
    printf("\t\t\t!!\t\t 1. America(USD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 2. Australia(AUD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 3. Singapore(SGD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 4. Brunei(BND) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 5. Algeria(DZD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 6. Kuwait(KWD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 7. India(INR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 8. Russia(RUB) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 9. Hong Kong(HKD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 10. Canada(CAD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 11. Indonesia(IDR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 12. Malaysia(MYR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 13. Pakistan(PKR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 14. South Africa(ZAR) >> Bangladesh(BDT)\t!!\n");
    printf("\t\t\t!!\t\t 15. Japan(JPY) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 16. New Zealand(NZD) >> Bangladesh(BDT)\t!!\n");
    printf("\t\t\t!!\t\t 17. Saudi Arabia(SAR) >> Bangladesh(BDT)\t!!\n");
    printf("\t\t\t!!\t\t 18. Thai-Land(THB) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 19. Turkey(TRY) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 20. Bahrain(BHD) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 21. Iran(IRR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 22. Chili(CLP) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 23. Colombia(COP) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 24. Europe(EUR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 25. Sri-Lankan(LKR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 26. China(CNY) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 27. Uganda(UGX) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 28. Egypt(EGP) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 29. Hungari(HUF) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t 30. Oman(OMR) >> Bangladesh(BDT)\t\t!!\n");
    printf("\t\t\t!!\t\t\t\t\t\t\t\t!!\n");
    printf("\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}


void check1_bdt() //call function and check( Other Country's currency to BDT.)
{
    int check;
    printf("\n\t\t\tChoice your conversion and Enter the number : ");
    scanf("%d",&check);
    switch(check)
    {
    case 1:
        USD_BDT();
        break;
    case 2:
        AUD_BDT();
        break;
    case 3:
        SGD_BDT();
        break;
    case 4:
        BND_BDT();
        break;
    case 5:
        DZD_BDT();
        break;
    case 6:
        KWD_BDT();
        break;
    case 7:
        INR_BDT();
        break;
    case 8:
        RUB_BDT();
        break;
    case 9:
        HKD_BDT();
        break;
    case 10:
        CAD_BDT();
        break;
    case 11:
        IDR_BDT();
        break;
    case 12:
        MYR_BDT();
        break;
    case 13:
        PKR_BDT();
        break;
    case 14:
        ZAR_BDT();
        break;
    case 15:
        JPY_BDT();
        break;
    case 16:
        NZD_BDT();
        break;
    case 17:
        SAR_BDT();
        break;
    case 18:
        THB_BDT();
        break;
    case 19:
        TRY_BDT();
        break;
    case 20:
        BHD_BDT();
        break;
    case 21:
        IRR_BDT();
        break;
    case 22:
        CLP_BDT();
        break;
    case 23:
        COP_BDT();
        break;
    case 24:
        EUR_BDT();
        break;
    case 25:
        LKR_BDT();
        break;
    case 26:
        CNY_BDT();
        break;
    case 27:
        UGX_BDT();
        break;
    case 28:
        EGP_BDT();
        break;
    case 29:
        HUF_BDT();
        break;
    case 30:
        OMR_BDT();
        break;
    default:
        //  system("color 04");
        printf("\n\n\t\t\t\t\tInput Error Please Try Again.\n");
        // getch();
        //  system("color 0A");
        break;
    }
}




void show_converter_others() //show the possible convert BDT to Other Country's Currency.
{
    printf("\n\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("\t\t\t!!\t\t\t\t\t\t\t\t!!\n");
    printf("\t\t\t!!\t\t 1. Bangladesh(BDT) >> America(USD)\t\t!!\n");
    printf("\t\t\t!!\t\t 2. Bangladesh(BDT) >> Australia(AUD)\t\t!!\n");
    printf("\t\t\t!!\t\t 3. Bangladesh(BDT) >> Singapore(SGD)\t\t!!\n");
    printf("\t\t\t!!\t\t 4. Bangladesh(BDT) >> Brunei(BND)\t\t!!\n");
    printf("\t\t\t!!\t\t 5. Bangladesh(BDT) >> Algeria(DZD)\t\t!!\n");
    printf("\t\t\t!!\t\t 6. Bangladesh(BDT >> Kuwait(KWD))\t\t!!\n");
    printf("\t\t\t!!\t\t 7. Bangladesh(BDT) >> India(INR)\t\t!!\n");
    printf("\t\t\t!!\t\t 8. Bangladesh(BDT) >> Russia(RUB)\t\t!!\n");
    printf("\t\t\t!!\t\t 9. Bangladesh(BDT) >> Hong Kong(HKD)\t\t!!\n");
    printf("\t\t\t!!\t\t 10. Bangladesh(BDT) >> Canada(CAD)\t\t!!\n");
    printf("\t\t\t!!\t\t 11. Bangladesh(BDT) >> Indonesia(IDR)\t\t!!\n");
    printf("\t\t\t!!\t\t 12. Bangladesh(BDT) >> Malaysia(MYR)\t\t!!\n");
    printf("\t\t\t!!\t\t 13. Bangladesh(BDT) >> Pakistan(PKR)\t\t!!\n");
    printf("\t\t\t!!\t\t 14. Bangladesh(BDT) >> South Africa(ZAR)\t!!\n");
    printf("\t\t\t!!\t\t 15. Bangladesh(BDT) >> Japan(JPY)\t\t!!\n");
    printf("\t\t\t!!\t\t 16. Bangladesh(BDT) >> New Zealand(NZD)\t!!\n");
    printf("\t\t\t!!\t\t 17. Bangladesh(BDT) >> Saudi Arabia(SAR)\t!!\n");
    printf("\t\t\t!!\t\t 18. Bangladesh(BDT) >> Thai-Land(THB)\t\t!!\n");
    printf("\t\t\t!!\t\t 19. Bangladesh(BDT) >> Turkey(TRY)\t\t!!\n");
    printf("\t\t\t!!\t\t 20. Bangladesh(BDT) >> Bahrain(BHD)\t\t!!\n");
    printf("\t\t\t!!\t\t 21. Bangladesh(BDT) >> Iran(IRR)\t\t!!\n");
    printf("\t\t\t!!\t\t 22. Bangladesh(BDT) >> Chili(CLP)\t\t!!\n");
    printf("\t\t\t!!\t\t 23. Bangladesh(BDT) >> Colombia(COP)\t\t!!\n");
    printf("\t\t\t!!\t\t 24. Bangladesh(BDT) >> Europe(EUR)\t\t!!\n");
    printf("\t\t\t!!\t\t 25. Bangladesh(BDT) >> Sri-Lankan(LKR)\t\t!!\n");
    printf("\t\t\t!!\t\t 26. Bangladesh(BDT) >> China(CNY)\t\t!!\n");
    printf("\t\t\t!!\t\t 27. Bangladesh(BDT) >> Uganda(UGX)\t\t!!\n");
    printf("\t\t\t!!\t\t 28. Bangladesh(BDT) >> Egypt(EGP)\t\t!!\n");
    printf("\t\t\t!!\t\t 29. Bangladesh(BDT) >> Hungari(HUF)\t\t!!\n");
    printf("\t\t\t!!\t\t 30. Bangladesh(BDT) >> Oman(OMR)\t\t!!\n");
    printf("\t\t\t!!\t\t\t\t\t\t\t\t!!\n");
    printf("\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}


void check2_others() //call function and check( BDT to Other Country's currency )
{
    int check;
    printf("\n\t\t\tChoice your conversion and Enter the number : ");
    scanf("%d",&check);
    switch(check)
    {
    case 1:
        BDT_USD();
        break;
    case 2:
        BDT_AUD();
        break;
    case 3:
        BDT_SGD();
        break;
    case 4:
        BDT_BND();
        break;
    case 5:
        BDT_DZD();
        break;
    case 6:
        BDT_KWD();
        break;
    case 7:
        BDT_INR();
        break;
    case 8:
        BDT_RUB();
        break;
    case 9:
        BDT_HKD();
        break;
    case 10:
        BDT_CAD();
        break;
    case 11:
        BDT_IDR();
        break;
    case 12:
        BDT_MYR();
        break;
    case 13:
        BDT_PKR();
        break;
    case 14:
        BDT_ZAR();
        break;
    case 15:
        BDT_JPY();
        break;
    case 16:
        BDT_NZD();
        break;
    case 17:
        BDT_SAR();
        break;
    case 18:
        BDT_THB();
        break;
    case 19:
        BDT_TRY();
        break;
    case 20:
        BDT_BHD();
        break;
    case 21:
        BDT_IRR();
        break;
    case 22:
        BDT_CLP();
        break;
    case 23:
        BDT_COP();
        break;
    case 24:
        BDT_EUR();
        break;
    case 25:
        BDT_LKR();
        break;
    case 26:
        BDT_CNY();
        break;
    case 27:
        BDT_UGX();
        break;
    case 28:
        BDT_EGP();
        break;
    case 29:
        BDT_HUF();
        break;
    case 30:
        BDT_OMR();
        break;
    default:
        //  system("color 04");
        printf("\n\n\t\t\t\t\tInput Error Please Try Again.\n");
        // getch();
        //  system("color 0A");
        break;
    }
}






// Other Country's Currency to BDT.

void USD_BDT() //America
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*85) ;
    printf("\n\n\t\t\tThe amount in  %.2f US Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f US Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void AUD_BDT() //Australia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*64.43) ;
    printf("\n\n\t\t\tThe amount in  %.2f Australian Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Australian Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void SGD_BDT() //Singapore
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*63.13) ;
    printf("\n\n\t\t\tThe amount in  %.2f Singapore Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Singapore Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void BND_BDT() //Brunei
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*63.29) ;
    printf("\n\n\t\t\tThe amount in  %.2f Brunneian Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Brunneian Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void DZD_BDT() //Algeria
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*1.6215) ;
    printf("\n\n\t\t\tThe amount in  %.2f Algerian Dinar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Algerian Dinar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void KWD_BDT() //kuwait
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*283.5827) ;
    printf("\n\n\t\t\tThe amount in  %.2f Kuwait Dinar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Kuwait Dinar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void BHD_BDT() //bahrain
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*227.5009) ;
    printf("\n\n\t\t\tThe amount in  %.2f bahraini Dinar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f bahraini Dinar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void ZAR_BDT() //South African
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*5.4059) ;
    printf("\n\n\t\t\tThe amount in  %.2f South African Rand = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f South African Rand = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void PKR_BDT() //Pakistan
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.4852) ;
    printf("\n\n\t\t\tThe amount in  %.2f Pakistani Rupee = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Pakistani Rupee = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void LKR_BDT() //Sri_Lankan_Rupee
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.4235) ;
    printf("\n\n\t\t\tThe amount in  %.2f Sri Lankan Rupee = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Sri Lankan Rupee = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void EUR_BDT() //Euro
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*97.1852) ;
    printf("\n\n\t\t\tThe amount in  %.2f Euro = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Euro = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void COP_BDT() //Colombia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.0217) ;
    printf("\n\n\t\t\tThe amount in  %.2f Colombian Peso = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Colombian Peso = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void CLP_BDT() //Chili
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.1021) ;
    printf("\n\n\t\t\tThe amount in  %.2f Chilean Peso = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Chilean Peso = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void MYR_BDT() //Malaysia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*20.275) ;
    printf("\n\n\t\t\tThe amount in  %.2f Malaysian Ringgit = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Malaysian Ringgit = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void IRR_BDT() //Iran
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.0021) ;
    printf("\n\n\t\t\tThe amount in  %.4f Iranian Rial = %.4f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.4f Iranian Rial = %.4f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void INR_BDT() //India
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*1.1428) ;
    printf("\n\n\t\t\tThe amount in  %.2f Indian Rupee = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Indian Rupee = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void RUB_BDT() //Russia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*1.1636) ;
    printf("\n\n\t\t\tThe amount in  %.2f Russian Ruble = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Russian Ruble = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void IDR_BDT() //Indonesia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.006) ;
    printf("\n\n\t\t\tThe amount in  %.3f Indonesian Rupiah = %.3f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.3f Indonesian Rupiah = %.3f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void CNY_BDT() //China
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*13.4508) ;
    printf("\n\n\t\t\tThe amount in  %.2f Chinese Yuan = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Chinese Yuan = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void CAD_BDT() //Canada
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*66.9039) ;
    printf("\n\n\t\t\tThe amount in  %.2f Canadian Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Canadian Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void HKD_BDT() //Hong_Kong
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*11.0055) ;
    printf("\n\n\t\t\tThe amount in  %.2f Hong Kong Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Hong Kong Dollar = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void UGX_BDT() //Uganda
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.0241) ;
    printf("\n\n\t\t\tThe amount in  %.2f Uganda Shilling = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Uganda Shilling = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void EGP_BDT() //Egypt
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*5.4557) ;
    printf("\n\n\t\t\tThe amount in  %.2f Egyptian Pound = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Egyptian Pound = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void HUF_BDT() //Hungari
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.2683) ;
    printf("\n\n\t\t\tThe amount in  %.2f Hungarian Forint = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Hungarian Forint = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void JPY_BDT() //Japan
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*0.7587) ;
    printf("\n\n\t\t\tThe amount in  %.2f Japanese Yen = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Japanese Yen = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void SAR_BDT() //Saudi
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*22.8617) ;
    printf("\n\n\t\t\tThe amount in  %.2f Saudia Riyal = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Saudia Riyal = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void THB_BDT() //Thai-Land
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*2.5306) ;
    printf("\n\n\t\t\tThe amount in  %.2f Thai Bhat = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Thai Bhat = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void TRY_BDT() //turkey
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*6.3672) ;
    printf("\n\n\t\t\tThe amount in  %.2f Turkish Lira = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Turkish Lira = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void NZD_BDT() //New_Zealand
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*58.3448) ;
    printf("\n\n\t\t\tThe amount in  %.2f New Zealand Dollar= %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f New Zealand Dollar= %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}

void OMR_BDT() //Oman
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount*222.7618) ;
    printf("\n\n\t\t\tThe amount in  %.2f Omani Rial = %.2f Bangladeshi Taka\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Omani Rial = %.2f Bangladeshi Taka\n",amount,total);
    fclose(f);
}






// BDT to Other Country's Currency.

void BDT_KWD() //BDT to kuwait
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/283.5827) ;
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Kuwait Dinar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Kuwait Dinar\n",amount,total);
    fclose(f);
}

void BDT_INR() //BDT to india
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/1.1428) ;
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Indian Rupee\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Indian Rupee\n",amount,total);
    fclose(f);
}

void BDT_RUB() //BDT to Russia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/1.1636) ;
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Russaian Ruble\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Russaian Ruble\n",amount,total);
    fclose(f);
}

void BDT_UGX() //BDT to Uganda
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.0241);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Uganda Shilling\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Uganda Shilling\n",amount,total);
    fclose(f);
}

void BDT_HKD() //BDT to Hong_kong
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/11.0055);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Hong Kong Dollar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Hong Kong Dollar\n",amount,total);
    fclose(f);
}

void BDT_CAD() //BDT to Canada
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/66.9039);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Canadian Dollar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Canadian Dollar\n",amount,total);
    fclose(f);
}

void BDT_CNY() //BDT to China
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/13.4508);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Chinese Yuan\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Chinese Yuan\n",amount,total);
    fclose(f);
}

void BDT_EGP() //BDT to Egyptian
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/5.4557);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Egyptian Pound\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Egyptian Pound\n",amount,total);
    fclose(f);
}

void BDT_HUF() //BDT to Hungari
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.2683);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Hungarian Forint\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Hungarian Forint\n",amount,total);
    fclose(f);
}

void BDT_IDR() //BDT to Indonesia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.006);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Indonesian Rupiah\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Indonesian Rupiah\n",amount,total);
    fclose(f);
}

void BDT_IRR() //BDT to Iran
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.0021);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Iranian Rial\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Iranian Rial\n",amount,total);
    fclose(f);
}

void BDT_MYR() //BDT to Malaysia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/20.275);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Malaysian Ringgit\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Malaysian Ringgit\n",amount,total);
    fclose(f);
}

void BDT_CLP() //BDT to Chilli
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.1021);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Chilean Peso\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Chilean Peso\n",amount,total);
    fclose(f);
}

void BDT_COP() //BDT to Colombia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.0217);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Colombian Peso\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Colombian Peso\n",amount,total);
    fclose(f);
}

void BDT_EUR() //BDT to Europe
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/97.1852);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Euro\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Euro\n",amount,total);
    fclose(f);
}

void BDT_LKR() //BDT to Sri-lanka
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.4235);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Sri-Lanka Rupee\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Sri-Lanka Rupee\n",amount,total);
    fclose(f);
}

void BDT_PKR() //BDT to Pakistani
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.4235);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Pakistani Rupee\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Pakistani Rupee\n",amount,total);
    fclose(f);
}

void BDT_SGD() //BDT to Singapur
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/62.6971);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Singapure Dollar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Singapure Dollar\n",amount,total);
    fclose(f);
}

void BDT_ZAR() //BDT to South Africa
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/5.4059);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f South African Rand\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f South African Rand\n",amount,total);
    fclose(f);
}

void BDT_TRY() //BDT to Turky
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/6.3672);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Turkish Lira\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Turkish Lira\n",amount,total);
    fclose(f);
}

void BDT_THB() //BDT to Thai-Land
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/2.5301);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Thai Baht\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Thai Baht\n",amount,total);
    fclose(f);
}

void BDT_AUD() //BDT to Australia
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/64.43);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Australian Dollar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Australian Dollar\n",amount,total);
    fclose(f);
}

void BDT_NZD() //BDT to New Zealand
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/58.0747);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f New Zealand Dollar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f New Zealand Dollar\n",amount,total);
    fclose(f);
}

void BDT_SAR() //BDT to Saudi
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/22.8499);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Saudi Riyal\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Saudi Riyal\n",amount,total);
    fclose(f);
}

void BDT_OMR() //BDT to Oman
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/222.6473);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Oman Rial\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Oman Rial\n",amount,total);
    fclose(f);
}

void BDT_JPY() //BDT to Japan
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.7567);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Japanese Yen\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Japanese Yen\n",amount,total);
    fclose(f);
}

void BDT_BHD() //BDT to Bahrain
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/227.3477);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Bahrain Dinar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Bahrain Dinar\n",amount,total);
    fclose(f);
}

void BDT_USD() //BDT to US
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/85.72);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f US Dollar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f US Dollar\n",amount,total);
    fclose(f);
}

void BDT_DZD() //BDT to Algerian
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/0.6174);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Algerian Dinar\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Algerian Dinar\n",amount,total);
    fclose(f);
}

void BDT_BND() //BDT to Brunei
{
    FILE *f;
    f=fopen("Calculation Data.txt","a");
    float amount,total;
    printf("\n\t\t\tEnter the amount : ");
    scanf("%f",&amount);
    fprintf(f,"\n\n\t\t\tEnter the amount : %.2f",amount);
    total= (amount/62.5277);
    printf("\n\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Brunei Ringgit\n",amount,total);
    fprintf(f,"\n\t\t\tThe amount in  %.2f Bangladeshi Taka = %.2f Brunei Ringgit\n",amount,total);
    fclose(f);
}
/* CURRENCY CONVERTER */

void read_file()
{
    system("cls");
    char ch;
    FILE *f;
    f=fopen("Calculation Data.txt","r");
    while((ch=fgetc(f)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(f);
}




int main()
{
    system("color 0a");
    cover_page();
    loop();


    return 0;
}












