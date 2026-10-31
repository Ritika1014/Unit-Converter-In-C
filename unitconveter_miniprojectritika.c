#include <stdio.h>

void convert_length();
void convert_weight();
void convert_temperature();

int main() {
    int choice;

    do {
        printf("\nUnit Converter\n");
        printf("1. Length Converter\n");
        printf("2. Weight Converter\n");
        printf("3. Temperature Converter\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convert_length();
                break;
            case 2:
                convert_weight();
                break;
            case 3:
                convert_temperature();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void convert_length() {
    float meters , kilometers, centimeters,  inches;
    int choice;

    printf("\nLength Converter\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Meters to Inches\n");
    printf("4. Kilometers to Meters\n");
    printf("5. Centimeters to Meters\n");
    printf("6. Inches to Meters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length in meters: ");
            scanf("%f", &meters);
            kilometers = meters / 1000;
            printf("%.2f meters is equal to %.2f kilometers\n", meters, kilometers);
            break;
        case 2:
            printf("Enter length in meters: ");
            scanf("%f", &meters);
            centimeters = meters * 100;
            printf("%.2f meters is equal to %.2f centimeters\n", meters, centimeters);
            break;
        case 3:
            printf("Enter length in meters: ");
            scanf("%f", &meters);
            inches = meters * 39.3701;
            printf("%.2f meters is equal to %.2f inches\n", meters, inches);
            break;
        case 4:
            printf("Enter length in kilometers: ");
            scanf("%f", &kilometers);
            meters = kilometers * 1000;
            printf("%.2f kilometers is equal to %.2f meters\n", kilometers, meters);
            break;
        case 5:
            printf("Enter length in centimeters: ");
            scanf("%f", &centimeters);
            meters = centimeters / 100;
            printf("%.2f centimeters is equal to %.2f meters\n", centimeters, meters);
            break;
        case 6:
            printf("Enter length in inches: ");
            scanf("%f", &inches);
            meters = inches / 39.3701;
            printf("%.2f inches is equal to %.2f meters\n", inches, meters);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
    }
}

void convert_weight() {
    float value, result;
    int choice;

    printf("\nWeight Converter\n");
    printf("1. Kilograms to Grams\n");
    printf("2. Kilograms to Pounds\n");
    printf("3. Grams to Kilograms\n");
    printf("4. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter weight in kilograms: ");
            scanf("%f", &value);
            result = value * 1000;
            printf("%.2f kilograms is equal to %.2f grams\n", value, result);
            break;
        case 2:
            printf("Enter weight in kilograms: ");
            scanf("%f", &value);
            result = value * 2.20462;
            printf("%.2f kilograms is equal to %.2f pounds\n", value, result);
            break;
        case 3:
            printf("Enter weight in grams: ");
            scanf("%f", &value);
            result = value / 1000;
            printf("%.2f grams is equal to %.2f kilograms\n", value, result);
            break;
        case 4:
            printf("Enter weight in pounds: ");
            scanf("%f", &value);
            result = value / 2.20462;
            printf("%.2f pounds is equal to %.2f kilograms\n", value, result);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
    }
}

void convert_temperature() {
    float celsius, fahrenheit, kelvin;
    int choice;

    printf("\nTemperature Converter\n");
    printf("1. Celsius to Fahrenheit and Kelvin\n");
    printf("2. Fahrenheit to Celsius and Kelvin\n");
    printf("3. Kelvin to Celsius and Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            kelvin = celsius + 273.15;
            printf("%.2f Celsius is equal to:\n", celsius);
            printf("%.2f Fahrenheit\n", fahrenheit);
            printf("%.2f Kelvin\n", kelvin);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5/9;
            kelvin = celsius + 273.15;
            printf("%.2f Fahrenheit is equal to:\n", fahrenheit);
            printf("%.2f Celsius\n", celsius);
            printf("%.2f Kelvin\n", kelvin);
            break;
        case 3:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
            fahrenheit = (celsius * 9/5) + 32;
            printf("%.2f Kelvin is equal to:\n", kelvin);
            printf("%.2f Celsius\n", celsius);
            printf("%.2f Fahrenheit\n", fahrenheit);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
    }
}