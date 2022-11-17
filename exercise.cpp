#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Square {
    private:
        float side;
        float area, perimeter, diagonal;
        void getSide() {
            cout << "Enter length: ";
            cin >> side;
        }
        void computeArea() {
            // this -> getSide();
            area = pow(side, 2);
            cout << "The area is: "<< area << endl;
        }
        void computePerimeter() {
            // this -> getSide();
            perimeter = side * 4;
            cout << "The perimeter is: " << perimeter << endl;
        }
        void computeDiagonal() {
            diagonal = sqrt(2 * (pow(side,2)));
            cout << "The diagonal is: " << diagonal << endl;            
        }
    public:
        void printSquare() {
            this -> getSide();
            this -> computeArea();
            this -> computeDiagonal();
            this -> computePerimeter();
        }
};

class Circle {
private:
    float radius, area, circumference;
    void getRadius() {
            cout << "Enter radius: ";
            cin >> radius;

    }
    void computeArea() {
        area = 3.142 * radius * radius;
        cout << "The area of the circle is: " << area << endl;

    }
    void computeCircum() {
        circumference = 3.142 * 2 * radius;
        cout << "The circumference of the circle is: " << circumference << endl;

    }
public:
    void printCircle () {
        this -> getRadius();
        this -> computeArea();
        this -> computeCircum();

    }
};

class Cylinder {
    float radius, height, area, volume;
    private:
        void getRH (){
            cout << "Enter Radius of the cylinder: ";
            cin >> radius;
            cout << "Enter height of the cylinder: ";
            cin >> height;
        }

        void computeArea(){
            area = area = 2 * 3.142 * radius * (radius + height);
            cout << "The area of the cylinder is: " << area << endl;
        }
        void computeVolume(){
            volume =  3.142 * pow(radius, 2) *height;
            cout << "The volume of the cylinder is: " << volume << endl;
        }

    public:
    void printCylinder() {
        this -> getRH();
        this -> computeArea();
        this -> computeVolume();
    }

};

class Sphere {
    private:
        float radius, area, volume;
        void getRadius(){
            cout << "Enter radius: ";
            cin >> radius;           
        }
        void computeArea(){
            area = 4 * 3.142 * radius * radius;
            cout << "The area of the sphere is: " << area << endl;
        }
        void computeVolume (){
            volume = (4/3) * pow(radius, 3);
            cout << "The volume of the sphere is: " << volume << endl;
        }
    public:
     void printSphere (){
        this -> getRadius();
        this -> computeArea();
        this -> computeVolume();
     }
};

int main () {
    cout << "name: NYAGA MUTHOMI NATHANIEL V." << endl;
    cout << "Registration no.: SCT211-0013/2021" << endl;
    cout << "Hello, Welcome to shapes" << endl;
    cout << "Do you want to continue? {yes or no}";
    string ans;
    cin >> ans;

    if (ans == "yes")
    {
        while (true)
        {
            cout << endl;
            cout << "Which shape would you like to work on? " << endl;
            cout << "1. Square " << endl;
            cout << "2. Circle " << endl;
            cout << "3. Cylinder" << endl;
            cout << "4. Sphere" << endl;
            cout << "5. Exit" << endl;
            cout << endl;

            int choice;
            cin >> choice;

            if (choice == 1 )
            {
                Square sqr;
                sqr.printSquare();
            }
            else if (choice == 2 )
            {
                Circle crl;
                crl.printCircle();                
            }
            else if ( choice == 3 )
            {
                Cylinder cyl;
                cyl.printCylinder();   
            }
            else if ( choice == 4)
            {
                Sphere spr;
                spr.printSphere();
            }
            else if ( choice == 5)
            {
                cout << "Thankyou for using shapes, goodbye!" << endl;
                exit(0); 
            }
        }

    } 
    else {
        cout << "Thankyou for using shapes, goodbye!" << endl;
        exit(0);
    }
    return 0;
}