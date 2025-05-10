#include <iostream>
using namespace std;

// Class Rational with two private float data members: a and b
class Rational {
private:
    float a, b;  // private data members

public:
    // Default constructor to initialize a and b to -1
    Rational() : a(-1), b(-1) {}

    // Parameterized constructor to initialize a and b with user-provided values
    Rational(float a_val, float b_val) : a(a_val), b(b_val) {}

    // Getter for a
    float getA() const {
        return a;
    }

    // Setter for a
    void setA(float a_val) {
        a = a_val;
    }

    // Getter for b
    float getB() const {
        return b;
    }

    // Setter for b
    void setB(float b_val) {
        b = b_val;
    }

    // Overloading the stream insertion operator (<<) to display object data
    friend ostream& operator<<(ostream& out, const Rational& obj) {
        out << "Rational number: " << obj.a << "/" << obj.b;
        return out;
    }

    // Overloading the equality operator (==) to compare two Rational objects
    bool operator==(const Rational& other) const {
        return a == other.a && b == other.b;
    }

    // Static function to return the matching Rational objects
    static Rational* getSameObjects(Rational* arr, int size, Rational lhs, int& newSize) {
        // First, count how many objects are equal to lhs
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == lhs) {
                count++;
            }
        }

        // If no objects are equal, set newSize to 0 and return NULL
        if (count == 0) {
            newSize = 0;
            return NULL;
        }

        // Otherwise, create a new array to store the equal objects
        Rational* result = new Rational[count];
        int index = 0;

        // Copy all matching objects into the new array
        for (int i = 0; i < size; ++i) {
            if (arr[i] == lhs) {
                result[index++] = arr[i];
            }
        }

        // Update newSize to reflect the number of matching objects
        newSize = count;

        return result;
    }
};

// Example usage of the Rational class
int main() {
    // Create an array of Rational objects
    Rational arr[5] = { Rational(-1, -1), Rational(-1, -1), Rational(-2, -2), Rational(-1, -1), Rational(-3, -3) };
    int size = 5;

    // The Rational object to compare against
    Rational lhs(-1, -1);

    // Variable to store the new size of matching objects array
    int newSize = 0;

    // Get the array of equal Rational objects using the static function
    Rational* result = Rational::getSameObjects(arr, size, lhs, newSize);

    // Display the result
    if (result != NULL) {
        cout << "Found " << newSize << " equal objects:" << endl;
        for (int i = 0; i < newSize; ++i) {
            cout << result[i] << endl;
        }
        delete[] result;  // Don't forget to free the dynamically allocated memory
    } else {
        cout << "No equal objects found!" << endl;
    }

    // Demonstrating the use of the stream insertion operator (<<)
    Rational r(-5, -7);
    cout << "Displaying a single Rational object: " << r << endl;

    // Demonstrating the use of the getter and setter methods
    Rational r2;
    r2.setA(-2.5);
    r2.setB(-4.0);
    cout << "After setting values, Rational object: " << r2 << endl;

    return 0;
}

