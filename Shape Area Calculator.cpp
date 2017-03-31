// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdio.h"
#define Triangle 1
#define Square 2
#define Rectangle 3
#define Parallelogram 4
#define Trapezoid 5
#define Circle 6
#define Ellipse 7 
#define Sector 8


void main()
{
	while (2 > 1)
	{

		int shape = 1;
		int integer = 0;
		float area = 0.0;
		float base = 0.0;
		float verticalHeight = 0.0;
		float length = 0.0;
		float width = 0.0;
		float topWidth = 0.0;
		float baseWidth = 0.0;
		float radius = 0.0;
		float majorRadius = 0.0;
		float minorRadius = 0.0;
		float angle = 0.0;

		printf("Area Calculator\n");

		printf("Enter Choice: \n");

		printf("1 <Triangle>\n");
		printf("2 <Square>\n");
		printf("3 <Rectangle>\n");
		printf("4 <Paralleogram>\n");
		printf("5 <Trapezoid>\n");
		printf("6 <Circle>\n");
		printf("7 <Ellipse>\n");
		printf("8 <Sector>\n");

		printf("Choice: ");
		scanf_s("%d", &shape);

		switch (shape)
		{
		case Triangle:
			printf("Enter Base: ");
			scanf_s("%f", &base);
			printf("Enter Vertical Height: ");
			scanf_s("%f", &verticalHeight);
			area = 0.5 * base * verticalHeight;
			printf("Area = %.2f\n", area);
			break;

		case Square:
			printf("Enter Length: ");
			scanf_s("%f", &length);
			area = length * length;
			printf("Area = %.2f\n", area);
			break;

		case Rectangle:
			printf("Enter Length: ");
			scanf_s("%f", &length);
			printf("Enter Width: ");
			scanf_s("%f", &width);
			area = length * width;
			printf("Area = %.2f\n", area);
			break;

		case Parallelogram:
			printf("Enter Base: ");
			scanf_s("%f", &base);
			printf("Enter Vertical Height: ");
			scanf_s("%f", &verticalHeight);
			area = base * verticalHeight;
			printf("Area = %.2f\n", area);
			break;

		case Trapezoid:
			printf("Enter Top Width: ");
			scanf_s("%f", &topWidth);
			printf("Enter Base Width: ");
			scanf_s("%f", &baseWidth);
			printf("Enter Vertical Height: ");
			scanf_s("%f", &verticalHeight);
			area = (0.5 * baseWidth * topWidth) * verticalHeight;
			printf("Area = %.2f\n", area);
			break;

		case Circle:
			printf("Enter Radius: ");
			scanf_s("%f", &radius);
			area = 3.14 * radius * radius;
			printf("Area = %.2f\n", area);
			break;

		case Ellipse:
			printf("Enter Major Radius: ");
			scanf_s("%f", &majorRadius);
			printf("Enter Minor Radius: ");
			scanf_s("%f", &minorRadius);
			area = 3.14 * majorRadius * minorRadius;
			printf("Area = %.2f\n", area);
			break;

		case Sector:
			printf("Enter Radius: ");
			scanf_s("%f", &radius);
			printf("Enter Angle in Degrees: ");
			scanf_s("%f", &angle);
			{if (angle > 360)
				printf("The value for the angle is invalid!\n");

			else

				area = 0.5 * radius * radius * (angle / 360);
			printf("Area = %.2f\n", area);
			break;
			}

		default:
			printf("The number you entered is invalid!\n");

		}
	}

}

